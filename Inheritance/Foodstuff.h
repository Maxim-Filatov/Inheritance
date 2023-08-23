#pragma once
#include <iostream>
#include "Product.h"
#include "Tableware.h"

using namespace std;

class Foodstuff: public Product {
	private:
		int foodId;
	public:
		Foodstuff();
		void setFoodId(int foodId);
		int getFoodId();
		~Foodstuff();
		// Friend function
		friend float computedValue(Tableware tableware, Foodstuff foodstuff);
};
