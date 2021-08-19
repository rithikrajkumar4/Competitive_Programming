#include <bits/stdc++.h>
using namespace std;

#define ll long long
int compare(ll a[], ll b[], ll n, ll cost)
{
	sort(a, a + n);
	sort(b, b + n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
		{
			if ((i + 1) == n)
				return -1;
			cost += min(a[i], b[i]);
			swap(a[i], b[i]);
			return compare(a, b, n, cost);
		}
	}
	return cost;
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
	ll t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ll a[n], b[n], flag = 1;
		for (ll i = 0; i < n; i++)cin >> a[i];
		for (ll i = 0; i < n; i++)cin >> b[i];
		sort(a, a + n);
		sort(b, b + n);
		for (ll i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			cout << 0 << "\n";
		else
		{

		}
	}
}