#include <iostream>
#include <stdlib>
using namespace std;


class node{
	public:
	int data;
	node* next;
};

node* head;

void init()
{
	head = NULL;
}

bool jikakosong()
{
	if (head == NULL)
	return 1;
	else return 0;
}



