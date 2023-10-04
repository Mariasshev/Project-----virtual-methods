#include "Tram.h"
#include <iostream>
using namespace std;


void Tram::Input()
{
	cout << "Enter year of car: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelName;
	cout << "Enter number of seats: ";
	cin >> numOfSeats;
	cout << "Enter cost: ";
	cin >> cost;
	cout << "Enter year of last repair: ";
	cin >> lastRepair;
}

void Tram::Print()
{
	cout << "Year: " << year << endl;
	cout << "Year of last repair: " << lastRepair << endl;
	cout << "Fuel name: " << fuelName << endl;
	cout << "Number of seats: " << numOfSeats << endl;
	cout << "Cost: " << cost << endl << endl;
}