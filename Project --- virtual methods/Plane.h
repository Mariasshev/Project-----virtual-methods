#pragma once
#include "Transport.h"

class Plane : public Transport
{
	bool isBusinessClass;
public:
	void SetClass(bool c);
	bool GetClass();
	virtual void Print();
	virtual void Input();
};

