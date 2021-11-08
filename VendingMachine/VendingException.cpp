#include "VendingException.h"


VendingException::VendingException(int errorCode,std::string errorMessage)
	:_errorCode(errorCode), _errorMessage(errorMessage)
{
}

VendingException::~VendingException()
{
}

// Function returns error code
int VendingException::GetErrorCode()
{
	return _errorCode;
}


// Function returns error message
std::string VendingException::GetErrorMessage()
{
	return _errorMessage;
}
