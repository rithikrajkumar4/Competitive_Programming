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

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
	if (a.second == b.se)
		return a.fi < b.fi;
	return a.second > b.second;
} 11

const int maxn = 100010;

int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	string my_name; cin >> my_name;
	int n; cin >> n;
	map<string, int> map;

	for (int j = 0; j <= n; j++)
	{
		string s;
		getline(cin, s);
		string a = "", b = "" , type = "";
		int f = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ' && f != 1)
			{
				f = 1;
				continue;
			}
			if (f == 0)
				a += s[i];
			else if (f == 1)
			{
				if (s[i] == ' ')
					break;
				type += s[i];
			}
		}
		for (int i = s.length() - 8; i >= 0; i--)
		{
			if (s[i] == ' ')
				break;
			b += s[i];
		}
		reverse(all(b));
		if (type == "posted")
		{
			map[a] += 15;
			map[b] += 15;
		}
		else if (type == "commented")
		{
			map[a] += 10;
			map[b] += 10;
		}
		else if (type == "likes")
		{
			map[a] += 5;
			map[b] += 5;
		}
	}
	vector<pair<string , int>> ans;
	for (auto it : map)
	{
		ans.pb(make_pair(it.fi, it.se));
	}
	sort(all(ans), cmp);
	for (auto it : ans)
	{
		if (it.fi == my_name)
			continue;
		else
			cout << it.fi << " " << it.se << "\n";
	}
}
