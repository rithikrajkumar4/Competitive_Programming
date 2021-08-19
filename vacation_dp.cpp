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

int dp[102][4];
int max_holiday(int a[], int n, int next)
{
	if (n == 0)
		return 0;
	if (dp[n][next] != -1)
		return dp[n][next];
	if (next == 0)
	{
		if (a[n - 1] == 0)
			return dp[n][next] = 1 + max_holiday(a, n - 1, 0);
		else if (a[n - 1] == 1)
			return dp[n][next] = max_holiday(a, n - 1, 2);
		else if (a[n - 1] == 2)
			return dp[n][next] = max_holiday(a, n - 1, 1);
		else if (a[n - 1] == 3)
			return dp[n][next] = max(max_holiday(a, n - 1, 1), max_holiday(a, n - 1, 2));
	}
	else if (next == 1)
	{
		if (a[n - 1] == 0)
			return dp[n][next] = 1 + max_holiday(a, n - 1, 0);
		else if (a[n - 1] == 1)
			return dp[n][next] = 1 + max_holiday(a, n - 1, 0);
		else if (a[n - 1] == 2)
			return dp[n][next] = max_holiday(a, n - 1, 1);
		else if (a[n - 1] == 3)
			return dp[n][next] = max_holiday(a, n - 1, 1);
	}
	else if (next == 2)
	{
		if (a[n - 1] == 0)
			return dp[n][next] = 1 + max_holiday(a, n - 1, 0);
		else if (a[n - 1] == 1)
			return dp[n][next] = max_holiday(a, n - 1, 2);
		else if (a[n - 1] == 2)
			return dp[n][next] = 1 + max_holiday(a, n - 1, 0);
		else if (a[n - 1] == 3)
			return dp[n][next] = max_holiday(a, n - 1, 2);
	}
}
int main()
{
	mem(dp, -1);
	IOS;
	read;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)cin >> a[i];
	int next = 0;
	cout << max_holiday(a, n, next);

}
