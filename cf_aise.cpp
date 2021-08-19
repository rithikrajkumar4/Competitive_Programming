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
#define vvi				vector<vii>
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);



int main()
{
	IOS;
	// read;
	ll n, k;
	cin >> n >> k;
	vi v(n + 2);
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	v[0] = 0;
	v[n + 1] = k;
	sort(all(v));
	double m = 0;
	for (int i = 1; i < n + 2; i++)
	{
		// cout << v[i] - v[i - 1] << " ";
		m = max(m, (double)(v[i] - v[i - 1]));
	}
	// cout << m;
	if (v[1] == 0)
	{
		if (v[n] == k)
			cout << sp(m / 2, 10);
		else
		{

			if (m / 2 <= v[n + 1] - v[n])
				cout << sp((double)v[n + 1] - v[n], 10);
			else
				cout << sp(m / 2, 10);
		}
	}
	else
	{
		if (v[n] == k)
		{
			if (m / 2 <= v[1] - v[0])
				cout << sp((double)v[1] - v[0], 10);
			else
				cout << sp(m / 2, 10);
		}
		else
		{
			int h;
			h = max((double)(v[1] - v[0]), (double)(v[n + 1] - v[n]));
			if (m / 2 <= h)
				cout << sp((double)h, 10);
			else
				cout << sp(m / 2, 10);
		}
	}
}

