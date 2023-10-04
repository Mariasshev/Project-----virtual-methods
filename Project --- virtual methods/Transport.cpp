#include "Transport.h"
#include <iostream>

Transport::Transport(int y, string fuel, int seats, double c) {
	year = y;
	fuelName = fuel;
	numOfSeats = seats;
	cost = c;
}

void Transport::SetFuel(string fuel)
{
	fuelName = fuel;
}

string Transport::GetFuel()
{
	return fuelName;
}

void Transport::SetYear(int y)
{
	year = y;
}

int Transport::GetYear()
{
	return year;
}

void Transport::SetSeats(int seat)
{
	numOfSeats = seat;
}

int Transport::GetSeats()
{
	return numOfSeats;
}

void Transport::SetCost(int c)
{
	cost = c;
}

double Transport::GetCost()
{
	return cost;
}

void Transport::Print()
{
	cout << "Year: " << year << endl;
	cout << "Fuel name: " << fuelName << endl;
	cout << "Number of seats: " << numOfSeats << endl;
	cout << "Cost: " << cost << endl << endl;
}

void Transport::Input()
{
	cout << "Enter year of transport: ";
	cin >> year;
	cout << "Enter fuel name: ";
	cin >> fuelName;
	cout << "Enter number of seats: ";
	cin >> numOfSeats;
	cout << "Enter cost: ";
	cin >> cost;
}
