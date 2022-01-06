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
#define vvi				vector<vi>
#define un_mapii		unordered_map<int,int>
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
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	ll n;
	cin >> n;
	if (n % 2)
	{
		ll k1 = ((n + 1) / 2) * ((1 + n) / 2) * (-1);
		ll k2 = ((n - 1) / 2) * ((n + 1) / 2);
		cout << k2 + k1;
	}
	else
	{
		ll k1  = (n / 2) * ((n) / 2) * (-1);
		ll k2 = (n / 2) * ((n + 2) / 2);
		cout << k1 + k2 ;
	}
}

