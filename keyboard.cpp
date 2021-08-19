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

bool is_present(auto a , unordered_map<char, vpii> hm)
{
	for (auto it : hm)
	{
		if (it.fi == a)
			return true;
	}
	return false;
}
int sqr(int x)
{
	return x * x;
}
int main()
{
	IOS;
	// read;
	int n, m, x;
	cin >> n >> m >> x;
	unordered_map<char, vpii> all_lett;
	vpii shift_at;
	bool flag = false;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char y; cin >> y;
			if (y == 'S')
			{
				shift_at.pb(mk(i, j));
				flag = true;
			}
			else
			{
				all_lett[y].pb(mk(i, j));
			}

		}
	}
	int q; cin >> q;
	unordered_map<char, int> upper_let;
	set<char> s ;
	for (int i = 0; i < q; i++)
	{
		char y; cin >> y;
		if (isupper(y))
		{
			if (is_present(tolower(y), all_lett))
				upper_let[y]++;
			else
			{
				flag = false;
				break;
			}
		}
		else
		{
			s.insert(y);
		}

	}

	// Lower letter present or not in the keyboard::
	if (upper_let.size() == 0)
		flag = true;
	for (auto it : s)
	{
		if (!is_present(it, all_lett))
		{
			flag = false;
			break;
		}
	}
	int ans = 0;
	if (flag)
	{
		// cout << "ok";
		for (auto it : upper_let)
		{
			bool got_it = false;
			for (auto it1 : all_lett[tolower(it.fi)])
			{
				for (auto it2 : shift_at)
				{
					if (sqrt(sqr(it2.fi - it1.fi) + sqr(it2.se - it1.se)) <= x)
					{
						got_it = true;
						break;
					}
				}
				if (got_it)
					break;
			}
			if (!got_it)
			{
				ans += it.se;
			}
		}
		cout << ans;
	}
	else
	{
		cout << -1 << "\n";
	}
	// // print all letters

	// for (auto it : all_lett)
	// {
	// 	cout << it.fi << "\n";
	// 	for (auto f : it.se)
	// 		cout << f.fi << " " << f.se << "\n";
	// }

	// cout << "Shift At\n";
	// for (auto it : shift_at)
	// 	cout << it.fi << " " << it.se << "\n";
}
