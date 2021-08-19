#include <bits/stdc++.h>
using namespace std;

#define ll long long

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
	for (int i = 1; i <= t; i++)
	{
		ll n ;
		cin >> n;
		while (!(n % 2))
		{
			n /= 2;
		}
		cout << "Case " << i << ": " << n << "\n";
	}
}