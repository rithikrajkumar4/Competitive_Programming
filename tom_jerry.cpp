#include<iostream>
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
	ll t, ts;
	cin >> t;
	while (t--)
	{
		cin >> ts;
		if (ts < 3)
			cout << 0 << "\n";
		else if (ts % 2 == 1)
			cout << ts / 2 << "\n";
		else
		{
			if (ts & (ts - 1))
			{
				ll temp = ts, c = 0;
				while (temp % 2 == 0)
				{
					++c;
					temp = temp / 2;
				}
				cout << ts / (1 << (c + 1)) << "\n";
			}
			else
				cout << 0 << "\n";


		}
	}
}