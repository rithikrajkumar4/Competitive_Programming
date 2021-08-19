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
const ll mx = 1e6 + 5;


vll prime_no;
void sieve(int n)
{
	bool prime[mx];
	memset(prime, 1, sizeof(prime));

	prime[0] = prime[1] = false;
	for (int i = 2; i < mx; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j < mx; j += i)
				prime[j] = false;
		}
	}
	vll temp(n, 0);
	int k = 0;
	for (int i = 0; i < mx; i++)
	{
		if (k < 1000 && prime[i])
		{
			temp[k++] = i;
		}
	}
	prime_no = temp;
}

int main()
{
	IOS;
	read;
	int n;
	cin >> n;
	sieve(n);
	for (int i = 0; i < n; i++)
	{
		cout << prime_no[i] << "\n";
	}

}
