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
#define f(i,a,n)		for(int i=a;i<n;i++)
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

void multiply(int &len, int *a, int no)
{
	int carry = 0;
	for (int i = 0; i < len; i++)
	{
		int product  = a[i] * no + carry;
		a[i] = product % 10;
		carry = product / 10;
	}
	while (carry)
	{
		a[len] = carry % 10;
		carry /= 10;
		len++;
	}
	return;
}

void fact_big(int n)
{
	int *a = new int[1000];
	for (int i = 0; i < 1000; i++)
		a[i] = 0;
	a[0] = 1;
	int len = 1;
	for (int i = 2; i <= n; i++)
		multiply(len, a, i);
	cout << len << "\n";
	for (int i = len - 1; i >= 0; i--)
		cout << a[i];
}
int main()
{
	IOS;
	read;
	int n; cin >> n;
	fact_big(n);
}
