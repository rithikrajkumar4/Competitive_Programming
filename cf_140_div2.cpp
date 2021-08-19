#include<bits/stdc++.h>
using namespace std;


#define pi 				M_PI
#define mem(a,b) 		memset(a,b,sizeof(a))
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
#define vi				vector<int>
#define vs 				std::vector<string>
#define vvi				vector<vii>
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);



int main()
{
	IOS;
	// read;
	ll n;
	cin >> n;
	vector<int> v(n + 1);
	vector<int> pos(n + 1, 0);
	// vector<int> check(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		// cout << v[i] << " ";
		pos[v[i]] = i;
	}
	// for (int i = 0; i <= n; i++)
	// 	cout << pos[i] << " ";

	ll m ;
	cin >> m;
	ll vasya = 0, petya = 0;
	for (int i = 1; i <= m; i++)
	{
		ll x;
		cin >> x;
		vasya += pos[x];
		petya += n - pos[x] + 1;
	}
	cout << vasya << " " << petya;

}

