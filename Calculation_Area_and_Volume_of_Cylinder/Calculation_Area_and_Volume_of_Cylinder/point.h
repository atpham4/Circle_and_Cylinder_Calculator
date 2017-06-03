#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class point
{
public:
	point();
	point(double x, double y);
	~point();

	void setCoordinates(double x, double y);
	double getX();
	double getY();

	virtual double area() = 0;

private:
	double x;
	double y;
};

