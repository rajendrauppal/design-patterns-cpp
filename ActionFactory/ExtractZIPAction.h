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

#ifndef ExtractZIPAction_INCLUDED
#define ExtractZIPAction_INCLUDED

#include "Action.h"

class ExtractZIPAction : public Action
	/// Concrete Action derived class
{
public:
	virtual bool Execute();
		/// Overrides Execute method of abstract base class 'Action'

	static ExtractZIPAction * CreateInstance();
		/// Create method published for ActionFactory to use

private:
	ExtractZIPAction();
		/// Client not allowed to create this object directly

	ExtractZIPAction( const ExtractZIPAction& other );
		/// Client not allowed to copy existing object

	ExtractZIPAction& operator=( const ExtractZIPAction& rhs );
		/// Client not allowed to assign another object to a new one

	~ExtractZIPAction();
		/// Client can't directly destroy this object
};

#endif // ExtractZIPAction_INCLUDED
