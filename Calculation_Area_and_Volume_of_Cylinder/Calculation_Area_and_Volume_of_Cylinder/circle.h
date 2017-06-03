#pragma once
#include "point.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class circle :
	public point
{
public:
	const double pi = 3.1415926535897;

	circle();
	circle(double radius);
	~circle();

	void setRadius(double radius);

	double area();
	double getRadius();
	double getCircleArea();


private:
	double circle_area;
	double r;

};

