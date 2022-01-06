// RRRRRRRRRRRRkkkkk
#include<bits/stdc++.h>
using namespace std;

#define pi 				M_PI
#define eb(x)			emplace_back(x)
#define mem(a,b) 		memset(a,b,sizeof(a))
#define ll        		long long
#define pb(a)         	push_back(a)
#define mk(a,b)			make_pair(a,b)
#define all(x)	  		x.begin(),x.end()
#define rall(x)			x.rbegin(),x.rend()
#define fi 				first
#define	se				second
#define f(i,a,n)		for(int i=a;i<n;i++)
#define loop(i,a,b) 	for(auto i=a;i!=b;i++)
#define b_loop(i,a,b)	for(ll i=b;i>=a;i--)
#define rep(i,n)     	for(ll i=0;i<n;i++)
#define vll       		vector<ll>
#define vi				vector<int>
#define vs 				std::vector<string>
#define vvi				vector<vi>
#define vvll 			vector<vector<ll>>
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define vpii			vector<pair<int,int>>
#define vpll			vector<pair<ll,ll>>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define inf 			INT_MAX-1
#define ninf			INT_MIN+1
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;

// top down
// int dp[100][100] = {0};
// int profit_max(int i, int j, int y, int n, int wines[])
// {
// 	if (i > j)
// 		return 0;
// 	else if (dp[i][j] != 0)
// 		return dp[i][j];
// 	else
// 	{
// 		dp[i][j] = max((wines[i] * y + profit_max(i + 1, j, y + 1, n, wines)), (wines[j] * y + profit_max(i, j - 1, y + 1, n, wines)));
// 		return dp[i][j];
// 	}
// }

// bottom up
int maxProfit_bu(int *wines, int n)
{
	int dp[100][100] = {0};
	// Wines array size
	int year = n;
	// Fill the diagonal elements i.e leaf nodes in case of recursion tree
	for (int i = 0; i < n; i++)
		dp[i][i] = year * wines[i];

	year--;
	int k = 0;
	for (int i = 1; i < n; i++)
	{
		k++;
		for (int j = 0, z = k; z < n; j++, z++)
		{
			int opt1 = wines[j] * year + dp[j + 1][z];
			int opt2 = wines[z] * year + dp[j][z - 1];
			dp[j][z] = max(opt1, opt2);

		}
		// cout << year << " ";
		year--;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << dp[i][j] << " ";
		cout << "\n";

	}
	return dp[0][n - 1];
}

int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	int n; cin >> n;
	int wines[n];
	f(i, 0, n)
	cin >> wines[i];
	// cout << n;
	cout << maxProfit_bu(wines, n);
}
