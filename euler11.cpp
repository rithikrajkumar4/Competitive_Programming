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
int a[20][20];

ll dlu(int i , int j)
{
	if (i - 3 >= 0 && j - 3 >= 0)
	{
		return a[i][j] * a[i - 1][j - 1] * a[i - 2][j - 2] * a[i - 3][j - 3];
	}
	else
		return -1;
}
ll dru(int i, int j)
{
	if (i + 3 <= 19 && j + 3 <= 19)
		return a[i][j] * a[i + 1][j + 1] * a[i + 2][j + 2] * a[i + 3][j + 3];
	else
		return -1;
}
ll dld(int i, int j)
{
	if (i + 3 <= 19 && j - 3 >= 0)
		return a[i][j] * a[i + 1][j - 1] * a[i + 2][j - 2] * a[i + 3][j - 3];
	else
		return -1;
}
ll drd(int i, int j)
{
	if (i - 3 >= 0 && j + 3 <= 19)
		return a[i][j] * a[i - 1][j + 1] * a[i - 2][j + 2] * a[i - 3][j + 3];
	else
		return -1;
}
ll u(int i, int j)
{
	if (i - 3 >= 0)
		return a[i][j] * a[i - 1][j] * a[i - 2][j] * a[i - 3][j];
	else
		return -1;
}
ll d(int i, int j)
{
	if (i + 3 <= 19)
		return a[i][j] * a[i + 1][j] * a[i + 2][j] * a[i + 3][j];
	else
		return -1;
}
ll r(int i, int j)
{
	if (j - 3 >= 0)
		return a[i][j] * a[i][j - 1] * a[i][j - 2] * a[i][j - 3];
	else
		return -1;
}
ll l(int i, int j)
{
	if (j + 3 <= 19)
		return a[i][j] * a[i][j + 1] * a[i][j + 2] * a[i][j + 3];
	else
		return -1;
}
int main()
{
	IOS;
	read;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
			cin >> a[i][j];
	}
	ll mx = 0, m = 1;
//dlu,dru,dld,drd,u,d,l,r

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			ll m1 = max(dlu(i, j), dru(i, j));
			ll m2 = max(dld(i, j), dld(i, j));
			ll m3 = max(u(i, j), d(i, j));
			ll m4 = max(l(i, j), r(i, j));
			mx = max(mx, max(m1, max(m2, max(m3, m4))));
		}
	}
	cout << mx;
}
