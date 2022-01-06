#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int binary_search(int a[], int l , int h, int data)
{
	int mid = l + (h - l) / 2;
	if (l > h)
		return -1;
	if (a[mid] == data)
	{
		return mid;
	}
	else if (a[mid] > data)
		return binary_search(a, l, mid - 1, data);
	else
		return binary_search(a, mid + 1, h, data);
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
	int t;
	cin >> t;
	int a[t];
	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
	}
	int data;
	cin >> data;
	cout << binary_search(a, 0, t - 1, data);

	return 0;
}