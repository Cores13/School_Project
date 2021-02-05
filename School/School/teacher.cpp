#include "teacher.h"
#include <iostream>
using namespace std;

teacher::teacher(string first, string last, string cour, double sal) {
	firstName = first;
	lastName = last;
	course = cour;
	salary = sal;
}
teacher::teacher() {
}
void teacher::setID(int x) {
	id = x;
}
int teacher::getID() {
	return id;
}
void teacher::setFirstName(string first) {
	firstName = first;
}
string teacher::getFirstName() {
	return firstName;
}
void teacher::setLastName(string last) {
	lastName = last;
}
string teacher::getLastName() {
	return lastName;
}
void teacher::setCourse(string cour) {
	course = cour;
}
string teacher::getCourse() {
	return course;
}
void teacher::setSalary(double sal) {
	salary = sal;
}
double teacher::getSalary() {
	return salary;
}
