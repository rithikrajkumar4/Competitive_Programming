#include <iostream>
using namespace std;
#define ull unsigned long long int

ull power(ull x, ull n)
{
	if (n == 1) return x;
	ull hold = power(x, (int)n / 2);
	if (n % 2 == 0)
	{

		return hold * hold;
	}
	else
	{

		return (x * hold * hold);
	}

}
int main()
{
#ifndef k_k
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << power(2, 5);
}