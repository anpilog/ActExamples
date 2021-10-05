/*++

Copyright (C) 2021 Strings developers

All rights reserved.

Abstract: This is a stub class definition of CBase

*/

#include "strexample_base.hpp"
#include "strexample_interfaceexception.hpp"

// Include custom headers here.


using namespace StringsExample::Impl;

/*************************************************************************************************************************
 Class definition of CBase 
**************************************************************************************************************************/

bool CBase::GetLastErrorMessage(std::string & sErrorMessage)
{
	if (m_pLastError.get() != nullptr) {
		sErrorMessage = *m_pLastError;
		return true;
	} else {
		sErrorMessage = "";
		return false;
	}
}

void CBase::ClearErrorMessages()
{
	m_pLastError.reset();
}

void CBase::RegisterErrorMessage(const std::string & sErrorMessage)
{
	if (m_pLastError.get() == nullptr) {
		m_pLastError.reset(new std::string());
	}
	*m_pLastError = sErrorMessage;
}

void CBase::IncRefCount()
{
	++m_nReferenceCount;
}

bool CBase::DecRefCount()
{
	m_nReferenceCount--;
	if (!m_nReferenceCount) {
		delete this;
		return true;
	}
	return false;
}

