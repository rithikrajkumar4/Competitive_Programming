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


void add_Edge(vector<int> v[] , int i , int j)
{
	v[i].pb(j);
	v[j].pb(i);
}
void print(vector<int> v[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i;
		for (auto x : v[i])
		{
			cout << "->" << x ;
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
	int n = 5;
	std::vector<int> v[n];
	add_Edge(v, 0, 1);
	add_Edge(v, 0, 4);
	add_Edge(v, 1, 2);
	add_Edge(v, 1, 3);
	add_Edge(v, 1, 4);
	add_Edge(v, 2, 3);
	add_Edge(v, 3, 4);
	print(v, n);

}

