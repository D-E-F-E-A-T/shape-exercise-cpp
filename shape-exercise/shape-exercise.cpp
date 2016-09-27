// shape-exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

using namespace std;

int main()
{
	Shape * shapes[3];

	shapes[0] = new Circle(3.5f);
	shapes[1] = new Square(7.432f);
	shapes[2] = new Triangle(1.54f, 3.21f);

	for (int i = 0; i < 3; i++)
	{
		cout << 
			"The area of shape " << 
			i << 
			" is " << 
			shapes[i]->CalculateArea() << 
			endl;
	}

	char buffer[32];
	cin >> buffer;

    return 0;
}

