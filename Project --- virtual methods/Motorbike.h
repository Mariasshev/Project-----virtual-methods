#pragma once
#include "Transport.h"

class Motorbike : public Transport
{
	bool isHelmet;
public:
	virtual void Print();
	virtual void Input();
};
