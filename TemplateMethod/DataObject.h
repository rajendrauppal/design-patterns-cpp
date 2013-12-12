/*
The MIT License (MIT)

Copyright (c) 2013 Rajendra Kumar Uppal

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


#ifndef DataObject_INCLUDED
#define DataObject_INCLUDED


#include <string>
#include "Types.h"

using std::string;


class DataObject
{
public:
    string getName() { return _name; }
    void setName(string name) { _name = name; }
    double getOpenValue() { return _openValue; }
    void setOpenValue(double openValue) { _openValue = openValue; }
    double getHighValue() { return _highValue; }
    void setHighValue(double highValue) { _highValue = highValue; }
    double getLowValue() { return _lowValue; }
    void setLowValue(double lowValue) { _lowValue = lowValue; }
    double getCloseValue() { return _closeValue; }
    void setCloseValue(double closeValue) { _closeValue = closeValue; }
private:
    static const UInt32 _serialVersionUID = 1L;
    string _name;
    double _openValue;
    double _highValue;
    double _lowValue;
    double _closeValue;
};


#endif // DataObject_INCLUDED
