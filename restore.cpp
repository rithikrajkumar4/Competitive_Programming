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
const ll maxn = (10e5 + 5);

vector<ll> sieveOfEratosthenes(ll n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	vector<ll> prime_no;
	for (ll i = 2; i * i <= n; i++)
	{
		if (prime[i])
		{
			for (ll j = i * i; j <= n; j += i)
				prime[j] = false;

		}
	}
	// ll count = 0;
	for (ll i = 2; i <= n; i++)
	{
		if (prime[i])
		{
			// count++;
			prime_no.push_back(i);
		}
	}
	// cout << count << "\n";
	return prime_no;

}

int main()
{
	IOS;
	read;
	vll prime_no = sieveOfEratosthenes(2000000);
	int count = 0;
	for (auto it : prime_no)
		count++;
	// cout << count << "\n";
	w(t)
	{
		int n;
		cin >> n;
		vi b(n), a(n);
		bool isequal = true;
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		for (int i = 1; i < n; i++)
		{
			if (b[i - 1] != b[i])
			{
				isequal = false;
				break;
			}
		}

		if (n > count)
		{
			if (isequal)
			{
				for (int i = 0; i < n; i++)
					a[i] = 5;
			}
			else
			{

				int temp = n, till = 0, k = 1, left = count, index = n - 1;
				while (temp > 0)
				{
					for (till; till < left; till++)
						a[index--] = k * prime_no[till % count];
					temp -= count;
					if (temp > count)
						left += till;
					else
						left = till + (temp);
					k++;
				}
				for (int i = 0; i < n; i++)
				{
					if (b[i] - 1 > i)
					{
						int m = max(a[b[i] - 1], a[i]);
						a[b[i] - 1]  = a[i] = m;
					}
				}
			}

		}
		else
		{
			if (isequal)
			{
				for (int i = 0; i < n; i++)
					a[i] = 3;
			}
			else
			{
				for (int i = 0; i < n; i++)
					a[i] = prime_no[i];

				for (int i = 0; i < n; i++)
				{
					if (b[i] - 1 > i)
					{
						int m = max(a[b[i] - 1], a[i]);
						a[b[i] - 1]  = a[i] = m;
					}
				}
			}

		}
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << "\n";
	}
}
