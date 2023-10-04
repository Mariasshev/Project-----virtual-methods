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
	virtual void SetYear(int y);
	virtual int GetYear();
	virtual void SetSeats(int seat);
	virtual int GetSeats();
	virtual void SetCost(int c);
	virtual double GetCost();

	virtual void Print();
	virtual void Input();
};

