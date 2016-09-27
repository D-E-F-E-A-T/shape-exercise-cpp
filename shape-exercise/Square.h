#pragma once
#include "Shape.h"

class Square : public Shape
{
public:
	Square(float fSideLength);

	float CalculateArea();

protected:

private:
	float m_fSideLength;
};
