#pragma once
#include "Transport.h"

class Tram : public Transport
{
	int lastRepair;
public:
	virtual void Print();
	virtual void Input();
};

