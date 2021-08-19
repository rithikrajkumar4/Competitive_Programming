#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);



int main()
{
	ll dp[100];
	IOS;
	read;
	dp[0] = 0, dp[1] = 1;
	int n;
	cin >> n;
	// cout << dp[1] << "\n";
	for (int x = 2; x <= n; x++)
	{
		dp[x] = dp[x - 1] + dp[x - 2];
		// cout << dp[x] << "\n";
		dp[x] %= mod;
	}
	cout << dp[n];
}