#pragma once
#include "Transport.h"

class Vessel : public Transport
{
	int cabins;
public:
	virtual void Print();
	virtual void Input();
};
