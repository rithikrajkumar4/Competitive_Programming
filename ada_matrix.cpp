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

void print(int n, vvi a)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}
int check(int n, vvi a)
{
	int r = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 ; j < n; j++)
		{
			if (a[i][j] == ((i * n) + (j + 1)) && r == 0 )
			{
				r = 0;
				continue ;
			}
			else if ( a[j][i] == ((i * n) + (j + 1)))
			{
				r = 1;
				continue;
			}
			else
			{
				r = 2;
				return r;

			}

		}
	}
	return r;
}
int check_2(int n , vvi a)
{
	int c = 0, trend = -1 ;
	for (int i = n - 1; i > 0; i--)
	{
		if (a[i][i] - a[i][i - 1] == 1)
		{
			if (trend == -1 || trend == 0)
			{
				trend = 0;
				c++;
			}
			else
				break;
		}
		else if (a[i][i] - a[i - 1][i] == 1)
		{
			if (trend == -1 || trend == 1)
			{
				c++;
				trend = 1;
			}
			else
				break;
		}
	}
	return c;
}
vvi transpose(int n , vvi a)
{
	int k = 0;
	for (int i = 0; i < n - 1; i++)
	{

		for (int j = 1 + k ; j < n; j++)
		{
			if (i == j)
				continue;
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
		k++;
	}

	return a;
}
int main()
{
	IOS;
	read;

	w(t)
	{
		int n;
		cin >> n;
		vvi a(n, vi(n));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		int c = check_2(n, a), ans = 0;
		if (c == n - 1)
		{
			cout << check(n, a) << "\n";
			break;
		}
		else
		{
			a = transpose(n - c, a);
			ans++;
			cout << ans + check(n, a) << "\n";
			break;

		}


	}

}

