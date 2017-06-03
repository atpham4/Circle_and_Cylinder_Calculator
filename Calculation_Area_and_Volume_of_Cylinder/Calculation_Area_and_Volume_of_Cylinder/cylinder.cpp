#include "cylinder.h"


cylinder::cylinder()
{
	h = 0;
}

cylinder::cylinder(double radius, double height) :circle(radius)
{
	h = height;
	cylinder_area = (2 * pi*radius*height) + (2 * circle::area());
	cylinder_volume = (height* circle::area());
}


cylinder::~cylinder()
{
	h = 0;
	cylinder_area = 0;
	cylinder_volume = 0;
}

double cylinder::area()
{
	cylinder_area = (2 * pi*getRadius()*h) + (2 * circle::area());
	return cylinder_area;
}

void cylinder::volume()
{
	cylinder_volume = (h* circle::area());
}

void cylinder::setHeight(double height)
{
	h = height;
}

double cylinder::getCylinder_Area()
{
	return cylinder_area;
}

double cylinder::getCylinder_Volume()
{
	return cylinder_volume;
}
