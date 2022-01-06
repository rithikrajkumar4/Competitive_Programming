#include<bits/stdc++.h>
using namespace std;

#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
void insert(int i, int x, int *a, int &length)
{
	int n = (sizeof(a) / a[0]);
	if (length >= n)
	{
		cout << "NOT POSSIBLE\n";
		return ;
	}
	else
	{
		// length++;
		for (int j = length - 1; j >= i; j--)
		{
			a[j + 1] = a[j];
		}
		a[i] = x;
		length++;
	}
}
void print(int *a)
{
	int n = sizeof(a) / a[0];
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\n";
}

int main()
{
	IOS;
	read;
	int a[10] = {1, 2, 3, 4, 5, 6};
	int length = 6;
	insert(4, 8, &a, length);
	print(a);

}