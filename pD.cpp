#include<iostream>
using namespace std;

void pI(int n)
{
	if (n == 0)
		return;
	pI(n - 1);
	cout << n << endl;
}
int main()
{
#ifndef k_k
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	pI(10);
}