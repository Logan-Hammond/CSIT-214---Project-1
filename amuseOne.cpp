// Author:			Logan Hammond; hamm32637@email.ccbcmd.edu; January 30, 2018
// Source file:		amuseOne.cpp
// Description:		Program that calculates price and change for admission tickets.
// IDE used:		Microsoft Visual Studio 2017

#include <iostream>
#include <iomanip>
using namespace std;

const double CHILDPRICE = 12.00, ADULTPRICE = 20.50;

int main(){
	int adultTix, childTix;
	double adultTotal, childTotal, amountPaid;

	cout << "\n\t\t Chesapeake Amusement Park" << endl << endl;
	cout << "     Enter number of children: ";
	cin >> childTix;
	cout << "     Enter number of adults  : ";
	cin >> adultTix;
	
	childTotal = CHILDPRICE * childTix;
	adultTotal = ADULTPRICE * adultTix;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "\n\n                 Chesapeake Amusement Park";
	cout << "\n                 -------------------------";
	cout << "\n\n               Tickets      Price      Total\n";
	cout << "     Children   " << setw(3) << childTix
		<< setw(14) << CHILDPRICE
		<< setw(11) << childTotal;
	cout << "\n     Adults     " << setw(3) << adultTix
		<< setw(14) << ADULTPRICE
		<< setw(11) << adultTotal;
	cout << "\n     Total Bill" << setw(29) << (childTotal + adultTotal);
	cout << "\n\n     Amount Paid: ";
	cin >> amountPaid;
	cout << "     Change Due :" << setw(27) << (amountPaid - (childTotal + adultTotal));

	cout << endl << endl << "     ";
	system("pause");
	return 0;
}