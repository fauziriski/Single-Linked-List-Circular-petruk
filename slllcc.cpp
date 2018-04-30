#include <iostream>
using namespace std;


class node{
	public:
	int angka;
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



