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


#ifndef DataHandler_INCLUDED
#define DataHandler_INCLUDED


#include "DataObject.h"


class DataHandler
{
public:
    void execute(string filename);
protected:
    virtual bool isValidFileType(string filename) = 0;
    virtual DataObject transformData(string filename) = 0;
    virtual void process(DataObject data) = 0;
    virtual bool isDebugMode();
};


class StockHandler : public DataHandler
{
protected:
    bool isValidFileType(string filename);
    DataObject transformData(string filename);
    void process(DataObject data);
    bool isDebugMode();
private:
    void log(string message);
};


class DerivativeHandler : public DataHandler
{
protected:
    bool isValidFileType(string filename);
    DataObject transformData(string filename);
    void process(DataObject data);
};


#endif // DataHandler_INCLUDED
