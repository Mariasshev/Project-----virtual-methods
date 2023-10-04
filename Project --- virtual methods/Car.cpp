#include "Car.h"
#include <iostream>
using namespace std;

void Car::SetColor(double c)
{
	color = c;
}

string Car::GetColor()
{
	return color;
}

void Car::Input()
{
	cout << "Enter year of car: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelName;
	cout << "Enter number of seats: ";
	cin >> numOfSeats;
	cout << "Enter cost: ";
	cin >> cost;
	cout << "Enter color: ";
	cin >> color;
}

void Car::Print()
{
	cout << "Year: " << year << endl;
	cout << "Color: " << color << endl;
	cout << "Fuel name: " << fuelName << endl;
	cout << "Number of seats: " << numOfSeats << endl;
	cout << "Cost: " << cost << endl << endl;
}
