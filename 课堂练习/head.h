#pragma once
class Person
{
public:
	Person(const char name[], const char gender[]);
private:
	char name[20];
	char gender[2];
};

class Student :public Person
{
public:
	Student(const char name[], const char gender[], int stuId, int stuDuration);
	void print();
private:
	int stuId;
	int stuDuration;
	static int tuition;
};

class Date
{
private:

};


