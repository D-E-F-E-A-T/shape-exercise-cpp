#include "stdafx.h"
#include "Square.h"

//
// Square Constructor
//
Square::Square(float fSideLength) : m_fSideLength(fSideLength)
{
}

//
//
//
float Square::CalculateArea()
{
	float fReturnValue = 0.0f;

	fReturnValue = m_fSideLength * m_fSideLength;

	return fReturnValue;
}