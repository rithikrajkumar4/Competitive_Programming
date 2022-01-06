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
#define vpii			vector<pair<int,int>>
#define vpll			vector<pair<ll,ll>>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;


const int MAX = 1e5 + 5;
bool prime[MAX];
int spf[MAX];


void sieve()
{
	fill(prime, prime + MAX, true);
	for (int i = 1; i < MAX; i++)spf[i] = i;
	prime[0] = prime[1] = false;
	for (int i = 2; i * i < MAX; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j < MAX; j += i)
			{
				if (prime[j])spf[j] = i;
				prime[j] = false;
			}
		}
	}
}

// Multiple Query
vector<int> getFactorization( long long int x)
{
	vector<int> ret;
	while (x != 1)
	{
		ret.push_back(spf[x]);
		x = x / spf[x];
	}
	return ret;
}


int main()
{
	IOS;
	sieve();
	read;
	w(t)
	{
		ll n;
		cin >> n;
		ll num;
		map<int , int> l, f;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			vector<int> fact = getFactorization(num);
			for (auto x : fact)
			{
				if (f[x] == 0)f[x] = i;
				l[x] = i;
			}
		}
		vi cover(n + 1, 0);
		for (auto x : f)cover[x.second]++;
		for (auto x : l)cover[x.second]--;

		for (int i = 2; i <= n; i++)
		{
			cover[i] += cover[i - 1];
			if (cover[i] == 0)
			{
				cout << i << "\n";
				break;
			}
		}
	}
}
