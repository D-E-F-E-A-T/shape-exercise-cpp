#include "stdafx.h"
#include "Triangle.h"

//
// Triangle Constructor
//
Triangle::Triangle(float fBase, float fHeight) :
	m_fBase(fBase),
	m_fHeight(fHeight)
{
}

//
//
//
float Triangle::CalculateArea()
{
	float fReturnValue = 0.0f;

	fReturnValue = 0.5 * m_fBase * m_fHeight;

	return fReturnValue;
}