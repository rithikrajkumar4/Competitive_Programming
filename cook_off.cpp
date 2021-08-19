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


int ans(vll v)
{
	ll a = 1;
	ll last = v[0];
	ll best = 0;
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] == last)
		{
			best = max(best , a);
			a = 0;
		}
		last = v[i];
		a++;
	}
	return best > a ? best : a;
}
int main()
{
	IOS;
	read;
	w(t)
	{
		int n, q;
		cin >> n >> q;
		vll v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		for (int i = 0; i < q; i++)
		{
			ll x, y;
			cin >> x >> y;
			v[x - 1] = y;
			cout << ans(v) << "\n";
		}
	}
}
