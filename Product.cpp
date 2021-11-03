#include <iostream>
#include "Product.h"

Product::Product(std::string name, float price, int quantity)
	:_productName(name),_productPrice(price), _productQuantity(quantity)
{
}

Product::~Product()
{
}


// Returns the name of the product
std::string Product::GetProductName()
{
	return _productName;
}


// Returns the price of the product
float Product::GetProductPrice()
{
	return _productPrice;
}


// Returns the quantity of the product
int Product::GetProductQuantity()
{
	return _productQuantity;
}


// Update the quantity of Product, when then are vended.
void Product::ProductBought()
{
	if (_productQuantity > 0) _productQuantity--;
}
