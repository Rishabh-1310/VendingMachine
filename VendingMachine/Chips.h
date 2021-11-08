#pragma once
#include "Product.h"
class Chips :
	public Product
{
public:
	Chips(std::string name, int price, int quantity);
	~Chips();
};

