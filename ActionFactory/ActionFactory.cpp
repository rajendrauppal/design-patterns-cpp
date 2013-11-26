
#include "ActionFactory.h"

#include "DMGMountAction.h"
#include "ExtractZIPAction.h"

Action * ActionFactory::CreateAction(ActionType at)
{
	Action * action = (Action*)0;

	if ( at == DMG ) {
		action = new DMGMountAction();
	}
	else if ( at == ZIP ) {
		action = new ExtractZIPAction();
	}

	return action;
}