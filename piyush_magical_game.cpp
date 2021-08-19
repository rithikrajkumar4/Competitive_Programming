#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, k, s;
	cin >> n >> m >> k >> s;
	char a[n][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}


	//each step energy -1
	//. -> energy minus 2
	//* -> energy plus 5
	//# -> no . change and skip the row
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j == (m - 1))
				s += 1;
			if (a[i][j] == '.')
				s -= 2;
			else if (a[i][j] == '*')
				s += 5;
			else if (a[i][j] == '#')
				break;
			s -= 1;
		}
	}
	if (s >= k)
		cout << "YES\n" << s;
	else
		cout << "NO";
}