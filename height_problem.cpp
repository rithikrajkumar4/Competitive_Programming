#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, flag = 0 ;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];

		for (int i = 0; i < n; i++)
		{
			if (a[i] > i)
			{
				flag = -1;
				break;
			}
		}
		if (flag == 0)
			cout << "YES";
		else
			cout << "NO";

	}
}