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
vi v(100, 0);
vi ans(100, 0);
void rec(int s, int e, int depth, int n)
{
	cout << "ok" << "\n";
	int mx = -1, idx = 0;
	if (s > e)
		return;
	for (int i = s; i < e; i++)
	{
		if (mx < v[i])
		{
			mx = v[i];
			idx = i;
		}
	}
	ans[idx] = depth;
	rec(s, idx - 1, depth + 1, n);
	rec(idx + 1, e, depth + 1, n);
	return;

}
int main()
{
	IOS;
	read;
	w(t)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)cin >> v[i];
		rec(0, n, 0, n);
		for (int i = 0; i < n; i++)
			cout << ans[i] << " ";
		cout << "\n";
	}
}
