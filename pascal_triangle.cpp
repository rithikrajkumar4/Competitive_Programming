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
#define vvll			vector<vector<ll>>
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;



// bool check[10000];
// vvll
vll pascal(int n)
{
	// if(bool[n] != -1)
	// 	return
	vll v1(n);
	if (n == 1)
	{
		v1[0] = 1;
		return v1;
	}
	else if ( n == 2)
	{
		v1[n - 1] = 1;
		v1[0] = 1;
		return v1;
	}
	vll v(n - 1);
	v = pascal(n - 1);
	v1[0] = 1;
	v1[n - 1] = 1;
	for (int i = 1; i <= n - 2; i++)
	{
		v1[i] = (v[i - 1] % mod + v[i] % mod) % mod;
	}
	return v1;
}
void print(vll v)
{
	// cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << "\n";
}
int main()
{
	IOS;
	read;
	int n;
	mem(check, -1);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		print(pascal(i));
	}
	return 0;
}
