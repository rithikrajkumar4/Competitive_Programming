#include <bits/stdc++.h>
using  namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n, ans = 0;
	cin >> n;
	char a[n][300];
	unordered_map<char, int> hm;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			hm[a[i][j]]++;
		}
	}
	char b = a[0][0], c = a[0][1];
	if (b == c)
	{
		cout << "NO";
		return 0;
	}
	// char b = a[0][0];
	for (int i = 0, j = n - 1; i < n; i++, j--)
	{
		if (a[i][i] != b || a[i][j] != b)
		{
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n; k++)
		{
			if (i == k || (i + k) == n - 1)
				continue;
			else
			{
				if (a[i][k] != c)
				{
					cout << "NO";
					return 0;
				}
			}
		}
	}
	cout << "YES";


}