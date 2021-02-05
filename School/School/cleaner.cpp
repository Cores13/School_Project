#include "cleaner.h"
#include <string>
using namespace std;

cleaner::cleaner(string first, string last, double sal) {
	firstName = first;
	lastName = last;
	salary = sal;
}
cleaner::cleaner() {
}
int cleaner::getID() {
	return id;
}
void cleaner::setID(int x) {
	id = x;
}
string cleaner::getFirstName() {
	return firstName;
}
void cleaner::setFirstName(string first) {
	firstName = first;
}
string cleaner::getLastName() {
	return lastName;
}
void cleaner::setLastName(string last) {
	lastName = last;
}
double cleaner::getSalary() {
	return salary;
}
void cleaner::setSalary(double sal) {
	salary = sal;
}