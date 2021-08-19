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
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;



int main()
{
	IOS;
	read;
	w(t)
	{
		int n;
		cin >> n;
		vi c(n);
		for (int i = 0; i < n; i++)
			cin >> c[i];

		if (n == 1)
			cout << c[0] << "\n";
		else if (n == 2 )
			cout << max(c[0], c[1]) << "\n";
		else if (n == 3)
		{
			int maximum = max(max(c[0], c[1]), c[2]);
			int sum = c[0] + c[1] + c[2];
			if (sum - maximum <= maximum)
				cout << maximum << "\n";
			else if (sum - maximum > maximum)
				cout << sum - maximum << "\n";
		}
		else if (n == 4)
		{
			// cout << "fuck";
			int maximum = max(max(max(c[0], c[1]), c[2]), c[3]);
			int sum = c[0] + c[1] + c[2] + c[3];
			if (c[0] == c[1] && c[1] == c[2] && c[2] == c[3])
				cout << 2 * c[0] << "\n";
			else if (sum - maximum <= maximum)
				cout << maximum << "\n";
			else
			{
				sort(all(c));
				int c1 = c[1] + c[2];
				// cout << c1 << "\n";
				if (c[3] > c1)
				{
					cout << c1 + c[0] << "\n";
				}
				else if (c[3] <= c1)
				{
					cout << max(c[3] + c[0], c1) << "\n";
				}
			}
		}

	}
}
