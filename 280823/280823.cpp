#include <iostream>
using namespace std;
#include "Node.h"

int main()
{
	Node* node1 = new Node();

	node1->volume = 1;
	node1->next1 = new Node();
	node1->next2 = new Node();
	node1->next1->volume = 2;
	node1->next2->volume = 4;

	node1->next1->next1 = node1;
	node1->next1->next2 = new Node();
	node1->next1->next2->volume = 3;
	node1->next1->next2->next1 = node1->next1;
	node1->next1->next2->next2 = node1->next2;
	node1->next1->next2->next2->next1 = node1->next1;
	node1->next2->next2 = nullptr;

}
