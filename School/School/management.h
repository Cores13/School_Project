#pragma once
#ifndef management_h
#define management_h
#include <iostream>
using namespace std;

class management
{
	public:
		management(string f, string l, double sa);
		management();
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

#endif //management_h

