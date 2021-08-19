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
	string a, b;
	cin >> a >> b;
	int t = 0;
	if (a.length() == b.length())
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == b[i])
			{
				t = 1;
				continue;
			}
			else
			{
				t = 0;
				break;
			}
		}

	}
	if (t == 1)
		cout << -1 << "\n";
	else
		cout << max(a.length(), b.length()) << "\n";
}