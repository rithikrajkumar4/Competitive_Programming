#include<bits/stdc++.h>
using namespace std;

// #define pi 				M_PI
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

int main()
{
	IOS;
	read;
	w(t)
	{
		int n, m; cin >> n >> m;
		ll s_john = 0, s_jack = 0;
		int a[n], b[m], count = 0;;
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i]; s_john += a[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i]; s_jack += b[i];
		}
		// cout << s_john << " " << s_jack << "\n";
		sort(a, a + n); sort(b, b + m);
		reverse(b, b + m);
		// for (int i = 0; i < n; i++)
		// 	cout << a[i] << " ";
		// cout << "\n";
		// for (int i = 0; i < m; i++)
		// 	cout << b[i] << " ";
		// cout << "\n";
		if (s_jack < s_john)
		{
			cout << 0 << "\n";
			continue;
		}
		else
		{

			for (int i = 0; i < n; i++)
			{
				if (i > (m - 1))
					break;
				else if (a[i] < b[i])
				{
					s_jack = s_jack - b[i] + a[i];
					s_john = s_john - a[i] + b[i];
					count++;
				}
				if (s_john > s_jack)
				{
					flag = true;
					break;
				}
			}
		}
		if (flag)
			cout << count << "\n";
		else
			cout << -1 << "\n";


	}
}
