#include "Node.h"

Node::Node(Course data) {
	{
		this->data = data;
		next = NULL;
	}
}