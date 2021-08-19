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
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define w(t)            ll t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
const int maxn = 100010;



int main()
{
	IOS;
	read;
	// vll v(maxn, 0);
	w(t)
	{
		ll n;
		cin >> n;
		ll sum = n * (n + 1) / 2;

		if (n == 1)
		{
			cout << "0" << "\n";
			continue;
		}
		else if (sum % 2)
		{
			cout << 0 << "\n";
			continue;
		}
		else
		{
			// if (v[n] > 0)
			// {
			// 	cout << v[n] << "\n";
			// 	continue;
			// }
			ll temp = n;
			ll ans = 0;
			ll make = sum / 2, start = 0;
			while (start < make )
			{
				start += temp + (temp - 1);
				// cout << start << "\n";
				temp -= 2;
				ans += 2;
			}
			if (start - (temp + 1) > make)
			{
				ans--;
				start -= (temp + 1);
			}
			if (start == make)
			{
				ll nice = (n - ans - 1) * (n - ans) / 2 + (ans - 1) * (ans) / 2;
				ans += nice;
			}
			cout << ans << "\n";
			// v[n] = ans;

		}
	}
}

