// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/BaseAction.h"

bool UBaseAction::InitializeAction(FActionContext& context_)
{
	ActionContext = context_;

	return OnInitialize();
}

bool UBaseAction::OnInitialize()
{
	return true;
}

bool UBaseAction::PerformAction()
{
	return true;
}

bool UBaseAction::FinishAction()
{
	return true;
}
