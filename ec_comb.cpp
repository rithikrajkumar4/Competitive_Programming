#include<bits/stdc++.h>
using namespace std;

#define ll long long
unsigned int reverseBits(unsigned int n)
{
	unsigned int rev = 0;

	// traversing bits of 'n' from the right
	while (n > 0)
	{
		// bitwise left shift
		// 'rev' by 1
		rev <<= 1;

		// if current bit is '1'
		if (n & 1 == 1)
			rev ^= 1;

		// bitwise right shift
		// 'n' by 1
		n >>= 1;

	}

	// required number
	return rev;
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
	ll n;
	cin >> n;
	while (n--)
	{
		ll a;
		cin >> a;
		if (a % 2)
		{
			cout << a << "\n";
		}
		else
		{
			cout << reverseBits(a) << "\n";
		}
	}
}