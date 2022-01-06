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
map<ll , ll> mp;
ll fun(ll n)
{
	if (n == 1)
		return 0;
	if (mp[n] != 0)
		return mp[n];
	else
	{
		if (n % 3 == 0)
			return mp[n] = min(fun(n / 3), fun(n - 1)) + 1;
		else if (n % 2 == 0)
			return mp[n] = min(fun(n / 2), fun(n - 1)) + 1;
		else
			return mp[n] = fun(n - 1) + 1;
	}
}
//bottom up
ll fun2(ll n)
{
	ll dp[n + 1] = {0};
	dp[1] = 0;
	for (ll i = 2; i <= n; i++)
	{
		if (i % 2 == 0 && i % 3 == 0)
			dp[i] = min(dp[i / 3], dp[i / 2]) + 1;
		else if (i % 2 == 0)
			dp[i] = min(dp[i - 1], dp[i / 2]) + 1;
		else if (i % 3 == 0)
			dp[i] = min(dp[i - 1], dp[i / 3]) + 1;
		else
			dp[i] = dp[i - 1] + 1;
		// cout << dp[i] << "\n";
	}
	// cout << "\n";
	// cout << dp[n / 3] << " " << dp[n / 2] << " " << dp[n - 1] << " ";
	return dp[n];
}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	ll n; cin >> n;
	cout << fun2(n);

}
