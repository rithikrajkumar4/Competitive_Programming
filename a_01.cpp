#include <bits/stdc++.h>
using namespace std;

#define s 51
int a[s][s];

int main()
{
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
		set<int> r, c;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				if (a[i][j] == 1)
					r.insert(i), c.insert(j);
			}
		}
		int mn = min(n - r.size() , m - c.size());
		if (mn % 2)
			cout << "Ashish" << "\n";
		else
			cout << "Vivek" << "\n";

	}
	return 0;
}