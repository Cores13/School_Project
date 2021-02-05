#include <iostream>
#include <string>
#include "teacher.h"
#include "student.h"
#include "cleaner.h"
#include "management.h"
using namespace std;

cleaner cleanOb[10];
teacher teachOb[10];
student studOb[10];
management manaOb[10];
int IDCleaner = 1;
int IDTeacher = 1;
int IDStud = 1;
int IDMana = 1;
int menu = 0;

void listCleaners() {
	cout << endl;
	for (int id = 0; id < 10; id++) {
			cout << "Name: " << cleanOb[id].getLastName() << ", " << cleanOb[id].getFirstName() << endl;
			cout << "ID: " << cleanOb[id].getID() << endl;
			cout << "Salary: " << cleanOb[id].getSalary() << endl;

	}
}
void listTeachers() {
	cout << endl;
	for (int id = 0; id < 10; id++) {
			cout << "Name: " << teachOb[id].getLastName() << ", " << teachOb[id].getFirstName() << endl;
			cout << "ID: " << teachOb[id].getID() << endl;
			cout << "Course: " << teachOb[id].getCourse() << endl;
			cout << "Salary: " << teachOb[id].getSalary() << endl;
	}
}
void listStudents() {
	cout << endl;
	for (int id = 0; id < 10; id++) {
			cout << "First name: " << studOb[id].getLastName() << ", " << studOb[id].getFirstName() << endl;
			cout << "ID: " << studOb[id].getID() << endl;
			cout << "Department: " << studOb[id].getDepartment() << endl;
			cout << "Score: " << studOb[id].getScore() << endl;
	}
}
void listManagers() {
	cout << endl;
	for (int id = 0; id < 10; id++) {
			cout << "Name: " << manaOb[id].getLastName() << ", " << manaOb[id].getFirstName() << endl;
			cout << "ID: " << manaOb[id].getID() << endl;
			cout << "Salary: " << manaOb[id].getSalary() << endl;
	}
}
void makeCleaner(string first, string last, double salary) {
			cleanOb[IDCleaner].setFirstName(first);
			cleanOb[IDCleaner].setLastName(last);
			cleanOb[IDCleaner].setID(IDCleaner);
			cleanOb[IDCleaner].setSalary(salary);
			IDCleaner++;
}
void makeTeacher(string first, string last, string course, double salary) {
			teachOb[IDTeacher].setFirstName(first);
			teachOb[IDTeacher].setLastName(last);
			teachOb[IDTeacher].setID(IDTeacher);
			teachOb[IDTeacher].setCourse(course);
			teachOb[IDTeacher].setSalary(salary);
			IDTeacher++;
}
void makeStudent(string first, string last,string department) {
			studOb[IDStud].setFirstName(first);
			studOb[IDStud].setLastName(last);
			studOb[IDStud].setID(IDTeacher);
			studOb[IDStud].setDepartment(department);
			IDStud++;
}
void makeManager(string first, string last, double salary) {
			manaOb[IDMana].setID(IDCleaner);
			manaOb[IDMana].setFirstName(first);
			manaOb[IDMana].setLastName(last);
			manaOb[IDMana].setSalary(salary);
			IDMana++;
}
void removeCleaner(int help) {
	int id;
	for (id = 0; id < 10; id++)
		if (cleanOb[id].getID() == help) {
			if (id < 10) {
				for (int id2 = id; id2 < 10; id2++)
					cleanOb[id2] = cleanOb[id2 + 1];
			}
			break;
		}
}
void removeTeacher(int help) {
	int id;
	for (id = 0; id < 10; id++)
		if (teachOb[id].getID() == help) {
			if (id < 10) {
				for (int id2 = id; id2 < 10; id2++)
					teachOb[id2] = teachOb[id2 + 1];
			}
			break;
		}
}
void removeStudent(int help) {
	int id;
	for (id = 0; id < 10; id++)
		if (studOb[id].getID() == help) {
			if (id < 10) {
				for (int id2 = id; id2 < 10; id2++)
					studOb[id2] = studOb[id2 + 1];
			}
			break;
		}
}
void removeManager(int help) {
	int id;
	for (id = 0; id < 10; id++)
		if (manaOb[id].getID() == help) {
			break;
		}
	if (id < 10) {
		for (int id2 = id; id2 < 10; id2++)
			manaOb[id2] = manaOb[id2 + 1];
	}
}
int main() {
	do {
		if (menu == 0) {
			cout << "This is what you can do in our school:\n" << endl;
			cout << "1 -Make teacher" << endl;
			cout << "2 -Remove teacher" << endl;
			cout << "3 -List of teachers" << endl;
			cout << "4 -Change teacher's salary" << endl;
			cout << "5 -Change teacher's first name" << endl;
			cout << "6 -Change teacher's last name" << endl;
			cout << "7 -Change teacher's course" << endl;
			cout << "8 -Make student" << endl;
			cout << "9 -Remove student" << endl;
			cout << "10 -List of students" << endl;
			cout << "11 -Grade a student" << endl;
			cout << "12 -Change student's first name" << endl;
			cout << "13 -Change student's last name" << endl;
			cout << "14 -Change student's department" << endl;
			cout << "15 -Make cleaner" << endl;
			cout << "16 -Remove cleaner " << endl;
			cout << "17 -List of cleaners" << endl;
			cout << "18 -Change cleaner's salary" << endl;
			cout << "19 -Change cleaner's first name" << endl;
			cout << "20 -Change cleaner's last name" << endl;
			cout << "21 -Make manager" << endl;
			cout << "22 -Remove manager" << endl;
			cout << "23 -List of managers" << endl;
			cout << "24 -Change manager's salary" << endl;
			cout << "25 -Change manager's first name" << endl;
			cout << "26 -Change manager's last name" << endl;
			cout << "100 -Exit" << endl;
			cout << "What do you want to access: ";
			cin >> menu;
			cout << endl;
		}
		else if (menu == 1) {
			cout << "Enter the first name of first teacher: ";
			string first;
			cin >> first;
			cout << "Enter the last name of first teacher: ";
			string last;
			cin >> last;
			cout << "Enter the course that he is going to hold: ";
			string course;
			cin >> course;
			cout << "Enter his course: ";
			double salary;
			cin >> salary;
			makeTeacher(first,last,course,salary);
			menu = 0;
		}
		else if (menu == 2) {
			listTeachers();
			cout << "Enter ID of a teacher: ";
			int id;
			cin >> id;
			removeTeacher(id);
			cout << endl;
			menu = 0;
		}
		else if (menu == 3) {
			listTeachers();
			cout << endl;
			menu = 0;
		}
		else if (menu == 4) {
			cout << "Enter ID of a teacher:" << endl;
			int id;
			cin >> id;
			cout << "Enter salary:" << endl;
			double sal;
			cin >> sal;
			teachOb[id].setSalary(sal);
			cout << endl;
			menu = 0;
		}
		else if (menu == 5) {
			cout << "Enter ID of a teacher:" << endl;
			int id;
			cin.ignore();
			cin >> id;
			cout << "Enter new first name:" << endl;
			string first;
			cin.ignore();
			cin >> first;
			teachOb[id].setFirstName(first);
			menu = 0;
		}
		else if (menu == 6) {
			cout << "Enter ID of a teacher:" << endl;
			int id;
			cin.ignore();
			cin >> id;
			cout << "Enter new last name:" << endl;
			string last;
			cin.ignore();
			cin >> last;
			teachOb[id].setLastName(last);
			menu = 0;
		}
		else if (menu == 7) {
			cout << "Enter ID of a teacher:" << endl;
			int id;
			cin.ignore();
			cin >> id;
			cout << "Enter new course:" << endl;
			string sub;
			cin.ignore();
			cin >> sub;
			teachOb[id].setCourse(sub);
			menu = 0;
		}
		else if (menu == 8) {
			cout << "Enter the first name of a student: ";
			string first;
			cin >> first;
			cout << "Enter the last name of a student: ";
			string last;
			cin >> last;
			cout << "Enter the department of a student: ";
			string department;
			cin >> department;
			makeStudent(first, last, department);
			menu = 0;
		}
		else if (menu == 9) {
			listStudents();
			cout << "Enter ID of a student: ";
			int id;
			cin >> id;
			removeStudent(id);
			cout << endl;
			menu = 0;
		}
		else if (menu == 10) {
			listStudents();
			cout << endl;
			menu = 0;
		}
		else if (menu == 11) {
			cout << "Enter ID of a student:" << endl;
			int id;
			cin >> id;
			cout << "Enter score:" << endl;
			double score;
			cin >> score;
			studOb[id].setScore(score);
			cout << endl;
			menu = 0;
		}
		else if (menu == 12) {
			cout << "Enter ID of a student:" << endl;
			int id;
			cin >> id;
			cout << "Enter new first name:" << endl;
			string first;
			cin >> first;
			studOb[id].setFirstName(first);
			menu = 0;
		}
		else if (menu == 13) {
			cout << "Enter ID of a student:" << endl;
			int id;
			cin >> id;
			cout << "Enter new last name:" << endl;
			string last;
			cin >> last;
			studOb[id].setLastName(last);
			menu = 0;
		}
		else if (menu == 14) {
			cout << "Enter ID of a student:" << endl;
			int id;
			cin >> id;
			cout << "Enter new department:" << endl;
			string dep;
			cin >> dep;
			studOb[id].setDepartment(dep);
			menu = 0;
		}
		else if (menu == 15) {
			cout << "Enter the first name of a cleaner: ";
			string first;
			cin >> first;
			cout << "Enter the last name of a cleaner: ";
			string last;
			cin >> last;
			cout << "Enter the salary of a cleaner: ";
			double salary;
			cin >> salary;
			makeCleaner(first,last,salary);
			cout << endl;
			menu = 0;
		}
		else if (menu == 16) {
			listCleaners();
			cout << "Enter ID of a cleaner: ";
			int id;
			cin >> id;
			removeCleaner(id);
			cout << endl;
			menu = 0;
		}
		else if (menu == 17) {
			listCleaners();
			cout << endl;
			menu = 0;
		}
		else if (menu == 18) {
			cout << "Enter ID of a cleaner:" << endl;
			int id;
			cin >> id;
			cout << "Enter new first name:" << endl;
			string first;
			cin >> first;
			cleanOb[id].setFirstName(first);
			menu = 0;
		}
		else if (menu == 19) {
		cout << "Enter ID of a cleaner:" << endl;
		int id;
		cin >> id;
			cout << "Enter new last name:" << endl;
			string last;
			cin >> last;
			cleanOb[id].setLastName(last);
			menu = 0;
		}
		else if (menu == 20) {
			cout << "Enter ID of a cleaner:" << endl;
			int id;
			cin >> id;
			cout << "Enter salary:" << endl;
			double sal;
			cin >> sal;
			cleanOb[id].setSalary(sal);
			cout << endl;
			menu = 0;
		}
		else if (menu == 21) {
			cout << "Enter the first name of a manager: ";
			string first;
			cin >> first;
			cout << "Enter the last name of a manager: ";
			string last;
			cin >> last;
			cout << "Enter the salary of a manager: ";
			double salary;
			cin >> salary;
			makeManager(first, last, salary);
			cout << endl;
			menu = 0;
		}
		else if (menu == 22) {
			cout << "Enter ID of a manager: ";
			int id;
			cin >> id;
			removeManager(id);
			cout << endl;
			menu = 0;
		}
		else if (menu == 23) {
			listManagers();
			cout << endl;
			menu = 0;
		}
		else if (menu == 24) {
			cout << "Enter ID of a manager:" << endl;
			int id;
			cin >> id;
			cout << "Enter new first name:" << endl;
			string first;
			cin >> first;
			manaOb[id].setFirstName(first);
			menu = 0;
		}
		else if (menu == 25) {
			cout << "Enter ID of a manager:" << endl;
			int id;
			cin >> id;
			cout << "Enter new last name:" << endl;
			string last;
			cin >> last;
			manaOb[id].setLastName(last);
			menu = 0;
		}
		else if (menu == 26) {
			cout << "Enter ID of a manager:" << endl;
			int id;
			cin >> id;
			cout << "Enter salary:" << endl;
			double sal;
			cin >> sal;
			manaOb[id].setSalary(sal);
			cout << endl;
			menu = 0;
		}
		else if (menu == 100) {
			menu = -1;
			break;
		}
		else {
			cout << "Invalid input" << endl;
			menu = 0;
		}
	} while (menu >= 0);
	return 0;
}