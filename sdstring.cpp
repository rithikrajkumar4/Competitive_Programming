#include<bits/stdc++.h>
using namespace std;

// #define pi 				M_PI
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

bool is_same(string s)
{
	bool ok0 = true, ok1 = true;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '0')
		{
			ok0 = false;
			break;
		}
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '1')
		{
			ok1 = false;
			break;
		}
	}
	if (ok1 || ok0)
		return true;
	else
		return false;
}
int min_change(string s)
{
	int ans = 0;
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] != s[i + 1])
			i++;
		else

		}
}
int main()
{
	IOS;
	read;
	w(t)
	{
		string s; cin >> s;
		if (s.length() % 2 == 1)
			cout << "-1\n";
		else
		{
			if (is_same(s))
				cout << "-1\n";
			else
			{
				cout << min_change(s) << "\n";
			}
		}
	}
}
