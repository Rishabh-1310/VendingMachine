// VendingMachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include "VendingMachineManager.h"
#include "VendingException.h"

void GenerateOrders(VendingMachineManager& vendingMachine) {
	try {
		std::vector<Product*> allProducts = vendingMachine.GetAllProducts();
		if (allProducts.size() == 0) {
			throw(VendingException(-1, "Vending Machine out of Products"));
		}

		std::cout << "Available Products:" << std::endl;
		std::cout << "Index" << "\t" << "Name" << "\t" << "Price" << "\t" << "Quantity" << std::endl;

		int count = 1;
		std::unordered_map<int, Product*> indexedProducts;
		for (auto product : allProducts) {
			indexedProducts[count] = product;

			std::cout << count++ << "\t";
			std::cout << product->GetProductName().c_str() << "\t";
			std::cout << product->GetProductPrice() << "\t";
			std::cout << product->GetProductQuantity() << "\t";
			std::cout << std::endl;
		}

		std::cout << "Select an Index to select the item: ";
		int index = -1;
		std::cin >> index;

		if (indexedProducts.find(index) == indexedProducts.end()) {
			throw(VendingException(-2, "Selected Index, is not mapped to a product"));
		}

		std::cout << "Place the amount you paid here: ";
		float amount = 0.00;
		std::cin >> amount;
		if (amount < indexedProducts[index]->GetProductPrice()) {
			throw(VendingException(-3, "Insufficient amount provided"));
		}

		float balance = 0.00;
		if (amount > indexedProducts[index]->GetProductPrice()) {
			indexedProducts[index]->ProductBought();
			balance = amount - indexedProducts[index]->GetProductPrice();
			std::cout << "Your balance: " << balance << std::endl;
		}
	}
	catch (VendingException& ex) {
		if (ex.GetErrorCode() == -1) throw(VendingException(-1, "Vending Machine out of Products"));
		std::cout << ex.GetErrorMessage() << std::endl;
	}
}

int main()
{
	VendingMachineManager vendingMachine;
	try {
		while (true) GenerateOrders(vendingMachine);
	}
	catch (VendingException& ex) {
		std::cout << ex.GetErrorMessage() << std::endl;
	}
}