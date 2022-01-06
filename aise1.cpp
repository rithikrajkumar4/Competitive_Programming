#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>

int right(int n, vi v, int pos)
{
	int ans = 0;
	if ((pos + 1) >= n)
		return ans;

	for (int i = pos + 1; i < n; i++)
	{
		// cout << v[i] << " ";
		if (v[i] <= v[i - 1])
			ans++;
		else
			return ans;
	}
	return ans;
}
int left(int n, vi v, int pos)
{
	int ans = 0;
	if ((pos - 1) < 0)
		return ans;

	for (int i = pos - 1; i >= 0; i--)
	{
		// cout << v[i] << " ";
		if (v[i] <= v[i + 1])
			ans++;
		else
			return ans;
	}
	return ans;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n;
	cin >> n;
	vi v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		int ans = 0;
		ans = right(n, v, i) + left(n, v, i);
		// cout << ans << " ";
		m = max(m, ans);
	}
	cout << m + 1;
}