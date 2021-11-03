#include "VendingMachineManager.h"
#include "SoftDrinks.h"
#include "Chips.h"

VendingMachineManager::VendingMachineManager()
{
	_productSoftDrinks = new SoftDrinks("Coke", 20.00, 3);
	_productChips = new Chips("Lays", 10.00, 2);
}

VendingMachineManager::~VendingMachineManager()
{
	delete _productSoftDrinks;
	delete _productChips;
}


// Returns the combined list of all items
std::vector<Product*> VendingMachineManager::GetAllProducts()
{
	std::vector<Product*> allProducts;
	if (_productChips->GetProductQuantity() > 0) allProducts.push_back(_productChips);
	if (_productSoftDrinks->GetProductQuantity() > 0) allProducts.push_back(_productSoftDrinks);

	return allProducts;
}
