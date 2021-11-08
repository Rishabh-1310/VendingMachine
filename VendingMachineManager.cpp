#include "VendingMachineManager.h"
#include "SoftDrinks.h"
#include "Chips.h"

VendingMachineManager::VendingMachineManager()
{
	_productCoke = new SoftDrinks("Coke", 15, 10);
	_productPepsi = new SoftDrinks("Pepsi", 15, 10);
	_productWater = new SoftDrinks("Water", 10, 20);
	_productLays = new Chips("Lays", 10, 5);
	_productNachos = new Chips("Nachos", 20, 5);
}

VendingMachineManager::~VendingMachineManager()
{
	delete _productCoke;
	delete _productPepsi;
	delete _productWater;
	delete _productLays;
	delete _productNachos;
}


// Returns the combined list of all items
std::vector<Product*> VendingMachineManager::GetAllProducts()
{
	std::vector<Product*> allProducts;
	if (_productCoke->GetProductQuantity() > 0) allProducts.push_back(_productCoke);
	if (_productPepsi->GetProductQuantity() > 0) allProducts.push_back(_productPepsi);
	if (_productWater->GetProductQuantity() > 0) allProducts.push_back(_productWater);
	if (_productLays->GetProductQuantity() > 0) allProducts.push_back(_productLays);
	if (_productNachos->GetProductQuantity() > 0) allProducts.push_back(_productNachos);

	return allProducts;
}
