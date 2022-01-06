#include<bits/stdc++.h>
using namespace std;

#define pi 				M_PI
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

bool if_d_in_it(int d, ll x)
{
	while (x > 0)
	{
		ll r = x % 10;
		if (r % d == 0 && r != 0)
			return true;
		x /= 10;
	}
	return false;
}
int main()
{
	IOS;
	// read;
	w(t)
	{
		int q, d; cin >> q >> d;
		for (int i = 0; i < q; i++)
		{
			ll x; cin >> x;
			if (d == 1)
				cout << "YES\n";
			else if (x >= 10 * d * 1ll)
				cout << "YES\n";
			else if (if_d_in_it(d, x))
				cout << "YES\n";
			else
			{
				ll c = d;
				bool flag = false;
				while (c < x)
				{
					// cout << c << " ";
					if ( (x - c) % d == 0 )
					{
						flag = true;
						break;
					}
					c += 10;
				}
				// cout << "\n";
				if (flag)
					cout << "YES\n";
				else
					cout << "NO\n";
			}
		}
	}
}
