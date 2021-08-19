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
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;
		int blocked = 64 - k;

		for (int i = 1; i < 9; i++)
		{
			for (int j = 1; j < 9; j++)
			{
				if (i == 8 && j == 8)
					cout << "O";
				else if (blocked > 0)
				{
					cout << "X";
					blocked--;
				}
				else
					cout << ".";
			}
			cout << "\n";
		}

	}
}