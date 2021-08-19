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
#define inf 			INT_MAX-1
#define ninf			INT_MIN+1
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;

int main()
{
	IOS;
	read;

	int n; cin >> n;
	vi coins(n); rep(i, n) {cin >> coins[i];}
	int sum = 0; cin >> sum;

	int dp[n + 1][sum + 1];
	for (int i = 1; i <= n; i++)
		dp[i][0] = 0;
	for (int i = 0; i <= sum; i++)
	{
		dp[0][i] = inf;
		if ((i % coins[0]) == 0)
			dp[1][i] = i / coins[0];
		else
			dp[1][i] = inf;
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= sum; j++)
		{
			if (coins[i - 1] <= j)
				dp[i][j] = min(dp[i][j - coins[i - 1]] + 1, dp[i - 1][j]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= sum; j++)
			cout << dp[i][j] << " ";
		cout << "\n";
	}

}
