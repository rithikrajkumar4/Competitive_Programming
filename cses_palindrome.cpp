#include<bits/stdc++.h>
using namespace std;

#define ull        		unsigned long long
#define pb(a)         	push_back(a)
#define mk(a,b)			make_pair(a,b)
#define all(x)	  		x.begin(),x.end()
#define fi 				first
#define	se				second
#define loop(i,a,b) 	for(auto i=a;i!=b;i++)
#define b_loop(i,a,b)	for(ll i=b;i>=a;i--)
#define rep(i,n)     	for(ll i=0;i<n;i++)
#define vll       		vector<ll>
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000007



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	string s;
	cin >> s;
	unordered_map<char, int> m;
	int c = 0;
	char oddchar ;
	string f_half = "", s_half = "";

	for (ull i = 0; i < s.length(); i++)
	{
		m[s[i]]++;
	}
	for (auto it : m)
	{
		if (it.se % 2)
		{
			++c;
			oddchar = it.fi;
		}
		if (c > 1)
		{
			cout << "NO SOLUTION";
			return 0;
		}
	}
	for (auto it : m)
	{
		for (int i = 0; i < it.se / 2; i++)
		{
			f_half += it.fi;
			s_half += it.fi;
		}
	}
	if (c == 1)
		f_half += oddchar;
	reverse(s_half.begin(), s_half.end());
	cout << f_half << s_half;


}

