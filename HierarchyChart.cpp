//This program calculates a customer's available credit
#include <iostream>
using namespace std;

int main()
{
	double maxCredit, usedCredit, availableCredit;

	//Get the customer's maximum credit
	cout << "Enter the customer's maximum credit: ";
	cin >> maxCredit;

	//Get the amount of credit used by the customer
	cout << "Enter the amount of credit used by the customer: ";
	cin >> usedCredit;

	//Calculate the available credit
	availableCredit = maxCredit - usedCredit;

	//Display the customer's available credit
	cout << "The customer's available credit is: $" << availableCredit << endl;
	return 0;
}