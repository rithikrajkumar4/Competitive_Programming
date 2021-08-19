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


ll max_od(ll k )
{
	ll ans = 0;
	while (k > 1)
	{
		if (k % 2)
			k = 3 * k + 1;
		else
			k /= 2;
		ans++;
	}
	ans++;
	return ans;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll i;
	while (cin >> i)
	{
		ll j; cin >> j;
		ll ma = 0;
		for (ll k = i; k <= j; i++)
		{
			ma = max(ma, max_od(k));
		}
	}
}

