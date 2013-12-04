
#ifndef ActionFactory_INCLUDED
#define ActionFactory_INCLUDED

#include "Action.h"

class ActionFactory
{
public:
	static enum ActionType {DMG, ZIP};
	static Action * CreateAction(ActionType at);
};

#endif // ActionFactory_INCLUDED