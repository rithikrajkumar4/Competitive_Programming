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

int main()
{
	IOS;
	read;
	w(t)
	{
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		char a[n][m];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		}
		if (2 * x <= y)
		{
			cout << (n + m)*x << "\n";
		}
		else
		{
			int ans = 0;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j <= m - 1; j += 2)
				{
					if (j + 1 < m)
					{

						if (a[i][j] == a[i][j + 1])
							ans += y;
						else
							ans += 2 * x;
					}
					else
						ans += x;
				}
			}
			cout << ans << "\n";
		}
	}
}
