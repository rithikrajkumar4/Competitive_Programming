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
#define print(x)		cout<<x<<" "

// ll ncr(ll n, ll r){
// 	r = min(r,n-r);
// 	ll ans = 1,t=r;
// 	for(int i=0;i<r;i++){
// 		ans *=(n-i);
// 		ans /= t;
// 		t--;
// 	}
// 	return ans;
// }
bool as_sec(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.second < b.second;
}
set<vector<int>> s;
const int maxn = 100010;

void dfs(vvi adj,int n,vector<bool> &vis,int u){
	cout<<u<<" ";
	vis[u] = true;
	for(auto it:adj[u]){
		if(!vis[it])dfs(adj,n,vis,it);
	}
	return;
}
void solve() 
{
	int n,e;cin>>n>>e;
	vector<bool> vis(n+1,0) ;
	vector<vector<int>> adj(n+1);
	for(int i=0;i<e;i++){
		int v1,v2;cin>>v1>>v2;
		adj[v1].push_back(v2);
		adj[v2].push_back(v1);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<"->";		
		for(auto k : adj[i])
		{
			cout<<k<<" "; 
		}
		cout<<"\n";
	}
	dfs(adj,n,vis,1);
}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	solve();
}