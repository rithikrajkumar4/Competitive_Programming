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


int fun1(string s, int i, int j)
{
	int count = 0;
	for (int k = min(i, j); k < max(i, j); k++)
	{
		if (s[k] == 'X')
			return 0;
		else if (s[k] == ':')
			count++;
	}
	return abs(i - j) + count;
}
int main()
{
	IOS;
	read;
	w(t)
	{
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		vi magnets;
		vi irons;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'M')
				magnets.pb(i);
			else if (s[i] == 'I')
				irons.pb(i);
		}
		set<int> ans;
		unordered_map<int, bool> map;
		for (auto it : magnets)
			map[it] = false;
		for (auto it : irons)
			map[it] = false;
		for (auto i : magnets)
		{
			for (auto j : irons)
			{
				if (map[i] == false && map[j] == false)
				{
					int sub = fun1(s, i, j);
					if (sub)
					{
						if (k + 1 - sub > 0)
						{
							map[i] = true;
							map[j] = true;
							cout << j << " ";
							ans.insert(j);
						}
					}
				}

			}
		}
		int max_magnets = 0;
		for (auto it : ans)
		{
			cout << it << " ";
			++max_magnets;
		}
		cout << max_magnets << "\n";
	}
}
