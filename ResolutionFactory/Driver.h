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

#ifndef Driver_INCLUDED
#define Driver_INCLUDED

class PrintDriver
{
public:
	virtual void print() = 0;
};

class DisplayDriver
{
public:
	virtual void draw() = 0;
};

class HighResolutionPrintDriver : public PrintDriver
{
public:
	void print();
};

class HighResolutionDisplayDriver : public DisplayDriver
{
public:
	void draw();
};

class LowResolutionPrintDriver : public PrintDriver
{
public:
	void print();
};

class LowResolutionDisplayDriver : public DisplayDriver
{
public:
	void draw();
};

/// Resolution factory
class ResolutionFactory
{
public:
	typedef enum { HIGH, LOW } Resolution;
	static ResolutionFactory * GetResolutionFactory( Resolution r );
	virtual PrintDriver * GetPrintDriver() = 0;
	virtual DisplayDriver * GetDisplayDriver() = 0;
private:
	static ResolutionFactory * _factory;
};

class HighResolutionFactory : public ResolutionFactory
{
public:
	virtual PrintDriver * GetPrintDriver();
	virtual DisplayDriver * GetDisplayDriver();
};

class LowResolutionFactory : public ResolutionFactory
{
public:
	virtual PrintDriver * GetPrintDriver();
	virtual DisplayDriver * GetDisplayDriver();
};

#endif /// Driver_INCLUDED
