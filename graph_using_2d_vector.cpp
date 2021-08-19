#include<bits/stdc++.h>
using namespace std;

#define ll        		long long
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


void add_Edge(vector<vector<int>> &v , int u, int j)
{
	v[u][j] = 1;
	v[j][u] = 1;
	// cout << v[j][u] << " " << v[u][j] << "\n";
}
void print(vector<vector<int>> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << i << "->";
		for (int j = 0; j < v.size(); j++)
		{
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<vector<int>> v(5, vector<int> (5, 0));
	add_Edge(v, 0, 1);
	add_Edge(v, 0, 4);
	add_Edge(v, 1, 2);
	add_Edge(v, 1, 3);
	add_Edge(v, 1, 4);
	add_Edge(v, 2, 3);
	add_Edge(v, 3, 4);
	print(v);

}

