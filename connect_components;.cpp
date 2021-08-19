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
bool check[100];
void dfs(int s, int v, vi adj[])
{
	stack<int> st;
	st.push(s);
	// check[s] = true;
	// cout << s << " ";

	while (!st.empty())
	{
		int to_be = st.top();
		bool flag = 1;
		check[to_be] = 1;
		for (auto it : adj[to_be])
		{
			if (check[it] == 0)
			{
				// check[it] = true;
				// cout << it << " ";
				st.push(it);
				flag = 0;
				break;
			}
		}
		if (flag)
			st.pop();
	}
	return;
}
int main()
{
	IOS;
	read;
	int v, e;
	cin >> v >> e;
	vi adj[v + 1];
	for (int i = 0; i < e; i++)
	{
		int a, b; cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	// bool check[v + 1] = {0};

	// for (int i = 1; i <= v; i++)
	// {
	// 	cout << i << "->";
	// 	for (auto it : adj[i])
	// 		cout << it << " ";
	// 	cout << "\n";
	// }
	// bool check[v + 1] = false;
	int ans = 0;
	for (int i = 1; i <= v; i++)
	{
		if (check[i] == false)
		{
			// cout << i << "\n";
			ans++;
			dfs(i, v, adj);
		}
	}
	cout << ans;

}
