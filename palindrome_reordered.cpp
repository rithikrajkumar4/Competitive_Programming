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

string add_in(int i, int j, string ans, char x)
{
	for (int k = 0; k < ans.length(); k++)
	{
		if ( k >= i && k < j)
			ans[k] = x;
		if (k >= j)
			break;
	}
	return ans ;
}
int main()
{
	IOS;
	// read;
	string s, ans = ""; cin >> s;
	unordered_map<char, int> hm;
	int len = s.length();
	for (int i = 0; i < len; i++)
		ans += 'X';
	for (int i = 0; i < len; i++)
		hm[s[i]]++;
	// cout << ans << "\n";

	// for (auto it : hm)
	// 	cout << it.fi << " " << it.se << "\n";
	if (len & 1)
	{
		bool f = false;
		int p = 0, q = len;
		for (auto it : hm)
		{
			if ((it.se & 1) && f == false)
			{
				f = true;
				ans = add_in((len - it.se) / 2, (len - it.se) / 2 + it.se, ans, it.fi);
			}
			else if (f == true && (it.se & 1))
			{
				f = false;
				break;
			}
			else
			{
				ans  = add_in(p, p + (it.se / 2), ans, it.fi);
				ans = add_in(q - (it.se / 2), q, ans, it.fi);
				p += (it.se / 2);
				q -= (it.se / 2);
			}
		}
		if (f)
			cout << ans;
		else if (f == 0)
			cout << "NO SOLUTION";
	}
	else
	{
		bool f = true;
		int p = 0, q = len;
		for (auto it : hm)
		{
			if (it.se & 1)
			{
				f = false;
				break;
			}
			else

				ans  = add_in(p, p + (it.se / 2), ans, it.fi);
			ans = add_in(q - (it.se / 2), q, ans, it.fi);
			p += (it.se / 2);
			q -= (it.se / 2);
		}
		if (f)
			cout << ans;
		else if (f == 0)
			cout << "NO SOLUTION";
	}

}

