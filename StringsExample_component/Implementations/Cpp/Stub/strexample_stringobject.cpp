/*++

Copyright (C) 2021 Strings developers

All rights reserved.

Abstract: This is a stub class definition of CStringObject

*/

#include "strexample_stringobject.hpp"
#include "strexample_interfaceexception.hpp"

// Include custom headers here.


using namespace StringsExample::Impl;

/*************************************************************************************************************************
 Class definition of CStringObject 
**************************************************************************************************************************/

IStringObject * CStringObject::GetMyStringObject(std::string & sName)
{
	throw EStringsExampleInterfaceException(STRINGSEXAMPLE_ERROR_NOTIMPLEMENTED);
}

