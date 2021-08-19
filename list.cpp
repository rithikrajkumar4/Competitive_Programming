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



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n ;
	cin >> n;
	unordered_map<int, vector<int>> m;
	int a[3] = { -1};
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;
		m[x].pb(i);
	}
	int count = INT_MAX;
	int check = 0;
	for (auto it : m)
	{
		check++;
		// cout << check << "\n";
		count = min(count, (int)(it.se.size()));
	}
	if (check < 3)
	{
		cout << 0;
		return 0;
	}
	cout << count << "\n";
	for (int i = 0; i < count; i++)
	{
		for (auto it : m)
		{
			cout << it.se[i] + 1 << " ";
		}
		cout << "\n";
	}
	return 0;

}

