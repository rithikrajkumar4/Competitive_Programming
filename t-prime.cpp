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
const int maxn = 1000001;

bool as_sec(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.second < b.second;
}
bool a[maxn];
void sieve_of_erast()
{
	a[0] = a[1] = false;
	for (int i = 2; i < maxn; i++)
	{
		if (a[i] == 1)
		{
			for (int j = 2 * i; j < maxn; j += i)
			{
				a[j] = 0;
			}
		}
	}
}
void solve() {
	ll n; cin >> n;
	double x = sqrt(n);
	// cout<< x;
	if (x == (int)x)
	{

		if (a[(int)x])
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	else
		cout << "NO\n";

}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	mem(a, true);
	sieve_of_erast();
	w(t)
	{solve();}


}
