#pragma once
#include <iostream>
#include "Product.h"
#include "Foodstuff.h"

using namespace std;

class Tableware: private Product {
	private:
		int tablewareId;
	public:
		Tableware();
		void setTablewareId(int tablewareId);
		int getTablewareId();
		~Tableware();
		// Friend function
		friend float computedValue(Tableware tableware, Foodstuff foodstuff);
};
