#include<bits/stdc++.h>
using namespace std;

// #define pi 				M_PI
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
#define vvll 			vector<vector<ll>>
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define vpii			vector<pair<int,int>>
#define vpll			vector<pair<ll,ll>>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;




int main()
{
	IOS;
	read;
	int n;
	cin >> n;
	int a[n];
	int ok = 0;// not decided
	// 1. next must be gym
	// 2. next must be WORK


	// 0. nothing open
	// 1. work only
	// 2. gym only
	// 3. both
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int rest = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			rest++;
			ok = 0;
		}
		else if (a[i] == 1)
		{
			if (ok == 1)
			{
				rest++;
				ok = 0;
			}
			else
				ok = 1;
		}
		else if (a[i] == 2)
		{
			if (ok == 2)
			{
				rest++;
				ok = 0;
			}
			else
				ok = 2;
		}
		else
		{
			if (ok == 1)
				ok = 2;
			else if (ok == 2)
				ok = 1;
			else
			{

			}
		}
	}
}
