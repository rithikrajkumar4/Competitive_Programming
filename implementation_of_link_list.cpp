#include <bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	node *next;
	node(int x)
	{
		data = x;
		next = NULL;
	}
};
void display(node *head)
{
	node *t = head;
	while (t->next != NULL)
	{
		cout << t->data << " ";
		t = t->next;
	}
	cout << t->data;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	node *head = new node(a[0]);
	for (int i = 1; i < n; i++)
	{
		node *temp = new node(a[i]);
		if (head->next == NULL)
		{
			head->next = temp;
		}
		else
		{
			node *t = head;
			while (t->next != NULL)
			{
				t = t->next;
			}
			t->next = temp;

		}
	}
	display(head);

}