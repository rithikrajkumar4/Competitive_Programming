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
	ll n, k;
	cin >> n >> k;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int a[k + 1] = {0};
		int flag = 1;
		ll w;
		cin >> w;
		while (w > 0)
		{
			int r = w % 10;
			if (r <= k)
				a[r] = 1;
			else
			{
				if (!(k == 0 && (w / 10 == 0 && w == 1)))
				{
					flag = 0;
					break;
				}
			}
			w /= 10;
		}
		if (flag == 1)
		{
			for (int i = 0; i < n; i++)
			{
				if (a[i] == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
				ans++;
		}

	}
	cout << ans;
}
