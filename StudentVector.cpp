#include "StudentVector.h"

int StudentVector::findS(vector<Student> students, string name) {  //find Student
	for (int i = 0; i < students.size(); ++i) {
		if (students[i].getName() == name) {
			return i;
		}
	}
	return -1;
}

void StudentVector::addS(vector<Student> &students) {  //add student
	string name;
	double gpa;
	int iD;
	bool valid = true;
	while (valid) {
		cout << "Enter student ID number (4 digits):";
		cin >> iD;
		if (iD < 9999) {
			valid = false;
		}
		else {
			cout << "Error! Please input a 4 digit ID";
		}
	}
	cout << "Enter first name: ";
	cin >> name;
	students.push_back(Student(name));
}

void StudentVector::removeS(vector<Student> &students) {  //remove Student
	string name;
	cout << "Enter name of the Student to remove: ";
	cin >> name;
	int index = findS(students, name);
	if (index == -1) {
		cout << "Student not found" << endl;
	}
	else {
		for (int i = index; i < students.size() - 1; ++i) {
			students[i] = students[i + 1];
		}
		students.pop_back();
	}
}

void StudentVector::printS(vector<Student> students) {  //print Student
	string name;

	cout << "Enter name of the Student: ";
	cin >> name;
	int index = findS(students, name);
	if (index == -1) {
		cout << "Student not found" << endl;
	}
	else {
		Student s = students[index];
		s.print();
	}
}

void StudentVector::addC(vector<Student> &students) {  //add Course
	string name;
	cout << "Enter name of the Student: ";
	cin >> name;
	int index = findS(students, name);
	if (index == -1) {
		cout << "Student not found" << endl;
	}
	else {
		int units;
		char grade;
		cout << "Enter Course name: ";
		cin >> name;
		cout << "Number of units: ";
		cin >> units;
		cout << "Grade: ";
		cin >> grade;

		students[index].addC(Course(name, units, grade));
	}
}

void StudentVector::removeC(vector<Student> &students) {  //remove Course
	string name;
	cout << "Enter name of the Student: ";
	cin >> name;

	int index = findS(students, name);
	if (index == -1) {
		cout << "Student not found" << endl;
	}
	else {
		cout << "Enter Course name: ";
		cin >> name;
		students[index].removeC(name);
	}
}
