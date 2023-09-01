#pragma once
class Node
{
public:
	int value;
	Node* next1 = nullptr;
	Node* next2 = nullptr;
	Node();
	Node(int volume, Node* next1, Node* next2);

};

