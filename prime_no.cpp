#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sieve_of_er(ll n, int a)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	for (int i = 2; i * i <= n; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= n; j += i)
				prime[j] = false;
		}
	}
	ll sum = 0;
	for (int i = 2; i <= n; i++)
	{
		if (a == 0)
			break;
		else
		{
			if (prime[i])
			{
				sum += i;
				cout << i << " ";
				a--;
			}

		}
	}
	cout << "\n" << sum;

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
	sieve_of_er(1000000, 10);
}