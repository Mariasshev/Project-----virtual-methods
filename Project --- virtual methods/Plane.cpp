#include "Plane.h"
#include <iostream>
using namespace std;


void Plane::Input()
{
	cout << "Enter year of car: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelName;
	cout << "Enter number of seats: ";
	cin >> numOfSeats;
	cout << "Enter cost: ";
	cin >> cost;
	cout << "Business class: ";
	cin >> isBusinessClass;
}

void Plane::Print()
{
	cout << "Year: " << year << endl;
	cout << "Business class: " << isBusinessClass << endl;
	cout << "Fuel name: " << fuelName << endl;
	cout << "Number of seats: " << numOfSeats << endl;
	cout << "Cost: " << cost << endl << endl;
}