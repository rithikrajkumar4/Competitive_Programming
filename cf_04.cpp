#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long n, a, b, c;
	cin >> n >> a >> b >> c;
	if (n % 4 == 0)
	{
		cout << 0;
		return 0;
	}
	long long k = 4 - (n % 4);
	if ( k == 1)
	{
		cout << k*a;
	}
	else if (k == 2)
	{
		int mi = min(min(b, 2 * c / 3), k * a);
		cout << mi;
	}
	else
	{
		long long mi = min((a + b), c);
		mi = min(mi, (k * a));
		cout << mi;
	}




}