#pragma once
#include "Product.h"
class Chips :
	public Product
{
public:
	Chips(std::string name, float price, int quantity);
	~Chips();
};

