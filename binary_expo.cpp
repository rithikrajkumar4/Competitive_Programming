#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll a , ll b , ll n)
{
	ll res = 1;
	a %= n;
	while (b > 0)
	{
		if (b & 1)
		{
			res = res * a % n;
		}
		a = a * a % n;
		b >>= 1;
	}
	return res;
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
	ll B, P, M;
	while (cin >> B)
	{
		cin >> P >> M;

	}
}