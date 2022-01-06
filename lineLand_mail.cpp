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
#define vi				vector<int>
#define vvi				vector<vii>
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
	int n;
	cin >> n;
	vi v(n, 0);
	for (int i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v[i] = x;
	}
	sort(v.begin(), v.end());
	int mx = 0, mn = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			mx = abs(v[n - 1] - v[i]);
			mn = abs(v[i + 1] - v[i]);
		}
		else if ( i == (n - 1))
		{
			mx = abs(v[i] - v[0]);
			mn = abs(v[i] - v[i - 1]);
		}
		else
		{
			mx = max(abs(v[n - 1] - v[i]), abs(v[i] - v[0]));
			// if(i-1>=0 && i+1<=(n-1))
			mn = min(abs(v[i + 1] - v[i]), abs(v[i] - v[i - 1]));
		}
		cout << mn << " " << mx << "\n";
	}
}

