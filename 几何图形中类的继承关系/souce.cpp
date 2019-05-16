#include"head.h"
#include<cmath>
double Circle::perimeter()
{
	return 2 * 3.14*r;
}

double Circle::area()
{
	return 3.14*r*r;
}

double Rectangle::perimeter()
{
	return 2 * (length + width);
}

double Rectangle::area()
{
	return length * width;
}

double Triangle::perimeter()
{
	return a + b + c;
}

double Triangle::area()
{
	return 0.5*a*b*sqrt(1 - ((a*a + b * b - c * c) / (2 * a*b))*((a*a + b * b - c * c) / (2 * a*b)));
}

double Box::volume()
{
	return length * width*hight;
}

double Cylinder::volume()
{
	return 3.14*r*r*hight;
}

double Cone::volume()
{
	return (3.14*r*r*hight) / 3;
}

double T_pyramid::volume()
{
	return (0.5*a*b*sqrt(1 - ((a*a + b * b - c * c) / (2 * a*b))*((a*a + b * b - c * c) / (2 * a*b)))*hight) / 3;
}

double T_prism::volume()
{
	return 0.5*a*b*sqrt(1 - ((a*a + b * b - c * c) / (2 * a*b))*((a*a + b * b - c * c) / (2 * a*b)))*hight;
}
