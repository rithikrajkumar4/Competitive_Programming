#include<bits/stdc++.h>
using namespace std;

// #define pi 				M_PI
#define mem(a,b) 		memset(a,b,sizeof(a))
#define ll        		long long
#define pb(a)         	push_back(a)
#define mk(a,b)			make_pair(a,b)
#define all(x)	  		x.begin(),x.end()
#define fi 				first
#define	se				second
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
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;


int dp[102][1002];
int knapsack(int wt[], int val[], int w, int n)
{
	if (n == 0 || w == 0)
		return 0;
	if (dp[n][w] != -1)
		return dp[n][w];
	if (wt[n - 1] <= w)
	{
		return dp[n][w] = max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
	}
	else if (wt[n - 1] > w)
		return dp[n][w] = knapsack(wt, val, w, n - 1);
}
int main()
{
	mem(dp, -1);
	IOS;
	read;
	int wt[] = {1, 3, 4, 5};
	int val[] = {1, 4, 5, 7};
	int w = 10;
	cout << knapsack(wt, val, w, 4) << "\n";
	// for (int i = 1; i <= 4; i++)
	// {
	// 	for (int j = 0; j <= 10; j++)
	// 		cout << dp[i][j] << " ";
	// 	cout << "\n";
	// }
}