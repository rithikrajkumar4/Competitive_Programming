#include <bits.stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int water = 0;
	int idx = 0, m = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > m)
		{
			m = a[i];
			idx = i;
		}
	}
	int m1 = a[0];
	int idx1 = 0;
	for (int i = 0; i < idx; i++)
	{
		if (a[i] > m1)
		{
			m1 = a[i];
			idx1 = i
		}
	}
	for (int i = idx1; i < idx; i++)
	{

	}
}