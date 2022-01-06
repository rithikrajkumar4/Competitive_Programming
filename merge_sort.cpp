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

vi merge_two(vi v1, vi v2, int n, int m )
{
	vi ans;

	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (v1[i] > v2[j])
		{
			ans.pb(v2[j]);
			j++;
		}
		else if (v1[i] < v2[j])
		{
			ans.pb(v1[i]); i++;
		}
		else if (v1[i] == v2[j])
		{
			ans.pb(v1[i]); ans.pb(v2[j]);
			i++; j++;
		}
	}
	if (i < n)
	{

		for (int k = i; k < n; k++)
			ans.pb(v1[k]);
	}
	else if (j < m)
	{
		for (int k = j; k < m; k++)
			ans.pb(v2[k]);
	}
	return ans;
}

int main()
{
	IOS;
	read;
	vi v1 = {1, 2, 3, 4};
	vi v2 = {5, 6, 7, 8};
	vi ok = merge_two(v1, v2, 4, 4);

	for (int i = 0; i < ok.size(); i++)
		cout << ok[i] << " ";


}
