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
#define inf 			INT_MAX-1
#define ninf			INT_MIN+1
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;

void reverse_ok(vll &v, int i, int j)
{
	for (i; i < j; i++)
	{
		int temp = v[i];
		v[i] = v[j];
		v[j] = temp;
		j--;
	}
}

int main()
{
	IOS;
	// read;
	int n; cin >> n;
	vll v(n); rep(i, n) {cin >> v[i];}
	vll sorted(n), rev_sorted(n);
	sorted = v;
	sort(all(sorted));
	rev_sorted = sorted;
	reverse(all(rev_sorted));
	if (sorted == v)
		cout << "yes\n1 1";
	else if (rev_sorted == v)
		cout << "yes \n1 " << n;
	else
	{
		int i = 0 , j = n - 1;
		for (i; i < n; i++)
		{
			if (sorted[i] != v[i])
				break;
		}
		for (j; j >= 0; j--)
		{
			if (sorted[j] != v[j])
				break;
		}
		// cout << i << " " << j << "\n";
		bool ok = true;
		if (sorted[i] == v[j])
			reverse_ok(v, i, j);
		// for (int h = 0; h < n; h++)
		// 	cout << v[h] << " ";
		// cout << "\n";
		for (int k = i; k < n; k++)
		{
			if (v[k] != sorted[k])
			{
				ok = false;
				break;
			}
		}
		if (ok)
			cout << "yes\n" << i + 1 << " " << j + 1 << "\n";
		else
			cout << "no\n";
	}
}
