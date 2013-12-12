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
	/// Definition of the PrintDriver abstract class.
{
public:
	virtual void print() = 0;
		/// print() interface.
};


class DisplayDriver
	/// Definition of the DisplayDriver abstract class.
{
public:
	virtual void draw() = 0;
		/// draw() interface.
};


class HighResolutionPrintDriver : public PrintDriver
	/// Definition of HighResolutionPrintDriver class.
{
public:
	void print();
		/// Implements print() interface of PrintDriver abstract class.
};


class HighResolutionDisplayDriver : public DisplayDriver
	/// Definition of HighResolutionDisplayDriver class.
{
public:
	void draw();
		/// Implements draw() interface of DisplayDriver abstract class.
};


class LowResolutionPrintDriver : public PrintDriver
	/// Definition of LowResolutionPrintDriver class.
{
public:
	void print();
		/// Implements print() interface of PrintDriver abstract class.
};


class LowResolutionDisplayDriver : public DisplayDriver
	/// Definition of LowResolutionDisplayDriver class.
{
public:
	void draw();
		/// Implements draw() interface of DisplayDriver abstract class.
};


class ResolutionFactory
	/// Definition of ResolutionFactory abstract class.
{
public:
	typedef enum { HIGH, LOW } Resolution;
		/// enum Resolution to decide which factory to create.

	static ResolutionFactory * GetResolutionFactory( Resolution r );
		/// Returns HighResolutionFactory object OR LowResolutionFactory
		/// object based on Resolution r.

	virtual PrintDriver * GetPrintDriver() = 0;
		/// Interface for creating PrintDriver object.

	virtual DisplayDriver * GetDisplayDriver() = 0;
		/// Interface for creating DisplayDriver object.

private:
	static ResolutionFactory * _factory;
		/// pointer to static instance of ResolutionFactory class.
};


class HighResolutionFactory : public ResolutionFactory
	/// Definition of HighResolutionFactory class.
{
public:
	virtual PrintDriver * GetPrintDriver();
		/// Returns HighResolutionPrintDriver object.

	virtual DisplayDriver * GetDisplayDriver();
		/// Returns HighResolutionDisplayDriver object.
};


class LowResolutionFactory : public ResolutionFactory
	/// Definition of LowResolutionFactory class.
{
public:
	virtual PrintDriver * GetPrintDriver();
		/// Returns LowResolutionPrintDriver object.

	virtual DisplayDriver * GetDisplayDriver();
		/// Returns LowResolutionDisplayDriver object.
};


/*
Differences:
1. Abstract Factory creates Factory, Factory creates Objects.

2. AF uses composition to delegate responsibility of creating objects to 
another class, F uses inheritance and relies on derived classes to create objects.

3. AF doesn't necessarily use F, it may use Builder/Prototype to create objects.
NOTE: Terms Factory pattern and Factory method pattern are used interchangeably. There
is no difference between them.

4. There are only 2 kinds of factory patterns:
Abstract factory and
Factory or Factory method

5. AF is object creational pattern, F is class creational pattern.
*/


#endif // Driver_INCLUDED
