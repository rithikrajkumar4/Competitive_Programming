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
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
const int maxn = 100010;

int find_min(int n, vvi v)
{
	int mn = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		int s = 0;
		for (int j = 0; j < n; j++)
		{
			s += v[i][j];
		}
		mn = min(mn, s);
	}
	return mn;
}
int find_max(int n, vvi v)
{
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		int s = 0;
		for (int j = 0; j < n; j++)
		{
			s += v[i][j];
		}
		mx = max(mx, s);
	}
	return mx;
}
void print(int n, vvi v)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << v[i][j] << " ";
		cout << "\n";
	}
}
// vvi customize(int n, vvi v)
// {
// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int )
// 		}
// }
int main()
{
	IOS;
	read;
	w(t)
	{
		int n;
		cin >> n;
		vi speed(n), pos(n);
		for (int i = 0; i < n; i++)
		{
			cin >> speed[i];
			pos[i] = i + 1 + speed[i];
			// cout << pos[i] << " ";
		}
		// cout << "\n";
		vvi v(n, vi(n, 0));

		for (int i = 0; i < n; i++)
			v[i][i] = 1;
		int k = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 1 + k; j < n; j++)
			{
				if (pos[i] == pos[j])
				{
					v[i][j] = 1;
					v[j][i] = 1;
				}
				else if (speed[i] == speed[j])
				{
					v[i][j] = 0;
					v[j][i] = 0;
				}
				else if ((pos[i] > pos[j] && speed[i] < speed[j]) || (pos[j] > pos[i] && speed[j] < speed[i]))
				{
					v[i][j] = 1;
					v[j][i] = 1;
				}
			}
			k++;
		}
		print(n, v);
		// v = customize(n, v);
		int best = find_min(n, v);
		int worst = find_max(n, v);
		cout << best << " " << worst << "\n\n";
	}
}

