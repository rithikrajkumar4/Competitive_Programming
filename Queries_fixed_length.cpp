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
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;

int fun(vector<int> v, int d, int n)
{
	vector<int> a(n);
	int mn = INT_MAX;
	for (int i = 0; i <= n - d; i++)
	{
		int mx = 0;
		for (int j = i; j < i + d; j++)
		{
			mx = max(mx, v[i]);
		}
		mn = min(mn, mx);
	}
	return mn;
}

int main()
{
	IOS;
	read;
	int n, q;
	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	while (q--)
	{
		int d;
		cin >> d;
		cout << fun(v, d, n) << "\n";
	}
}
