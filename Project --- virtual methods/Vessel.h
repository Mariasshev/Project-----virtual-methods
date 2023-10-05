#pragma once
#include "Transport.h"

class Vessel : public Transport
{
	int cabins;
public:
	void SetCab(int c);
	int GetCab();
	virtual void Print();
	virtual void Input();
};
