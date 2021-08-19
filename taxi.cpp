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
const int maxn = 100010;

int main()
{
	IOS;
	read;
	int n; cin >> n;
	unordered_map<int, int> hm;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		hm[x]++;
	}

	for (auto it : hm)
		cout << it << " ";
	int ans = hm[4];
	int mn = min(hm[3], hm[1]);
	hm[3] -= mn;
	hm[1] -= mn;
	ans += mn;
	if (hm[3] > 0)
		ans += hm[3];
	ans += (hm[2] / 2);
	hm[2] %= 2;
	if (hm[2] > 0 || hm[1] > 0)
	{
		mn = min(hm[2], (int)hm[1] / 2);
		ans += mn;
		hm[2] -= mn;
		hm[1] -= mn;
		if (hm[1] > 0)
		{
			mn = min(hm[1], hm[2]);
			ans += mn;
			hm[1] -= mn;
			hm[2] -= mn;
		}
	}
	else
		ans += hm[2];

	ans += ceil((float)hm[1] / 4);
	cout << ans;
}

