#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool ispalidrome(  ll  m )
{
	ll rev = 0;
	ll n = m;
	while (n > 0)
	{
		rev = rev * 10 + (int)n % 10;
		n = n / 10;
	}
	if (rev == m)
		return true;
	else
		return false;
}
int main()
{
#ifndef k_k
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll mx = 0;

	for (ll i = 100; i <= 999; i++)
	{
		for (ll j = 100; j <= 999; j++)
		{
			ll m = i * j;
			if (ispalidrome(m))
			{
				if (m > mx)
					mx = m;
			}
		}
	}
	cout << mx;
}