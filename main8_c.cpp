#include<bits/stdc++.h>
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
		ll n , k ;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];

		sort(a, a + n);
		int m = n - k;
		if (m > 0)
			cout << a[m] << "\n";

	}

}