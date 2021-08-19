#include<bits/stdc++.h>
using namespace std;


#define pi 				M_PI
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
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
const int maxn = 100010;



int main()
{
	IOS;
	// read;
	int m, n;
	char pc;
	cin >> n >> m >> pc;
	char a[n][100] ;
	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == pc)
				v.pb(mk(i, j));
		}
	}
	set<int> st;
	for (auto x : v)
	{
		if (x.fi < (n - 1) && a[x.fi + 1][x.se] != '.' && a[x.fi + 1][x.se] != pc )
			st.insert(a[x.fi + 1][x.se]);
		if (x.fi > 0 && a[x.fi - 1][x.se] != '.' && a[x.fi - 1][x.se] != pc)
			st.insert(a[x.fi - 1][x.se]);
		if (x.se < m - 1 && a[x.fi][x.se + 1] != '.' && a[x.fi][x.se + 1] != pc)
			st.insert(a[x.fi][x.se + 1]);
		if (x.se > 0 && a[x.fi][x.se - 1] != '.' && a[x.fi][x.se - 1] != pc)
			st.insert(a[x.fi][x.se - 1]);
	}
	int ans = 0;
	for (auto it : st)
		ans++;
	cout << ans;
}