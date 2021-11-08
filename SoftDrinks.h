#pragma once
#include "Product.h"
class SoftDrinks :
	public Product
{
public:
	SoftDrinks(std::string name, int price, int quantity);
	~SoftDrinks();
};

