#pragma once
#include <vector>
#include "Product.h"

class VendingMachineManager
{
public:
	VendingMachineManager();
	~VendingMachineManager();
private:
	// Pointer to the instance of Coke
	Product* _productCoke;
	// Pointer to the instance of Pepsi
	Product* _productPepsi;
	// Pointer to the instance of Water
	Product* _productWater;
	// Pointer to the instance of Lays
	Product* _productLays;
	// Pointer to the instance of Lays
	Product* _productNachos;
public:
	// Returns the combined list of all items
	std::vector<Product*> GetAllProducts();
};

