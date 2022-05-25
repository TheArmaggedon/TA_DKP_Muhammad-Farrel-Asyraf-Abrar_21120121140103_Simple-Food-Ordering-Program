#pragma once
#include <string>
#define MAX_SIZE_FOR_ITEMS 6
#define MAX_ORDER_AMOUNT_PER_ITEM 11
using namespace System;

namespace MenuDataProcess {

	ref class MenuClass {

	private:
		static array<int>^ price = gcnew array<int>(MAX_SIZE_FOR_ITEMS){10000, 20000, 30000, 5000, 7500, 10000};
		static array<String^>^ priceDisplay = gcnew array<String^>(MAX_SIZE_FOR_ITEMS) { "IDR 10000", "IDR 20000", "IDR 30000", "IDR 5000", "IDR 7500", "IDR 10000" };
		static int i = 0;
		static String^ tempDisplay;
		static int tempPrice;
		static int price1, price2, price3, price4, price5, price6;
		

	public: 

		static array<int>^ amount = gcnew array<int>(MAX_ORDER_AMOUNT_PER_ITEM){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

		void setPrice(int a, int b, int c, int d, int e, int f) {
			
			price[0] = a;
			price[1] = b;
			price[2] = c;
			price[3] = d;
			price[4] = e;
			price[5] = f;
			priceDisplay[0] = "IDR " + a;
			priceDisplay[1] = "IDR " + b;
			priceDisplay[2] = "IDR " + c;
			priceDisplay[3] = "IDR " + d;
			priceDisplay[4] = "IDR " + e;
			priceDisplay[5] = "IDR " + f;
			
		}

		static String^ getDisplayPrice() {

			tempDisplay = priceDisplay[i];
			i++;
			return tempDisplay;
			
		}

		static int getCurrentPrice() {
			tempPrice = price[i];
			i++;
			return tempPrice;
		}
		
		static void resetIndex() {

			i = 0;
		}

		static int calculateBurgerTotal(int burgerTotal) {

			return price[0] * burgerTotal;
		}

		static int calculateFriedRiceTotal(int friedRiceTotal) {

			return price[1] * friedRiceTotal;
		}

		static int calculateChickenBriyaniTotal(int chickenTotal) {

			return price[2] * chickenTotal;
		}

		static int calculateOrangeJuiceTotal(int orangeTotal) {

			return price[3] * orangeTotal;
		}

		static int calculateMineralWaterTotal(int waterTotal) {

			return price[4] * waterTotal;
		}

		static int calculateChocoMilkshakeTotal(int chocoTotal) {

			return price[5] * chocoTotal;
		}

		
		
		
		
		~MenuClass() {};
		

		

		


		


	};

}