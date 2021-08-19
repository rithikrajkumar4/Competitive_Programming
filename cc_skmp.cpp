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
	int n;
	cin >> n;
	unordered_map<int , int> m;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		m[x]++;
	}
	int k;
	cin >> k;
	while (k--)
	{
		char ch;
		int x;
		cin >> ch >> x;
		if (ch == '+')
			m[x]++;
		else
			m[x]--;
		int rec = 0, sq = 0;
		for (auto it : m)
		{
			// cout << it.second << " ";
			if (it.se > 3)
			{
				ll sec = it.se;
				sq += sec / 4;
				sec = sec % 4;
				rec += sec / 2;
			}
			else if (it.se > 1 )
			{
				++rec;
			}

		}
		// cout << "\n";
		if ((sq >= 1 && rec > 1) || sq >= 2)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}

