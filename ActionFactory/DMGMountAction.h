
#ifndef DMGMountAction_INCLUDED
#define DMGMountAction_INCLUDED

#include "Action.h"

class DMGMountAction : public Action
{
public:
	virtual bool Execute() 
	{ 
		return true; 
	}
};

#endif // DMGMountAction_INCLUDED
