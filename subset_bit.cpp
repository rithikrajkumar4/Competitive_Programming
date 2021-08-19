#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int count = (1 << n);
	string s;
	cin >> s;
	for (int i = 1; i < count; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) > 0)
				cout << s[j];
		}
		cout << "\n";
	}


}