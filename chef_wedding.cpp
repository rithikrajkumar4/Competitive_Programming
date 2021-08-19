#include <bits/stdc++.h>
using namespace std;

#define w(t)            int t; cin>>t; while(t--)

int sol(int a[], int n, int k)
{
	int store[n] = {k};
	for (int i = 0; i < n; i++)
	{
		int arg = 0;
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[i] == a[j])
				arg++;
		}
		store[i + 1] = min(store[i] + k, store[i] + ((arg > 0 ? (arg + 1) : 0)));
	}
	return store[n - 1];
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
	w(t)
	{
		int n, k;
		cin >> n >> k;
		int dp[n];
		for (int i = 0; i < n; i++)
		{
			cin >> dp[i];
		}
		cout << sol(dp, n, k) << "\n";
	}
}