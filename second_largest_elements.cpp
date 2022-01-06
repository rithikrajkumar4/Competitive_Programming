#include <iostream>
using namespace std;
int find_max( int a[], int n)
{
	int m = a[0];
	for (int i = 1; i < n; i++)
	{
		if (m < a[i])
			m = a[i];
	}
	return m;
}
int main()
{
	int n, m = 0;
	cin >> n;
	int a[n], b[n] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	m = find_max(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] != m)
		{
			b[i] = a[i];
		}
	}
	int ans = find_max(b, n);

}