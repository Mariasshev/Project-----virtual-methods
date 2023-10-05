#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
	int year;
	string fuelName;
	int numOfSeats;
	double cost;
public:
	Transport() {
		year = 0;
		fuelName = ' ';
		numOfSeats = 0;
		cost = 0;
	}
	Transport(int y, string fuel, int seats, double c);
	void SetFuel(string fuel);
	string GetFuel();
	void SetYear(int y);
	int GetYear();
	void SetSeats(int seat);
	int GetSeats();
	void SetCost(int c);
	double GetCost();

	virtual void Print();
	virtual void Input();
};

