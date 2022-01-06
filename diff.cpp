#include<iostream>
#include<math.h>
using namespace std;

#define ull unsigned long long int
int main()
{

	ull diff = 0, sum = 0 , fa = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum += i;
		fa += pow(i, 2);
	}
	diff = abs(sum - fa);
	cout << diff;
}