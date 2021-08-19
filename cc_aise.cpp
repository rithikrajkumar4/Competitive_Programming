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
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		if (n < 2)
		{
			cout << 0 << "\n";
			continue;
		}
		else
		{
			int ans = 0;
			for (int i = 0; i < n; i++)
			{
				for (int j = i + 1; j < n; j++)
				{
					if (a[i]&a[j] == a[i])
						ans++;
				}
			}
			cout << ans << "\n";
		}
	}
}