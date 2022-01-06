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

ll power(ll n , ll k)
{

}
int main()
{
	IOS;
	read;
	int k;
	ll last = 0;
	cin >> k;
	vll v(1000000, 0);
	w(t)
	{
		ll n;
		cin >> n;
		if (n == 1)
		{
			cout << 1 << "\n" << "1" << "\n";
			continue;
		}
		vi mark(n, -1);
		ll f1_s = 0, f2_s = 0;
		for (ll i = last + 1; i <= n; i++)
		{
			// cout << i << " " << k << "\n";
			v[i - 1] = pow(i, k) + 0.5;
			// cout << v[i - 1] << " ";
		}
		// cout << "\n";
		last = n;
		f1_s = v[n - 1];
		mark[n - 1] = 1;
		for (ll i = n - 2; i >= 0; i--)
		{
			if (f2_s < f1_s)
			{
				f2_s += v[i];
				mark[i] = 0;
			}
			else if (f2_s >= f1_s)
			{
				f1_s += v[i];
				mark[i] = 1;
			}
		}
		cout << abs(f1_s - f2_s) << "\n";
		for (int i = 0; i < n; i++)
			cout << mark[i];
		cout << "\n";
		// s = n;
	}
}

