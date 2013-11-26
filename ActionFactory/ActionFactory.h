
#ifndef _ACTION_FACTORY_H_
#define _ACTION_FACTORY_H_

#include "Action.h"

class ActionFactory
{
public:
	static enum ActionType {DMG, ZIP};
	static Action * CreateAction(ActionType at);
};

#endif