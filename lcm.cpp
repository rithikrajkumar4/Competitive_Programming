#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm(ll n , ll m)
{
	int gcd = __gcd(n, m);
	// cout << gcd << "\n";
	ll ans = n * m / gcd;
	return ans;
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
	cout << lcm(2, 4);
}