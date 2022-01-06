#include <bits/stdc++.h>
using namespace std;

int reverse_no(int n)
{
	int ans = 0, i = 10;
	while (n > 0)
	{
		int r = n % 10;
		ans = (ans * i ) + r ;
		n = n / 10;
	}
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
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		// cout << reverse_no(n) << " " << reverse_no(m) << "\n";
		int ans = reverse_no(n) + reverse_no(m);
		cout << reverse_no(ans) << "\n";
	}

}