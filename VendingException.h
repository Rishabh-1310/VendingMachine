#pragma once
#include <exception>
#include <string>

class VendingException :
	public std::exception
{
	// Error Number
	int _errorCode;
	// Error Message
	std::string _errorMessage;
public:
	VendingException(int errorCode, std::string errorMessage);
	~VendingException();
	// Function returns error code
	int GetErrorCode();
	// Function returns error message
	std::string GetErrorMessage();
};

