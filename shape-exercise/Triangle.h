#pragma once
#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle(float fBase, float fHeight);
	float CalculateArea();

protected:

private:
	float m_fBase;
	float m_fHeight;
};