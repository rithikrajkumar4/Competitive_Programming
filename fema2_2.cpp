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
		int ans = 0;
		bool visited[n];
		mem(visited, false);
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'M' && visited[i] == false)
			{
				int p = i + 1, count = 0, last = -1;
				bool once = true;
				while (s[p] != 'X' && p < n)
				{
					if (s[p] == 'I' && visited[p] == false)
					{
						int power = k + 1 - abs(p - i) - count;
						if (power > 0)
						{
							ans++;
							visited[p] = true;
							visited[i] = true;
						}
						i = (last >= 0 ? last : ++p);
						break;
					}
					else if (s[p] == 'M' && once)
					{
						once = false;
						last = p;
					}
					else if (s[p] == ':')
						count++;
					p++;
				}
			}
			else if (s[i] == 'I' && visited[i] == false)
			{
				int p = i + 1, count = 0, last = -1;
				bool once = true;
				while (s[p] != 'X' && p < n)
				{
					if (s[p] == 'M' && visited[p] == false)
					{
						int power = k + 1 - abs(p - i) - count;
						if (power > 0)
						{
							ans++;
							visited[p] = true;
							visited[i] = true;
						}
						i = (last >= 0 ? last : ++p);
						break;
					}
					else if (s[p] == 'I' && once)
					{
						once = false;
						last = p;
					}
					else if (s[p] == ':')
						count++;
					p++;
				}
			}
		}
		cout << ans << "\n";
	}
}
