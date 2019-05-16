//#include<iostream>
#include"head.h"
//using namespace std;

Person::Person(const char name[],const char gender[])
{
	strncpy_s(this->name, name, sizeof(name));
	strncpy_s(this->gender, gender, sizeof(gender));
}

void Student::print()
{
	cout << stuId << endl;
	cout << stuDuration << endl;
	cout << stuDuration * 5000 << endl;
}

Student::Student(const char name[],const char gender[],int stuId = 0, int stuDuration = 0):Person(name,gender)
{
	this->stuId = stuId;
	this->stuDuration = stuDuration;
}