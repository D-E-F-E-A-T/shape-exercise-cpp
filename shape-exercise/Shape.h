#pragma once

class Shape
{
public:
	// This is a pure virtual function
	//   because it has not default definition.
	//   Pure virtual function definitions
	//   always end with "= 0"
	virtual float CalculateArea() = 0;

protected:

private:
};
