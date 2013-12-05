/*
The MIT License (MIT)

Copyright (c) 2013 rajendrauppal

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "ActionFactory.h"

#include "ExtractDMGAction.h"
#include "ExtractZIPAction.h"

Action * ActionFactory::_action = (Action*)0;

ActionFactory::ActionFactory()
{

}

ActionFactory::~ActionFactory()
{
	ReleaseActionObject();
}

Action * ActionFactory::GetActionObject( ActionType at )
	/// Creates concrete action object and returns abstract class Action pointer
{
	ReleaseActionObject(); // in case _action object is already aquired

	if ( DMG == at ) {
		_action = ExtractDMGAction::CreateInstance();
	}
	else if ( ZIP == at ) {
		_action = ExtractZIPAction::CreateInstance();
	}

	return _action;
}

void ActionFactory::ReleaseActionObject()
	/// Releases Action object pointed to by action parameter
{
	delete _action;
	_action = (Action*)0;
}
