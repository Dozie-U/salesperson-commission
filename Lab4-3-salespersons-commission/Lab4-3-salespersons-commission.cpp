//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by Dozie U. on 09/18/24

#include <iostream>
using namespace std;

int main()
{
	//declare named constant and variables
	double commissionRate = 0.0;
	double sales = 0.0;
	double commission = 0.0;

	//enter commission rate
	cout << "Enter commission rate: ";
	cin >> commissionRate;

	//enter input item
	cout << "Sales amount: ";
	cin >> sales;

	//calculate and display the commission
	commission = sales * commissionRate;
	cout << "Your total commission is: $" << commission << endl;

	return 0;
}