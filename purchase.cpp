/*
Description: prompt user to enter amount of purchase

below 100: no discount
1000-5000:10% discount
above 5000:20% discount
Name: lawrence Odanga
Reg_no: BCS-03-0052/2025

*/
#include <iostream>
using namespace std;

int main()

{

	float price, discount, finalprice;

	cout << "Enter purchase price: " << endl;
	cin >> price;

	if (price < 100)
	{
		discount = 0;
	}
	else if (price >= 1000 && price <= 5000)
	{
		discount = 0.10 * price;
	}
	else if (price > 5000)
	{
		discount = 0.20 * price;
	}

	finalprice = price - discount;

	cout << "Price: " << price << endl;
	cout << "Discount: " << discount << endl;
	cout << "Final price: " << finalprice << endl;

	return 0;
}