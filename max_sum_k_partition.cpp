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


void mx1_2_pos(int *a, int &mx1, int &mx2, int &pos, int s, int e)
{
	for (int i = s; i < e; i++)
	{
		if (mx1 < a[i])
		{
			mx1 = a[i];
			pos = i;
		}
	}
	f(i, s, e)
	{
		if (mx2 < a[i] && mx1 != a[i])
			mx2 = a[i];
	}
	return ;
}
int solve(int *a, int k, int n)
{
	int dp[n] = {0};
	int mx1 = 0, mx2 = 0, pos;
	for (int i = 0; i < k; i++)
		dp[i] = a[i];
	mx1_2_pos(dp, mx1, mx2, pos, 0, k);
	for (int i = k; i < n; i++)
	{

		if (i - pos != k)
		{
			if (a[i] < 0)
				dp[i] = mx1;
			else
				dp[i] =  mx1 + a[i];
		}
		else
		{
			if (a[i] < 0)
				dp[i] = mx1;
			else
				dp[i] = mx2 + a[i];
		}
		if ((i + 1) % k == 0)
			mx1_2_pos(dp, mx1, mx2, pos, (i - k + 1), (i + 1));
		// cout << mx1 << " " << mx2 << " " << pos << "\n";
	}
	for (int i = 0; i < n; i++)
		cout << dp[i] << " ";
	cout << "\n";
	return dp[n - n % k];
	// return mx1;

}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	int n, k; cin >> n >> k;
	int a[n];
	f(i, 0, n)cin >> a[i];
	cout << solve(a, k, n);

}
