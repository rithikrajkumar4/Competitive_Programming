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
const int maxn = 1010;

// void print_graph(int n , int graph[n+1][n+])
// {

// 	for (int i = 1; i <= n; i++)
// 	{
// 		for (int j = 1; j <= n; j++)
// 			cout << graph[i][j] << " ";
// 		cout << "\n";
// 	}
// }
int main()
{
	IOS;
	read;
	int n, e;
	cin >> n >> e;
	int graph[n + 1][n + 1];
	mem(graph, 0);
	int degree[n + 1] = {0};
	for (int i = 0; i < e; i++)
	{
		int a, b; cin >> a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
		degree[a]++;
		degree[b]++;
	}
	queue<int> q;
	for (int i = 1; i <= n; i++)
	{
		if (degree[i] == 1)
			q.push(i);
	}
	if (q.empty())
	{
		cout << 0 << "\n";
		return 0;
	}
	int ans = 0;
	while (!q.empty())
	{
		queue<int> q2;
		while (!q.empty())
		{
			int front = q.front();
			q.pop();
			for (int i = 1; i <= n; i++)
			{
				if (graph[front][i] == 1)
				{
					degree[i]--;
					degree[front]--;
					// if (degree[i] == 1)
					q2.push(i);
					break;
				}
			}
		}
		ans++;
		int size = q2.size();
		cout << size << " " << q2.front() << "\n";
		for (int i = 0; i < size; i++)
		{
			q.push(q2.front());
			q2.pop();
		}
	}
	cout << ans << "\n";
}
