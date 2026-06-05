// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/ActionOpenChest.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NavigationSystem.h"

bool UActionOpenChest::OnInitialize()
{
	Super::OnInitialize();

	IsMoving = false;
	OpenChestPathPoint = FindClosestPoint();
	
	return true;
	//GetChestLocation (has to be walkable)
}

bool UActionOpenChest::PerformAction()
{
	Super::PerformAction();
	bool ret = false;

	if (!IsMoving)
	{
		//Used only for controllers?
		//UAIBlueprintHelperLibrary::SimpleMoveToLocation(C, OpenChestPathPoint);
	}
	
	
	return ret;
	
}

bool UActionOpenChest::FinishAction()
{
	Super::FinishAction();
	bool ret = false;

	return ret;
}

FVector UActionOpenChest::FindClosestPoint()
{
	AChest* chest = Cast<AChest>(ActionContext.TargetActor);
	ABaseCharacter* ActionPerformer = Cast<ABaseCharacter>(ActionContext.Performer);

	if (!chest || !ActionPerformer)
	{
		UE_LOG(LogTemp, Error, TEXT("OpenChestAction: Invalid parameters - Chest=%s, Performer=%s"), chest ? TEXT("Valid") : TEXT("NULL"),ActionPerformer ? TEXT("Valid") : TEXT("NULL"));
	}

	//Find the point in the path where the performer will be in range to open chest
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	FPathFindingQuery Query;
	Query.StartLocation = ActionPerformer->GetActorLocation();
	Query.EndLocation = chest->GetActorLocation();;
	Query.NavAgentProperties = ActionPerformer->GetNavAgentPropertiesRef();
	FPathFindingResult PathResult = NavSys->FindPathSync(Query.NavAgentProperties,Query,EPathFindingMode::Regular);

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



