#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long int
#define mx 300
int main()
{
#ifndef k_k
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	double fact = 1;
	for (int i = 2; i <= n; i++)
		fact *= i;
	string s = fact;
	int su = 0;
	for (int i = 0; i < s.size(); i++)
	{
		su += s[i];
	}
	cout << su;

}


