#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll  max(ll a, ll b)
{
	return (a > b ? a : b);
}
ll ans()
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (cin >> n)
	{
		cout << max(n, v[n / 2] + v[n / 3] + v[n / 4]) << endl;

	}

	return 0;
}
