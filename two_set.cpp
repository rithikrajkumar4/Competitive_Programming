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

void solve(ll n, ll q)
{
	vi a, b;
	ll m = q;
	for (int i = n; i > 0; i--)
	{
		if (m - i >= 0)
		{
			a.pb(i);
			m -= i;
		}
		else
			b.pb(i);
	}
	cout << a.size() << "\n";
	for (auto it : a)
		cout << it << " ";
	cout << "\n";
	cout << b.size() << "\n";
	for (auto it : b)
		cout << it << " ";
	cout << "\n";
}
int main()
{
	IOS;
	read;
	ll n; cin >> n;
	ll c = ((n * (n + 1)) / 2);
	if ( c & 1)
		cout << "NO";
	else
	{
		cout << "YES" << "\n";
		solve(n, c / 2);
	}
}
