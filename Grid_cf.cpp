#include<bits/stdc++.h>
using namespace std;

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
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000007


void print(int **a , ll n)
{
	rep(i, n)
	{
		rep(j, n)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
int **createarray(ll n , ll k )
{
	int **arr = 0;
	loop(i, -1, n)
	{
		rep(j, n)
		{
			if (k != 0)
			{
				arr[j][j] = 1;
				k--;
			}
		}
	}
	return arr;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t)
	{
		ll n, k;
		cin >> n >> k;
		int **A = 0;
		print(A, n);
		// memset(A, 0, sizeof(A));
		A = createarray(n, k);
		print(A, n);


	}

}

