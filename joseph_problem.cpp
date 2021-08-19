#include <iostream>
using namespace std ;

int jos(int n, int k)
{
	if (n == 1)return n;

	return ((jos(n - 1, k) + k - 1) % n + 1);
}
int main()
{
#ifndef k_k
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	jos(8, 2);
}