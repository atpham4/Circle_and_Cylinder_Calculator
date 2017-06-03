#include "circle.h"


circle::circle()
{
	r = NULL;
}

circle::circle(double radius)
{
	r = radius;
}


circle::~circle()
{
	r = 0;
	circle_area = 0;
}




void circle::setRadius(double radius)
{
	r = radius;
}

double circle::area()
{
	circle_area = pi * pow(r, 2);
	return circle_area;
}

double circle::getRadius()
{
	return r;
}

double circle::getCircleArea()
{
	return circle_area;
}

