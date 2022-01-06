#include<iostream>
using namespace std;

int sum_f(int k , int n)
{
	if (k == 0)
	{
		int s = 0;
		for (int i = 1; i <= n; i++)
			s += i;
		return s;
	}
	return sum_f(k - 1, n);
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
	cout << sum_f(1, 4);
}