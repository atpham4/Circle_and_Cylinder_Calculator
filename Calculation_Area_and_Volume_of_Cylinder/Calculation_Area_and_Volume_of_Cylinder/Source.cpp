#include <iostream>
#include "circle.h"
#include "cylinder.h"
#include "point.h"
using namespace std;

int main() {
	cylinder *cyl = new cylinder(2, 2);
	cout << "Radius = 2" << endl << "Height = 2" << endl;
	cout << "Area of the circle is " << cyl->getCircleArea() << endl;
	cout << "Area of the cylinder is " << cyl->getCylinder_Area() << endl;
	cout << "Volume of the cylinder is " << cyl->getCylinder_Volume() << endl << endl;

	cyl->circle::setRadius(4);
	cout << "Changed radius = 4" << endl;
	cyl->area();
	cout << "Area of the circle is " << cyl->getCircleArea() << endl;
	cout << "Area of the cylinder is " << cyl->getCylinder_Area() << endl;
	cout << "Volume of the cylinder is " << cyl->getCylinder_Volume() << endl << endl;

	cyl->setHeight(4);
	cout << "Changed height = 4" << endl;
	cyl->area();
	cyl->volume();
	cout << "Area of the circle is " << cyl->getCircleArea() << endl;
	cout << "Area of the cylinder is " << cyl->getCylinder_Area() << endl;
	cout << "Volume of the cylinder is " << cyl->getCylinder_Volume() << endl << endl;

	system("pause");
	return 0;
}