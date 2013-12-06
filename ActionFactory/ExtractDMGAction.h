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

#ifndef ExtractDMGAction_INCLUDED
#define ExtractDMGAction_INCLUDED

#include <string>

#include "Action.h"

using std::string;

class ExtractDMGAction : public Action
	/// Concrete Action derived class
{
public:
	virtual bool Execute();
		/// Overrides Execute method of abstract base class 'Action'

	static ExtractDMGAction * CreateInstance();
		/// Create method published for ActionFactory to use

private:
	ExtractDMGAction();
		/// Client not allowed to create this object directly

	ExtractDMGAction( const ExtractDMGAction& other );
		/// Client not allowed to copy existing object

	ExtractDMGAction& operator=( const ExtractDMGAction& rhs );
		/// Client not allowed to assign another object to a new one

	~ExtractDMGAction();
		/// Client can't directly destroy this object

	bool mount( string source );
		/// Mounts DMG disk image source to machine volumes

	bool extract( string source, string destination );
		/// Extracts DMG disk image from source to destination
		/// source: full path to dmg
		/// destination: valid existing path to destination, will create if not exists

	bool unmount( string source );
		/// Unmounts DMG disk image source from machine volumes
};

#endif // ExtractDMGAction_INCLUDED
