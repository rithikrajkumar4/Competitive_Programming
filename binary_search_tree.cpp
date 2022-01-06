#include <bits/stdc++.h>
using namespace std;

#define ll long long

class node
{
public:
	ll value, val;
	node *right , *left;

	node(ll x, ll val) //constructor
	{
		node *temp = new node;
		temp->val = val;
		temp->value = x;
		temp->left = NULL;
		temp->right = NULL;
	}

}

node *insert(node *node , ll x , ll val)
{
	if (node == NULL)
	{
		node *temp = node(x, val);
	}
	else if ( x < node->value)
	{
		node->left = insert(node->left)
	}
}