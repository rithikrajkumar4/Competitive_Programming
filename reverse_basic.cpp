#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a = 81;
	int temp = 0, i = 10;
	while (a > 0)
	{
		int r = a % 10;
		// cout << r << " ";
		temp = temp * i + r;
		a /= 10;
	}
	cout << temp;
}