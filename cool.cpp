#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb() push_back()


int fun(int n, int a[], int b[])
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b[i])
			++count;
	}
	return count;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int  n ;
	cin >> n;
	int a[n] , b[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
		cin >> b[i];

	int c[n];
	int d[n];

	for (int i = 0; i < n; i++)
	{
		int j = i + 1;
		if (j == n)
			j = 0;
		c[j] = b[i];
	}
	for (int i = n - 1; i >= 0; i++)
	{
		int j = i - 1;
		if (j == -1)
			j = n;
		d[j] = b[i];
	}

	cout << max(fun(n, a, b),  fun(n, a, c)) << "\n";



	return 0;
}