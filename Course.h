#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course {
private:
	string name;
	int units;
	char grade;
	int unit;
	int totalUnit;
public:
	char getGrade();
	int getUnits();
	Course();
	Course(string name, int units, char grade);
	string getName();
	void print();
};




#endif