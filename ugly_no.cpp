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
	read;
	vll v(10001, 1);
	ll a = 2, b = 3, c = 5;
	for (int i = 2; i < 10001; i++)
	{
		if (a <= b && a <= c)
		{
			v[i] = a;
			a += 2;
		}
		else if (b <= a && b <= c)
		{
			v[i] = b;
			b += 3;
		}
		else
		{
			v[i] = c;
			c += 5;
		}
		cout << v[i - 1] << " ";
	}
	w(t)
	{
		ll n;
		cin >> n;
		cout << "\n" << v[n] << "\n";
	}
}

