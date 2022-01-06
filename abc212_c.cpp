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
// // my solution in 2nd go
// void my_solve() {
// 	map<ll, ll> mp;
// 	int n, m; cin >> n >> m;
// 	ll a[n], b[m];
// 	f(i, 0, n) {cin >> a[i]; mp[a[i]]++;}
// 	f(i, 0, m) {cin >> b[i]; mp[b[i]]--;}

// 	ll mn = inf;
// 	pair<ll, ll> last;
// 	last.fi = ninf;
// 	last.se = ninf;
// 	for (auto it : mp)
// 	{
// 		if (it.se == 0)
// 		{
// 			cout << 0;
// 			return ;
// 		}
// 		else
// 		{
// 			ll ok = inf;
// 			if (last.fi != ninf && it.se < 0 && last.se > 0)
// 			{
// 				ok = abs(last.fi - it.fi);
// 			}
// 			else if (last.fi != ninf && it.se > 0 && last.se < 0)
// 				ok = abs(last.fi - it.fi);
// 			mn = min(mn, ok);
// 			last.fi = it.fi;
// 			last.se = it.se;
// 		}
// 	}
// 	cout << mn;

// }
// best solution i found
void solve()
{
	int n, m;
	int a[maxn];
	int b[maxn];
	int ans = inf;
	cin >> n >> m;
	rep(i, n)cin >> a[i];
	rep(i, m)cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	int x = 0;
	int y = 0;
	while ((x < n) && (y < m)) {
		ans = min(ans, abs(a[x] - b[y]));
		if (a[x] > b[y])y++;
		else x++;
	}
	cout << ans << endl;
}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	solve();


}
