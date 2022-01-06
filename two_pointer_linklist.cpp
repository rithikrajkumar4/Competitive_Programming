#include <iostream>
using namespace std;

struct  node
{
	int data;
	node *next;
	node(int x)
	{
		data = x;
		next = NULL;
	}
};
class link_list
{
private:
	node *head, *tail;
public:
	link_list()
	{
		head = NULL;
		tail = NULL;
	}

	void add_node(int n)
	{
		node *temp = new node(n);
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail - temp;
		}
		else
		{
			tail = temp;
			tail->next = NULL;
		}
	}
	void display()
	{
		node *t = head;
		while (t != NULL )
		{
			cout << t->data << " ";
			t = t->next;
		}
		cout << t->data;
	}

};
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int s;
	cin >> s;
	link_list a;
	for (int i = 0; i < s; i++)
	{
		int x;
		cin >> x;
		a.add_node(x);
	}
	a.display();


}