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

string fun(int x, string a)
{
	string temp = a;
	for (int i = 2; i <= x; i++)
		temp += a;
	return temp;
}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	w(t)
	{
		string s, t; cin >> s >> t;
		string small, larger;
		if (s.length() > t.length())
		{
			small = t;
			larger = s;
		}
		else
		{
			small = s;
			larger = t;
		}

		if (ceil((float)larger.length() / small.length()) == floor(larger.length() / small.length()))
		{
			// cout << 1 << " ok";
			int x = larger.length() / small.length();
			// cout << " " << x;
			// cout << " " << fun(x, small);
			if (fun(x, small) == larger)
				cout << larger << "\n";

			else
				cout << -1 << "\n";
		}
		else
		{
			int x = small.length() * larger.length() / (__gcd(small.length(), larger.length()));
			string s = small, t = larger;
			s = fun(x / small.length(), small);
			t = fun(x / larger.length(), larger);
			if (s == t)
				cout << s << "\n";
			else
				cout << -1 << "\n";
		}

	}

}
