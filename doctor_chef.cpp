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
		ll n, x, ans = 0, count = 0;
		cin >> n >> x;
		ll a[n];
		for (ll i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for (ll i = 0; i < n; i++)
		{
			if (x < a[i])
			{
				while (x < (a[i]) * (1 << (i)))
				{
					count++;
					x *= 2;
				}
			}
			ans++;
			x *= 2;
		}
		cout << ans + count << "\n";

	}
}