#include <bits/stdc++.h>
using namespace std;

#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

int main()
{
	IOS;
	// read;
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[11] = {0};
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a[x]++;
		}
		int count[n + 1] = {0};
		for (int i = 1; i <= 10; i++)
		{
			// cout << a[i] << " ";
			count[a[i]]++;
		}
		int m = 0, ans = 0;

		for (int i = 1; i <= n; i++)
		{
			if (count[i] != 0)
			{
				if (m < count[i])
				{
					ans = i;
					m = count[i];
				}
			}
		}
		cout << ans << "\n";
	}
}