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
const int maxn = 30001;

bool sieve[maxn];
int main()
{
	IOS;
	// read;
	mem(sieve, 1); sieve[0] = false;
	sieve[1] = true;
	for (int i = 2; i * i < maxn; i++)
	{
		if (sieve[2])
		{
			for (int j = i * i; j < maxn; j += i)
				sieve[j] = false;
		}
	}
	vi store(maxn);
	for (int i = 1; i < maxn; i++)
	{
		if (sieve[i])
			store.pb(i);
	}
	w(t)
	{
		int d; cin >> d;
		ll ans = 1, last = 1, c = 2;
		for (int i = 1; i < store.size(); i++)
		{
			if ((last + d) <= store[i] )
			{
				// cout << store[i] << " ";
				last = store[i];
				ans *= (ll)store[i];
				c--;

			}
			if (c == 0)
				break;
		}
		// cout << "\n";
		cout << ans << "\n";
	}
}
