#pragma once
#ifndef student_h
#define student_h
#include<iostream>
using namespace std;

class student
{
public:
	student(int sco, string first, string last, string dep);
	student();
	void setScore(int sco);
	int getScore();
	void setLastName(string last);
	string getLastName();
	int getID();
	void setID(int x);
	string getFirstName();
	void setFirstName(string first);
	string getDepartment();
	void setDepartment(string dep);
private:
	int id;
	int score;
	string firstName;
	string lastName;
	string department;
};

#endif //student_h