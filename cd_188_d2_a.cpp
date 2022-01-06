#include <bits/stdc++.h>
using namespace std ;

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
	ll n, k, idx;
	cin >> n >> k;
	if (n % 2)
		idx = n / 2 + 1;
	else
		idx = n / 2;
	if (idx >= k)
	{
		cout << k + k - 1 << "\n";
	}
	else
	{
		k = k - idx;
		cout << 2 * k << "\n";
	}
}