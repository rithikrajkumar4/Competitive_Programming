#include <bits/stdc++.h>
using namespace std;

#define ll   long long
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
		int n;
		cin >> n;
		int collected = 5;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		if (a[0] == 5)
		{
			int flag = 1;
			for (int i = 1; i < n; i++)
			{
				if ((a[i] - 5) <= collected)
					collected += 5;
				else
				{
					cout << "NO\n";
					flag = 0;
					break;

				}
			}
			if (flag == 1)
				cout << "YES\n";
		}
		else
			cout << "NO\n";

	}
	return 0;
}


