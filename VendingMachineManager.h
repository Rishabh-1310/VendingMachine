#pragma once
#include <vector>
#include "Product.h"

class VendingMachineManager
{
public:
	VendingMachineManager();
	~VendingMachineManager();
private:
	// Pointer to the instance of soft drinks
	Product* _productSoftDrinks;
	// Pointer to the instance of chips
	Product* _productChips;
public:
	// Returns the combined list of all items
	std::vector<Product*> GetAllProducts();
};

