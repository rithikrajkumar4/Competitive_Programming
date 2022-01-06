#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
	ll a, b, n, m;
	cin >> a >> b >> n >> m;
	ll mn = min(a, b);
	if (mn >= m and a + b >= n + m)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
	return ;
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
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}