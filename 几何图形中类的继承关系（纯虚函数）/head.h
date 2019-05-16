#pragma once
#include<iostream>
using namespace std;
class Geometric_shape
{
public:
	virtual void show() {};
	virtual double perimeter() = 0;              //�߶ȳ����࣬�޷��Լ�ʵ��ʵ�������������еĺ���û�о��庬�壬�����ڵ�������Ǹ����ࣨ�����ࣩ������д��
	//virtual double perimeter() { return 0; };  //��֪�� **����** ���麯������д֮ǰ�������������һֱ���ֳ���״̬
												 //��C++�����֪ʶ��������麯������Java�н����ӿ�
	virtual double area() = 0;
	virtual double volume() = 0;       //����volume��Ϊ���麯����ʱ����Ҫ�����¼̳иó������ƽ����
};

class Circle :public Geometric_shape
{
public:
	Circle(double r) :r(r) {};
	virtual void show() { cout << "����һ��Բ"; };
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
	virtual void show() { cout << "����һ������"; };
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
	virtual void show() { cout << "����һ��������"; };
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
	virtual void show() { cout << "����һ��������"; };
	virtual double volume();
private:
	double length, width, hight;
};

class Cylinder :public Circle
{
public:
	Cylinder(double r, double hight) :Circle(r), hight(hight) {};
	virtual void show() { cout << "����һ��Բ��"; };
	virtual double volume();
private:
	double r, hight;
};

class Cone :public Circle
{
public:
	Cone(int r, double hight) :Circle(r), hight(hight) {};
	virtual void show() { cout << "����һ��Բ׶"; };
	virtual double volume();
private:
	double r, hight;
};

class T_pyramid :public Triangle
{
public:
	T_pyramid(double a, double b, double c, double hight) :Triangle(a, b, c), hight(hight) {};
	virtual void show() { cout << "����һ������׶"; };
	virtual double volume();
private:
	double a, b, c, hight;
};

class T_prism :public Triangle
{
public:
	T_prism(double a, double b, double c, double hight) :Triangle(a, b, c), hight(hight) {};
	virtual void show() { cout << "����һ��������"; };
	virtual double volume();
private:
	double a, b, c, hight;
};