#ifndef NODE_H
#define NODE_H
#include "Course.h"

class Node {
public:

	Node *next;
	Course data;
	Node(Course data);
};


#endif
