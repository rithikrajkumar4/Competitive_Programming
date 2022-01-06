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

ll solve(ll n , ll eggs , ll bars, ll a, ll b, ll c)
{
	ll x = min(a, min(c, b));
	if (n != 0 && x == INT_MAX - 1 || (eggs == 0 && bars == 0))
		return INT_MIN + 1;
	else if (n == 0 || x == INT_MAX - 1)
		return 0;
	else if (c == x)
	{
		if (eggs >= 1 && bars >= 1)
		{
			ll k = min(eggs, bars);
			if (k >= n)
				return c * n;
			else
				return c * (k) + solve(n - k, eggs - k, bars - k, a, b, INT_MAX - 1);
		}
		else
			return solve(n, eggs, bars, a, b, INT_MAX - 1);
	}
	else if (a == x)
	{
		if (eggs >= 2)
		{
			ll k = (int)eggs / 2;
			if (k >= n)
				return a * n;
			else
				return a * k + solve(n - k, eggs % 2, bars, INT_MAX - 1, b, c);
		}
		else
			return solve(n, eggs, bars, INT_MAX - 1, b, c);
	}
	else if (b == x)
	{
		if (bars >= 3)
		{
			ll k = (int)bars / 3;
			if (k >= n)
				return b * n;
			else
				return b * k + solve(n - k, eggs, bars % 3, a, INT_MAX - 1, c);
		}
		else
			return solve(n, eggs, bars, a, INT_MAX - 1, c);
	}

}
int main()
{
	IOS;
	read;
	w(t)
	{
		ll n, eggs, bars, a, b, c; cin >> n >> eggs >> bars >> a >> b >> c;
		//a->2eggs
		//b->3bars
		//c->1egg,1bar
		ll ans =  solve(n, eggs, bars, a, b, c);
		if (ans < 0)
			cout << -1 << "\n";
		else
			cout << ans << "\n";
	}
}
