// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/ActionOpenChest.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NavigationSystem.h"
#include "TurnBasedPrototype/TurnBasedPrototypePlayerController.h"

void UActionOpenChest::OnInitialize()
{
	Super::OnInitialize();

	IsMoving = false;
	bHasReachedDestination = false;
	OpenChestPathPoint = ActionContext.TargetActor->GetActorLocation();//FindClosestPoint();
	
	state = ActionState::Perform;
	//GetChestLocation (has to be walkable)
}

void UActionOpenChest::PerformAction()
{
	Super::PerformAction();
	
	//Start moving
	if (!IsMoving && !bHasReachedDestination)
	{
		AController* Controller = GetControllerFromPerformer();
		if (!Controller)
		{
			UE_LOG(LogTemp, Log, TEXT("AI Controller nullptr"));
		}
        
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(Controller, OpenChestPathPoint);
		IsMoving = true;
		state = ActionState::Perform;
		return;
	}
    
	//Check if arrived
	if (IsMoving && !bHasReachedDestination)
	{
		APawn* Pawn = Cast<APawn>(ActionContext.Performer);
		if (Pawn)
		{
			float Distance = FVector::Dist(Pawn->GetActorLocation(), OpenChestPathPoint);
            
			if (Distance <= 170.0f) //near enought
			{
				IsMoving = false;
				bHasReachedDestination = true;
				AController* Controller = GetControllerFromPerformer();
				UAIBlueprintHelperLibrary::SimpleMoveToLocation(Controller, Pawn->GetActorLocation());
				
				if (AChest* Chest = Cast<AChest>(ActionContext.TargetActor))
				{
					Chest->OnChestOpenOrder();
				}
				state = ActionState::Finish;
				return;
			}
		}
		state = ActionState::Perform;//not arrived
		return;
	}
	state =ActionState::Perform;
	return; 
}

void UActionOpenChest::FinishAction()
{
	Super::FinishAction();
	bool ret = true;

	state = ActionState::Close;
}

FVector UActionOpenChest::FindClosestPoint()
{
	
	AChest* chest = Cast<AChest>(ActionContext.TargetActor);
	ABaseCharacter* ActionPerformer = Cast<ABaseCharacter>(ActionContext.Performer);

	if (!chest || !ActionPerformer)
	{
		UE_LOG(LogTemp, Error, TEXT("OpenChestAction: Invalid parameters - Chest=%s, Performer=%s"), chest ? TEXT("Valid") : TEXT("NULL"),ActionPerformer ? TEXT("Valid") : TEXT("NULL"));
	}

	
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(ActionPerformer->GetWorld());
	const ANavigationData* NavData = NavSys->GetNavDataForProps(ActionPerformer->GetNavAgentPropertiesRef());
	
	FPathFindingQuery Query;

	FVector StartLocation = ActionPerformer->GetActorLocation();
	FVector EndLocation = chest->GetActorLocation();
	
	FNavLocation ProjectedStart;
	if (NavSys->ProjectPointToNavigation(StartLocation, ProjectedStart, FVector(500.0f, 500.0f, 500.0f)))
	{
		StartLocation = ProjectedStart.Location;
	}

	FNavLocation ProjectedEnd;
	if (NavSys->ProjectPointToNavigation(EndLocation, ProjectedEnd, FVector(500.0f, 500.0f, 500.0f)))
	{
		EndLocation = ProjectedEnd.Location;
	}
	Query.NavData = NavData;
	Query.StartLocation = StartLocation;
	Query.EndLocation = EndLocation;
	
	Query.NavAgentProperties = ActionPerformer->GetNavAgentPropertiesRef();
	FPathFindingResult PathResult = NavSys->FindPathSync(Query);

	
	
	FVector closestPoint;

	
	if (PathResult.IsSuccessful() && PathResult.Path.IsValid())
	{
		TArray<FNavPathPoint> PathPoints = PathResult.Path->GetPathPoints();
		for (int i = PathPoints.Num()-1;i>=0; i--)
		{
			float dist = FVector::Dist(PathPoints[i].Location,chest->GetActorLocation());
			if (dist < ActionPerformer->maxInteractionDistance)
			{
				closestPoint = PathPoints[i];
			}else
			{
				break;
			}
		}
	}

	return closestPoint;
}

AController* UActionOpenChest::GetControllerFromPerformer()
{
	//Performer is a Pawn character or npc
	if (APawn* Pawn = Cast<APawn>(ActionContext.Performer))
	{
		return Pawn->GetController();
	}
	
	return nullptr;
}

