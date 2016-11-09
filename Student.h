#ifndef STUDENT_H
#define STUDENT_H
#include "Course.h"
#include "Node.h"
#include <iomanip>
#include <vector>
#include <fstream>

class Student {
private:
	int count = 0;
	string name;
	double gpa;
	Node *head;
public:
	Student(string name);
	string getName();
	double getGPA();
	void addC(Course c);
	void removeC(string name);
	void print();
	void calcGPA(); 
};

#endif
