#pragma once
#ifndef cleaner_h
#define cleaner_h
#include <iostream>
using namespace std;

class cleaner
{
public:
	cleaner(string f, string l, double sa);
	cleaner();
	int getID();
	void setID(int i);
	double getSalary();
	void setSalary(double sa);
	string getFirstName();
	void setFirstName(string f);
	string getLastName();
	void setLastName(string l);
private:
	int id;
	double salary = 1500;
	string firstName;
	string lastName;
};

#endif //cleaner_h