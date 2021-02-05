#include "management.h"
#include <string>
using namespace std;

management::management(string first, string last, double sal) {
	firstName = first;
	lastName = last;
	salary = sal;
}
management::management() {
}
int management::getID() {
	return id;
}
void management::setID(int x) {
	id = x;
}
string management::getFirstName() {
	return firstName;
}
void management::setFirstName(string first) {
	firstName = first;
}
string management::getLastName() {
	return lastName;
}
void management::setLastName(string last) {
	lastName = last;
}
double management::getSalary() {
	return salary;
}
void management::setSalary(double sal) {
	salary = sal;
}