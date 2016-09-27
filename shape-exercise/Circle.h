#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(float fRadius);

	float CalculateArea();

protected:

private:
	float m_fRadius;
};
