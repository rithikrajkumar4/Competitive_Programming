#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* link;

};
void printList(node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->link;
	}
}
void insert(node *n)
{
	while (n != NULL)
	{

	}
}
int main()
{
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node *a = NULL;
	node *b = NULL;
	node *c = NULL;

	a = new node();
	b = new node();
	c = new node();

	a->data = 2;
	a->link = b;

	b->data = 4;
	b->link = c;

	c->data = 6;
	c->link = NULL;

	printList(a);
	return 0;
}