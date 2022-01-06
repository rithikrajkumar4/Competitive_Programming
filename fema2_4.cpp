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
	w(t)
	{
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int i = 0, j = 0, c = 0, ans = 0;
		while (i < n && j < n)
		{
			if (s[i] == 'M')
			{
				if (s[j] == 'I')
				{
					for (int g = min(i, j); g < max(i, j); g++)
					{
						if (s[g] == ':')
							c++;
						if (c >= k)
						{
							break;
						}

					}
					int p = k + 1 - abs(i - j) - c;
					// cout << p << " ";
					if (p > 0)
						ans++;
					i++;
					c = 0;
				}
				else if (s[j] == 'X')
				{
					if (i < j)
						i = j + 1;
					else
						i++;
				}
				j++;
			}
			else if (s[i] == 'X')
			{
				i++;
				j = i;
			}
			else
				i++;
		}
		cout << ans << "\n";
	}
}
