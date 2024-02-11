#ifndef _NODE
#define _NODE
#include <memory>
#include <string>
#include <iostream>
#include <vector>


class Node {
	Node* _left;
	Node* _right;
	int _value;

	//Setters
	void setLeft(Node* value);
	void setRight(Node* value);

public:
	Node(int value) : _left(nullptr), _right(nullptr), _value(value) {};
	~Node();
	
	//Getters
	int getValue();
	Node* getLeft();
	Node* getRight();

	//Insert element in the search-tree 
	void insert(int value);

	//void remove(int value);

	//overloaded operators
	operator std::string() const;

};


#endif
