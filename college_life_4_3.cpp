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

ll solve(ll n, ll e, ll h, ll a, ll b, ll c)
{
	ll cost = INT_MAX - 1;
	if (2 * n <= e)
		cost = min(cost, n * a);
	if (3 * n <= h)
		cost = min(cost, n * b);
	if (n <= e && n <= h)
		cost = min(cost, n * c);
	// a and b
	if (e >= 2 && e / 2 >= ceil((3 * n - h) / 3))
	{
		if (a < b)
		{
			ll temp = min(n - 1, e / 2);
			cost = min(cost, (a - b) * temp + n * b);
		}
		else
		{
			ll temp = max(1, (int)((3 * n - h + 2) / 3));
			cost = min(cost, (a - b) * temp + n * b);
		}
	}
	// a & c
	if ((e - n) >= 1 && (e + h) >= 2 * n)
	{
		if (a < c)
		{
			ll temp = min(n - 1, e - n);
			cost = min(cost, (a - c) * temp + n * c);
		}
		else
		{
			ll temp = max(1, (int)(n - h));
			cost = min(cost, (a - c) * temp + n * c);
		}
	}
	// b and c
	if ((h - n) / 2 >= 1 && (h - n) / 2 >= (n - e))
	{
		if (b < c)
		{
			ll temp =  min(n - 1, (h - n) / 2);
			cost = min(cost, (b - c) * temp + n * c);
		}
		else
		{
			ll temp = max(1, (int)(n - e));
			cost = min(cost, (b - c) * temp + n * c);
		}
	}

	// all three
	if (e >= 3 && h >= 4 && n >= 3)
	{
		cost = min(cost, (a + b + c + solve(n - 3, e - 3, h - 4, a, b, c)));
	}

	if (cost == INT_MAX - 1)
		return -1;
	return cost;
}
int main()
{
	IOS;
	read;
	w(t)
	{
		ll n, e, h, a, b, c; cin >> n >> e >> h >> a >> b >> c;
		cout << solve(n, e, h, a, b, c) << "\n";


	}
}
