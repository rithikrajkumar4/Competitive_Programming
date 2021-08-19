#include <bits/stdc++.h>
using namespace std;
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
int main() {
	IOS;
	read;
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int p = n;

		long int sum = 0, rem = 0;
		while (n > 0)
		{
			sum = sum + n % 10;
			n = n / 10;

		}
		if (p % sum != 0)
		{
			rem = p % sum;
			p = p + rem;
			cout << p << endl;
		}
		else
		{
			cout << p << endl;
		}

	}
	return 0;
}