#pragma once
#include "Transport.h"

class Plane : public Transport
{
	bool isBusinessClass;
public:
	virtual void Print();
	virtual void Input();
};

