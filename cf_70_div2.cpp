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
#define vvi				vector<vii>
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
const int maxn = 100010;



int main()
{
	IOS;
	// read;
	ll n;
	cin >> n;
	vll x(n + 1, 0), y(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		cin >> x[i];
		y[i] = x[i];
		// cout << x[i] << " " << y[i] << "\n";

	}
	sort(y.begin(), y.end());
	for (int i = 1; i <= n; i++)
	{
		x[i] += x[i - 1];
		y[i] += y[i - 1];
		// cout << y[i] << " ";
	}
	ll m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int opt, l, r;
		cin >> opt >> l >> r;
		if (opt == 1)
		{
			cout << x[r] - x[l - 1] << "\n";
		}
		else
			cout << y[r] - y[l - 1] << "\n";
	}
}

