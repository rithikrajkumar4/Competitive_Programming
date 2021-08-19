#include<bits/stdc++.h>
using namespace std;

// #define pi 				M_PI
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
	string s;
	cin >> s;
	vector<string> v;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
	for (int i = 0; i < s.length(); i++)
	{
		string a = "";
		int k = i;
		while (isalpha(s[k]))
		{
			a += s[k];
			k++;
		}
		if (a != "")
			v.pb(a);
		i = k;
	}
	// cout << v.size() << "\n";
	ll tsum = 0;
	sort(all(v));
	for (int i = 0; i < v.size(); i++)
	{
		// cout << v[i] << "\n";
		ll sum = 0;
		for (int j = 0; j < v[i].size(); j++)
		{
			sum += a[v[i][j] - 'A'] ;
		}
		// cout << sum;
		tsum = tsum + (i + 1) * sum;

	}
	cout << tsum;
}
