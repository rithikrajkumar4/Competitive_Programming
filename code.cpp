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
#define inf 			INT_MAX-1
#define ninf			INT_MIN+1
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;



void solve()
{
	int a,b;cin>>a>>b;
	int d= floor(abs(a-b)/2);
	if((a+b)%2)
	{
		int ans=(a+b-2*d)+1;
		cout<<ans<<"\n";
		for(int i=d;i<=a+b-d;i++)
			cout<<i<<" ";
		cout<<"\n";
	}
	else
	{
		int ans=(a+b-2*d)/2+1;
		cout<<ans<<"\n";
		for(int i=d;i<=a+b-d;i+=2)
			cout<<i<<" ";
		cout<<"\n";

	}
}
int main()
{
	IOS;
	// read;
	w(t)
	solve();
}
