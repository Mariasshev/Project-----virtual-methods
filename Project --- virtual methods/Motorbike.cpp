#include "Motorbike.h"
#include <iostream>
using namespace std;


void Motorbike::Input()
{
	cout << "Enter year of car: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelName;
	cout << "Enter number of seats: ";
	cin >> numOfSeats;
	cout << "Enter cost: ";
	cin >> cost;
	cout << "Is there a helmet? : ";
	cin >> isHelmet;
}

void Motorbike::Print()
{
	cout << "Year: " << year << endl;
	cout << "Helmet: " << isHelmet << endl;
	cout << "Fuel name: " << fuelName << endl;
	cout << "Number of seats: " << numOfSeats << endl;
	cout << "Cost: " << cost << endl << endl;
}