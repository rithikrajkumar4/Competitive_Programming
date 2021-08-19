#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// your code
	int x, y, z;
	cin >> x >> y >> z;
	int result = -1;
	int  n = 10;
	int a[10];
	a[0] = 0;
	int k;
	for (int i = 1; i < 5; i++)
	{
		int d = 2 * i - 1;
		int m = 2 * i - 2;
		int h = 2 * i;
		a[d] = a[m] + x ;
		a[h] = a[d] - y;

	}
	for (int j = 0; j < n; j++)
		cout << a[j] << " ";
	cout << endl;
	for (int i = 1; i < n; i++)
	{
		if (a[i] == z)
		{
			result = i;
			break;
		}
	}
	printf("%d\n", result );
	return 0;

}