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
#define f(i,a,n)		for(int i=a;i<n;i++)
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

bool as_sec(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.second < b.second;
}

const int maxn = 100010;

int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	w(t)
	{
		ll n; cin >> n;
		ll a[n];
		f(i, 0, n)cin >> a[i];
		ll l1 = ninf, l2, found = 1, ans = 0;
		for (int i = 0; i < n; i++)
		{

			if (a[i] <= 0 && found)
			{
				l2 = l1;
				l1 = a[i];
				ans++;
			}
			else
			{
				if (l2 == ninf)
					continue;
				else if (found)
				{
					if (abs(l2 - l1) >= a[i])
					{
						found = 0;
						ans++;
					}
				}

			}
		}
		cout << (ans == 0 ? 1 : ans) << "\n";
	}

}
