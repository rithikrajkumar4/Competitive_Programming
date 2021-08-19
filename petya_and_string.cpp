#include<bits/stdc++.h>
using namespace std ;

#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	ll t;
	cin >> t;
	while (t--)
	{
		ll n, x, s = 0, h = 0, d = 0;
		cin >> n >> x;
		ll a[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			s += a[i];
		}
		sort(a, a + n);
		while (s % x == 0)
		{
			if (n == h)
				break;
			if (a[h] != 0)
			{
				s -= a[h];
			}
            else if(a[h] == 0)
				d++;

			h++;
			cout<<h<<" <->"<<d<<"\n";
		}
		if (h == n)
			cout << -1 << "\n";
		else
			cout << n - h + d << "\n";
	}
	return 0;
}
