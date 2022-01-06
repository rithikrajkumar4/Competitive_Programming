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
const int maxn = 100010;

void addEdge(vector<ll> adj[], ll s, ll d) {
	adj[s].push_back(d);
	adj[d].push_back(s);
}

// Print the graph
void printGraph(vector<ll> adj[], ll V) {
	for (ll d = 0; d < V; ++d) {
		cout << "\n Vertex " << d << ":";
		for (auto x : adj[d])
			cout << "-> " << x;
		printf("\n");
	}
}

int main()
{
	IOS;
// #ifndef ONLINE_JUDGE
	read;
// #endif
	w(t)
	{
		ll n; cin >> n;
		vll v[n];
		for (ll i = 0; i < n - 1; i++)
		{
			ll a, b;
			cin >> a >> b;
			// cout << a << " " << b << "\n";
			addEdge(v, a, b);
			// v[a].push_back(b);
			// v[b].push_back(a);
		}
		ll s[n][4];
		ll k = 0;
		for (ll i = 1; i <= n; i++)
		{
			if (v[i].size() > 2)
			{
				s[k][0] = i;
				// ll n = 0, m = 0;
				ll z = 0;
				for (ll j = 0; j < v[i].size(); j++)
				{
					if (v[v[i][j]].size() < 2 && z < 2)
					{
						s[k][z + 2] = v[i][j];
						z++;
					}
				}
				s[k][1] = s[k][3];
				k++;
			}
		}
		for (ll j = 0; j < k; j++)
		{
			cout << k << "\n";
			cout << s[j][0] << " " << s[j][1] << " " << s[j][2] << " " << s[j][3] << "\n";
		}
	}

}
