#include "point.h"



point::point()
{
	x = 0;
	y = 0;
}

point::point( double x, double y)
{
	this->x = x;
	this->y = y;
}

point::~point()
{
	x = 0;
	y = 0;
}

void point::setCoordinates(double x, double y)
{
	this->x = x;
	this->y = y;
}

double point::getX()
{
	return x;
}

double point::getY()
{
	return y;
}
