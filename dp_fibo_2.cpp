#include <bits/stdc++.h>
using namespace std;

#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

// int memo[];

int fib(int n , int memo[])
{
	if (memo[n] != -1)
		return memo[n];
	else if (n == 0 || n == 1)
	{
		memo[n] = n;
		return memo[n];
	}
	else
	{
		memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
		return memo[n];
	}
}

int main()
{
	IOS;
	read;
	int n;
	cin >> n;
	int memo[n + 1] = { -1};
	cout << fib(n, memo);
}