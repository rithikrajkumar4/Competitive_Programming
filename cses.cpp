#include<bits/stdc++.h>
using namespace std;

int reverse(int a[], int f , int l)
{
	int low = f, high = l;
	while (low < high)
	{
		swap(a[low] , a[high]);
		low++;
		high--;
	}

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
	long long n, r;
	cin >> n >> r;
	int a[n], b[r], c[r];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int m = a[n - 1];
	cout << a[n - 1] << " ";
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] > m)
		{
			cout << a[i] << " ";
			m = a[i];
		}
	}

}
