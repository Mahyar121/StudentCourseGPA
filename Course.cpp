#include "Course.h"

char Course::getGrade() {
	return this->grade;
}
int Course::getUnits() {
	return this->units;
}
Course::Course() {

}
Course::Course(string name, int units, char grade) {
	this->name = name;
	this->units = units;
	this->grade = grade;
}
string Course::getName() {
	return this->name;
}
void Course::print() {
	cout << "Name: " << name << ", Num units: " << units << ", Grade: " << grade << endl;
}