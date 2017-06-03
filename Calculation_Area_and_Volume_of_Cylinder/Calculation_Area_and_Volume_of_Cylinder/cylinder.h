#pragma once
#include "circle.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class cylinder :
	public circle
{
public:
	cylinder();
	cylinder(double radius, double height);
	~cylinder();

	double area();
	void volume();

	void setHeight(double height);
	double getCylinder_Area();
	double getCylinder_Volume();


private:
	double cylinder_area;
	double cylinder_volume;
	double h;
};


