/*++

Copyright (C) 2021 Strings developers

All rights reserved.

Abstract: This is the class declaration of CStringObject

*/


#ifndef __STRINGSEXAMPLE_STRINGOBJECT
#define __STRINGSEXAMPLE_STRINGOBJECT

#include "strexample_interfaces.hpp"

// Parent classes
#include "strexample_base.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4250)
#endif

// Include custom headers here.


namespace StringsExample {
namespace Impl {


/*************************************************************************************************************************
 Class declaration of CStringObject 
**************************************************************************************************************************/

class CStringObject : public virtual IStringObject, public virtual CBase {
private:

	/**
	* Put private members here.
	*/

protected:

	/**
	* Put protected members here.
	*/

public:

	/**
	* Put additional public members here. They will not be visible in the external API.
	*/


	/**
	* Public member functions to implement.
	*/

	IStringObject * GetMyStringObject(std::string & sName) override;

};

} // namespace Impl
} // namespace StringsExample

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#endif // __STRINGSEXAMPLE_STRINGOBJECT
