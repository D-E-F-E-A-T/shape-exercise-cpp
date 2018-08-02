#include "stdafx.h"
#include "Circle.h"
#include "Constants.h"

//
// Circle constructor
//
Circle::Circle(float fRadius) : m_fRadius(fRadius)
{
}

//
//
//
float Circle::CalculateArea()
{
	float fReturnValue = 0.0f;

	fReturnValue = PI * m_fRadius * m_fRadius;

	return fReturnValue;
}