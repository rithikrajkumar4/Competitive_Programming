#include <bits/stdc++.h>
using namespace std;

#define ll  long long

int power(ll a)
{
	int no = 0;
	while (a > 0)
	{
		no += (a % 10);
		a = a / 10;
	}
	if (no >= 10)
		return power(no);
	else
		return no;
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
		ll a, b, pointa = 0, pointb = 0;
		while (n--)
		{
			cin >> a >> b;
			int n1 = power(a);
			int n2 = power(b);
			if (n1 > n2)
				++pointa;
			else if (n2 > n1)
				++pointb;
			else
			{
				pointa++;
				pointb++;
			}
		}
		if (pointb > pointa)
			cout << 1 << " " << pointb << "\n";
		else if (pointb < pointa)
			cout << 0 << " " << pointa << "\n";
		else
			cout << 2 << " " << pointb << "\n";
	}
	return 0;
}