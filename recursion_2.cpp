#include <bits/stdc++.h>
using namespace std;

#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int fun(int x)
{
	static int y = 0 ;
	if (x > 0)
	{
		y++;
		return fun(x - 1) + y;
	}
	return 0;
}
int main()
{
	IOS;
	read;
	int x ;
	cin >> x;
	cout << fun(5);
}
