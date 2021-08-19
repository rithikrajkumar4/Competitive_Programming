#include<bits/stdc++.h>
using namespace std;

#define w(t)            int t; cin>>t; while(t--)
#define ll 				long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t)
	{
		string s;
		cin >> s;
		ll n = s.length();
		ll a[n];
		ll su = 0;
		for (ll i = 0; i < n; i++)
		{
			if (s[i ] == '-')
				su -= 1;
			else
				su += 1;
			a[i] = su;
		}

		ll k = -1;
		ll ans = 0;
		for (ll i = 0; i < n; i++)
		{
			if (a[i] == k)
			{
				k--;
				ans += i + 1;
			}
			if (i == (n - 1) && (a[i] != k))
				ans += i + 1;
		}
		cout << ans << "\n";

	}
}
