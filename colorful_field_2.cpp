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
bool ws(ll k, ll r, ll c, vpll waste)
{
	for (int i = 0; i < k; i++)
	{
		if (waste[i].fi == r && waste[i].se == c)
			return true;
	}
	return false;
}
int tot_ws(vpll waste , ll k, ll r, ll c)
{
	int tot = 0;
	for (int i = 0; i < k; i++)
	{
		if (r > waste[i].fi || (r == waste[i].fi && c >= waste[i].se))
		{
			tot++;
		}
		else
			break;
	}
	return tot;
}
int main()
{
	IOS;
	// read;
	ll n, m, k, t;
	cin >> n >> m >> k >> t;
	vpll waste(k);
	for (int i = 0; i < k; i++)
	{
		ll r, c; cin >> r >> c;
		// cout << r << " " << c << "\n";
		waste[i] = (mk(r - 1, c - 1));
	}
	sort(all(waste));
	// for (int i = 0; i < k; i++)
	// 	cout << waste[i].fi << " " << waste[i].se << "\n";

	for (int i = 0; i < t; i++)
	{
		ll r, c; cin >> r >> c;
		r--, c--;
		if (ws(k, r, c, waste))
		{
			cout << "Waste" << "\n";
		}
		else
		{
			int tot = tot_ws(waste, k, r, c);
			// cout << tot << " ";
			ll res = ((r * m) + c) - tot;
			// cout << res << "\n";
			if (res % 3 == 0)
				cout << "Carrots" << "\n";
			else if (res % 3 == 1)
				cout << "Kiwis" << "\n";
			else if (res % 3 == 2)
				cout << "Grapes" << "\n";
		}
	}
}
