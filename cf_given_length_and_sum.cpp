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
void solve() {
	int n, s; cin >> n >> s;
	if (s == 0 && n == 1)
		cout << 0 << " " << 0;
	else if (s > n * 9 or s == 0)
		cout << -1 << " " << -1;
	else if (s == n * 9)
	{
		string ans = "";
		for (int i = 0; i < n; i++)
			ans += '9';
		cout << ans << " " << ans;
	}
	else
	{
		string ans1 = "", ans2 = "";
		int temp = s;
		for (int i = 0; i < n; i++)
		{
			if (temp > 9)
			{
				ans2 += '9';
				temp -= 9;
			}
			else
			{
				ans2 += to_string(temp);
				temp -= temp;
			}
		}
		int i = 1;
		temp = s;
		while (i <= n)
		{
			if ((n - i) * 9 > temp - 1 && temp)
			{
				if (i == 1)
				{
					ans1 += '1';
					temp = temp - 1;
				}
				else
					ans1 += '0';
			}
			else if (temp % 9 == 0 && temp)
			{
				ans1 += '9';
				temp -= 9;
			}
			else
			{
				ans1 += to_string(temp % 9);
				temp -= (temp % 9);
			}
			i++;
		}
		cout << ans1 << " " << ans2;
	}
}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	solve();


}
