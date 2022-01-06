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
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		int m = max(x, y);
		if (x == 0 || y == 0)
		{
			if (m == 0)
				cout << "YES" << "\n";
			else
				cout << "NO" << "\n";
		}

		else if ((x + y) % 3)
			cout << "NO" << "\n";
		else if (abs(x - y)  <= 1)
		{
			if ((x + y) / 2 <= m)
				cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
}

