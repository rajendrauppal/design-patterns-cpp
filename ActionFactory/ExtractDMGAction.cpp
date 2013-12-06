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

#include "ExtractDMGAction.h"

ExtractDMGAction::ExtractDMGAction()
{

}

bool ExtractDMGAction::Execute()
{
	string source, destination;

	bool mount_result = mount( source );
	bool extract_result = extract( source, destination );
	bool unmount_result = unmount ( source );
	
	return ( mount_result && extract_result && unmount_result );
}

ExtractDMGAction * ExtractDMGAction::CreateInstance()
{
	return new ExtractDMGAction();
}

bool ExtractDMGAction::mount( string source )
{
	return true;
}

bool ExtractDMGAction::extract( string source, string destination )
{
	return true;
}

bool ExtractDMGAction::unmount( string source )
{
	return true;
}
