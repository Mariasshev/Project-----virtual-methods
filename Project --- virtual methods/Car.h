#pragma once
#include "Transport.h"


class Car : public Transport
{
private:
	string color;
public:
	void SetColor(double c);
	string GetColor();
	Car() = default;
	virtual void Print();
	virtual void Input();
};

