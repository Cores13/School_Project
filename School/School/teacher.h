#pragma once
#ifndef teacher_h
#define teacher_h
#include <iostream>
using namespace std;

class teacher
{
public:
    teacher(string first, string last, string cour, double sal);
    teacher();
    int getID();
    void setID(int x);
    double getSalary();
    void setSalary(double sal);
    string getFirstName();
    void setFirstName(string first);
    string getLastName();
    void setLastName(string last);
    string getCourse();
    void setCourse(string sub);
private:
    int id;
    double salary;
    string firstName;
    string lastName;
    string course;
};

#endif //teacher_h