#pragma once
#include<iostream>
using namespace std;
class Geometric_shape
{
public:
	virtual void show() {};
	virtual double perimeter() = 0;              //高度抽象类，无法自己实现实例化。抽象类中的函数没有具体含义，它存在的意义就是给子类（派生类）进行重写的
	//virtual double perimeter() { return 0; };  //且知道 **所有** 纯虚函数被重写之前，抽象类的子类一直保持抽象状态
						     //在C++中这个知识点叫做纯虚函数，在Java中叫做接口
	virtual double area() = 0;
	virtual double volume() = 0;       //当将volume变为纯虚函数的时候，需要在以下继承该抽象类的平面中
};

class Circle :public Geometric_shape
{
public:
	Circle(double r) :r(r) {};
	virtual void show() { cout << "构造一个圆"; };
	virtual double perimeter();
	virtual double area();
	virtual double volume() { return 0; }
private:
	double r;
};

class Rectangle :public Geometric_shape
{
public:
	Rectangle(double length, double width) :length(length), width(width) {};
	virtual void show() { cout << "构造一个矩形"; };
	virtual double perimeter();
	virtual double area();
	virtual double volume() { return 0; }
private:
	double length, width;
};

class Triangle :public Geometric_shape
{
public:
	Triangle(double a, double b, double c) :a(a), b(b), c(c) {};
	virtual void show() { cout << "构造一个三角形"; };
	virtual double perimeter();
	virtual double area();
	virtual double volume() { return 0; }
private:
	double a, b, c;
};

class Box :public Rectangle
{
public:
	Box(double length, double width, double hight) :Rectangle(length, width), hight(hight) {};
	virtual void show() { cout << "构造一个长方体"; };
	virtual double volume();
private:
	double length, width, hight;
};

class Cylinder :public Circle
{
public:
	Cylinder(double r, double hight) :Circle(r), hight(hight) {};
	virtual void show() { cout << "构造一个圆柱"; };
	virtual double volume();
private:
	double r, hight;
};

class Cone :public Circle
{
public:
	Cone(int r, double hight) :Circle(r), hight(hight) {};
	virtual void show() { cout << "构造一个圆锥"; };
	virtual double volume();
private:
	double r, hight;
};

class T_pyramid :public Triangle
{
public:
	T_pyramid(double a, double b, double c, double hight) :Triangle(a, b, c), hight(hight) {};
	virtual void show() { cout << "构造一个三棱锥"; };
	virtual double volume();
private:
	double a, b, c, hight;
};

class T_prism :public Triangle
{
public:
	T_prism(double a, double b, double c, double hight) :Triangle(a, b, c), hight(hight) {};
	virtual void show() { cout << "构造一个三棱柱"; };
	virtual double volume();
private:
	double a, b, c, hight;
};
