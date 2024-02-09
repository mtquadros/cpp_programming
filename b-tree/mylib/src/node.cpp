#include "../../include/node.h"
#include <iostream>
#include <string>

Node* Node::getLeft() {
	return _left;
}

Node* Node::getRight() {
	return _right;
}

void Node::insert(int value)
{
	Node* current = this;

	if (current->getValue() > value) //insert on the left
	{
		if (current->getLeft() != nullptr)
			current->getLeft()->insert(value);
		else 
		{
			std::cout << "Node " << value << std::endl;
			current->setLeft(new Node(value));
		}
	}
	else if (current->getValue() < value) //insert on the right
	{
		if (current->getRight() != nullptr)
			current->getRight()->insert(value);
		else
		{
			std::cout << "Node " << value << std::endl;
			current->setRight(new Node(value));
		}
	}
	else
	{
		std::cout << "This node already exists.\n";
		return;
	}
}

/*void Node::remove(int value)
{
	Node* current = this;

	if (current->getValue() > value)
	{

	}
	else if (current->getValue() < value)
	{
		if (current->getRight()->_value == value)
			current->setRight(current->)

	}
	else
	{
		std::cout << "Root node can not be removed.\n";
	}
}
*/

Node::operator std::string() const
{
	return std::to_string(_value);
}

int Node::getValue() {
	return _value;
}

void Node::setLeft(Node* value) {
	_left = value;
}

void Node::setRight(Node* value) {
	_right = value;
}

Node::~Node() {
	if (_left != nullptr)
		delete _left;

	std::cout << "Deleting Node " << this->getValue() << "\n";

	if (_right != nullptr)
		delete _right;
}