#ifndef NODE_H
#define NODE_H

class Node
{
	int data;
	Node *next_node;
	friend class Circular_Linked_Lists;

public:
	Node(int data, Node *next_node = 0);
	~Node();
};

#endif
