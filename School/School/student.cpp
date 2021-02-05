#include "student.h"
#include<string>
using namespace std;

student::student(int sco, string first, string last, string dep) {
	score = sco;
	firstName = first;
	lastName = last;
	department = dep;

}
student::student() {
}
void student::setScore(int sco) {
	score = sco;
}
int student::getScore() {
	return score;
}
void student::setFirstName(string first) {
	firstName = first;
}
string student::getFirstName() {
	return firstName;
}
void student::setLastName(string last) {
	lastName = last;
}
string student::getLastName() {
	return lastName;
}
void student::setDepartment(string dep) {
	department = dep;
}
string student::getDepartment() {
	return department;
}
int student::getID() {

	return id;
}
void student::setID(int x) {
	id = x;
}