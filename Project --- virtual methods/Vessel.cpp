#include "Vessel.h"
#include <iostream>
using namespace std;


void Vessel::Input()
{
	cout << "Enter year of car: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelName;
	cout << "Enter number of seats: ";
	cin >> numOfSeats;
	cout << "Enter cost: ";
	cin >> cost;
	cout << "Enter amount of cabins: ";
	cin >> cabins;
}

void Vessel::Print()
{
	cout << "Year: " << year << endl;
	cout << "Amount of cabins: " << cabins << endl;
	cout << "Fuel name: " << fuelName << endl;
	cout << "Number of seats: " << numOfSeats << endl;
	cout << "Cost: " << cost << endl << endl;
}