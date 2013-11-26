
#include "Action.h"
#include "ActionFactory.h"

int main()
{
	Action * mac_action = ActionFactory::CreateAction( ActionFactory::DMG );
	mac_action->Execute();

	Action * win_action = ActionFactory::CreateAction( ActionFactory::ZIP );
	win_action->Execute();

	return 0;
}