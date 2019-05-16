#include<iostream>
#include<cmath>
//#pragma pack(1)
using namespace std;

class Shape
{
public:
	Shape(double x, double y) :xcoord(x), ycoord(y) {}
	virtual double Area()const { return 0, 0; }
protected:
	double xcoord, ycoord;
};

class Circle :public Shape
{
public:
	Circle(double x, double y, double r) :Shape(x, y), radius(r) {}
	virtual double Area()const { return 3.14*radius*radius; }
protected:
	double radius;
	char a;
};

class Rectangle :public Shape
{
public:
	Rectangle(double x1, double y1, double x2, double y2) :Shape(x1, x2), x2coord(x2), y2coord(y2) {}
	virtual double Area()const;
protected:
	int a;
	double x2coord, y2coord;
	char b;
};

double Rectangle::Area() const
{
	return fabs((xcoord - x2coord)*(ycoord - y2coord));
}

void fun(const Shape& sp)
{
	cout << sp.Area() << endl;
}

int main()
{
	Circle c{ 2.0,5.0,4.0 };
	fun(c);
	cout << sizeof(c) << endl;
	Rectangle t{ 2.0,4.0,1.0,2.0 };
	fun(t);
	cout << sizeof(t) << endl;
	system("pause");
	return 0;
}