// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/BaseAction.h"

void UBaseAction::InitializeAction(FActionContext& context_)
{
	ActionContext = context_;

	return OnInitialize();
}

void UBaseAction::OnInitialize()
{
	
}

void UBaseAction::PerformAction()
{
	
}

void UBaseAction::FinishAction()
{
	
}
