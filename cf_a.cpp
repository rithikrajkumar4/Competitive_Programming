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
	ll t;
	cin >> t;
	while (t--)
	{
		ll x, y, n;
		cin >> x >> y >> n;
		int m = n / x;
		while (true)
		{

			if ((x * m) + y <= n)
			{
				cout << (x * m + y) << "\n";
				break;
			}
			else
				m--;
		}

	}
}