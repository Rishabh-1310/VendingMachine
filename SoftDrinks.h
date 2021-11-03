#pragma once
#include "Product.h"
class SoftDrinks :
	public Product
{
public:
	SoftDrinks(std::string name, float price, int quantity);
	~SoftDrinks();
};

