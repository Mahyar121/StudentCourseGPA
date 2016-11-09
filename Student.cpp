#include "Student.h"

Student::Student(string name) {
	this->name = name;
	this->gpa = 0;
	head = NULL;
}

string Student::getName() {
	return name;
}

double Student::getGPA() {
	return gpa;
}


void Student::addC(Course c) { //add Course
	Node *newNode = new Node(c);
	newNode->next = head;
	head = newNode;
}

void Student::removeC(string name) {  //remove Course
	if (head != NULL) {
		if (head->data.getName() == name) {
			head = head->next;
			cout << "Course sucessfully removed" << endl;
			return;
		}
		else {
			Node *temp = head;
			if (temp->next != NULL) {
				if (temp->next->data.getName() == name) {
					temp->next = temp->next->next;
					cout << "Course sucessfully removed" << endl;
					return;
				}
				temp = temp->next;
			}
		}
	}
	cout << "Course not found" << endl;
}

void Student::print() {
	calcGPA();
	cout << "Name: " << name << endl;
	cout << "GPA: " << setprecision(2) << this->gpa << endl;
	cout << "Courses: " << endl;
	Node *temp = head;
	while (temp != NULL) {
		temp->data.print();
		temp = temp->next;
	}
}

void Student::calcGPA() {
	Node *temp = head;
	double unittotal = 0;
	double gradetotal = 0;
	while (temp != NULL) {
		if (temp->data.getGrade() == 'a' || temp->data.getGrade() == 'A') {
			double gradecount = 0;
			gradecount += 4;
			gradetotal += gradecount * temp->data.getUnits();
			unittotal += temp->data.getUnits();
			temp = temp->next;
		}
		else if (temp->data.getGrade() == 'b' || temp->data.getGrade() == 'B') {
			double gradecount = 0;
			gradecount += 3;
			gradetotal += gradecount * temp->data.getUnits();
			unittotal += temp->data.getUnits();
			temp = temp->next;
		}
		else if (temp->data.getGrade() == 'c' || temp->data.getGrade() == 'C') {
			double gradecount = 0;
			gradecount += 2;
			gradetotal += gradecount * temp->data.getUnits();
			unittotal += temp->data.getUnits();
			temp = temp->next;
		}
		else if (temp->data.getGrade() == 'd' || temp->data.getGrade() == 'D') {
			double gradecount = 0;
			gradecount += 1;
			gradetotal += gradecount * temp->data.getUnits();
			unittotal += temp->data.getUnits();
			temp = temp->next;
		}
		else if (temp->data.getGrade() == 'f' || temp->data.getGrade() == 'F') {
			double gradecount = 0;
			gradecount += 0;
			gradetotal += gradecount * temp->data.getUnits();
			unittotal += temp->data.getUnits();
			temp = temp->next;
		}
		this->gpa = gradetotal / unittotal;

	}
}