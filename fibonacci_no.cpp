#include <bits/stdc++.h>
using namespace std;
std::vector<int> v;
int fib(int n)
{
	if (v.find(n))
		if (n <= 0)
			return 0;
		else if (n == 1)
			return 1;
	return fib(n - 1) + fib(n - 2);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << fib(9);
}