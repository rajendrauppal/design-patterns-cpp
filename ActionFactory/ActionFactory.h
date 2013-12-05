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

#ifndef ActionFactory_INCLUDED
#define ActionFactory_INCLUDED

#include "Action.h"

class ActionFactory
	/// Concrete Action Factory class
	/// Responsible for creating user specified action object
{
public:
	static enum ActionType {DMG, ZIP};
		/// Action types at present, DMG for Macintosh and ZIP for Windows

	static Action * GetActionObject( ActionType at );
		/// Creates concrete action object and returns abstract class Action pointer

	static void ReleaseActionObject( Action * action );
		/// Releases Action object pointed to by action parameter
};

#endif // ActionFactory_INCLUDED
