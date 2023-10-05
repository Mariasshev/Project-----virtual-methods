#pragma once
#include "Transport.h"

class Motorbike : public Transport
{
	bool isHelmet;
public:
	void SetHetmel(bool a);
	bool GetHelmet();
	virtual void Print();
	virtual void Input();
};
