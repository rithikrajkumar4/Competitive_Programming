#include<bits/stdc++.h>
using namespace std;

#define ll long long
int sum(ll n)
{
	ll sum = 0;
	while (n > 0)
	{
		int r = n % 10;
		sum += r;
		n /= 10;
	}
	return sum;
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

	ll t;
	cin >> t;
	while (t--)
	{

		ll n;
		cin >> n;
		while (n % (sum(n)) != 0)
			n++;
		cout << n << "\n";

	}
}