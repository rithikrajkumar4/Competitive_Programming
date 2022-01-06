#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define m 4// this is nothing but ( n x 2 )
int main()
{
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int n = 2; // Change n and m to get the sol
	int l = n * 2;
	double k = pow(2, l);
	cout << fixed;
	int c = 0;
	for (int i = 1; i <= (ll)k; i++)
	{
		bitset<m> set1(i);
		cout << set1 << "\n";
		int n1 = set1.count();
		int n0 = set1.size() - n1;
		if (n1 == n && n0 == n )
			++c;


	}
	cout << c ;

}
