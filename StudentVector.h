#ifndef STUDENTVECTOR_H
#define STUDENTVECTOR_H
#include "Student.h"
#include "Course.h"
#include "Node.h"

class StudentVector {

public:
	
	
	int findS(vector<Student> students, string name);
	void addS(vector<Student> &students);
	void removeS(vector<Student> &students);
	void printS(vector<Student> students);
	void addC(vector<Student> &students);
	void removeC(vector<Student> &students);



};



#endif