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

int dp[100][100];
int lcs_sub(string x, string y, int n, int m, string &ans)
{
	if (n == 0 || m == 0)
		return dp[n][m] = 0;
	else if (dp[n][m] != -1)
		return dp[n][m];
	else if (x[n - 1] == y[m - 1])
	{
		ans += x[n - 1];
		return dp[n][m] = 1 + lcs_sub(x, y, n - 1, m - 1, ans);
	}
	else
		return dp[n][m] = max(lcs_sub(x, y, n - 1, m, ans), lcs_sub(x, y, n, m - 1, ans));
}
int main()
{
	IOS;
	read;
	mem(dp, -1);
	string x, y, ans;
	cin >> x >> y;
	int n = x.length(), m = y.length();
	cout << lcs_sub(x, y, n, m, ans) << "\n" << ans << "\n";

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
			cout << dp[i][j] << " ";
		cout << "\n";
	}
}
