#include<bits/stdc++.h>
using namespace std;

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
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t)
	{
		int n, k;
		cin >> n >> k;
		unordered_map<int, int> m;
		for (ll i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			m[x]++;
		}
		int tables = 1, fight = 0;
		for (auto it : m )
		{
			if (it.second > 1)
			{
				tables = max(tables, it.se);
				fight += it.second;

			}

		}
		// cout << tables << " " << fight << "\n";
		int ans = INT_MAX;
		if (k == 1)
		{
			ans = k * tables;
		}
		else
		{
			for (int i = 1; i <= tables; i++)
			{
				if (i == tables)
				{
					ans = min(ans, k * i);
				}
				else
				{
					ans = min(ans, (i * k + (fight - i + 1)));
				}
			}
		}
		cout << ans << "\n";


	}
}

