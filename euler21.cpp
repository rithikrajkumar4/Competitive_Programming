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


vi divisors(int n)
{
	vi a;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (n / i == i || i == 1)
				a.pb(i);
			else
			{
				a.pb(i);
				a.pb(n / i);
			}
		}
	}
	return a;
}
bool isam(vi a[10001], int n)
{
	int sum = 0;
	for (auto it : a[n])
		sum += it;
	int sum2 = 0;
	for (auto it : a[sum])
		sum2 += it;
	if (sum2 == n && sum != n)
		return true;
	else
		return false;
}
int main()
{
	IOS;
	read;
	ll sum = 0;
	vi v[100001];
	for (int i = 1; i <= 100000; i++)
	{
		vi a = divisors(i);
		v[i] = a;
	}
	// for (auto it : v[10000])
	// 	sum += it;
	for (int i = 2; i <= 10000; i++)
	{
		if (isam(v, i))
		{
			cout << i << " ";
			sum += i;
		}
	}
	cout << sum;
}
