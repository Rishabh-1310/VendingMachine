#pragma once
#include <iostream>

class Product
{
protected:
	// Name of the item.
	std::string _productName;
	// Price of the item.
	float _productPrice;
	// Quantity of the item.
	int _productQuantity;
public:
	Product(std::string name, float price, int quantity);
	~Product();
	// Returns the name of the product
	std::string GetProductName();
	// Returns the price of the product
	float GetProductPrice();
	// Returns the quantity of the product
	int GetProductQuantity();
	// Update the quantity of Product, when then are vended.
	void ProductBought();
};

