#pragma once
#include "Transport.h"

class Tram : public Transport
{
	int lastRepair;
public:
	void SetRepair(int l);
	int GetRepair();
	virtual void Print();
	virtual void Input();
};

