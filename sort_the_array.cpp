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
	int n;
	cin >> n;
	vll v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	vll sorted(n), rev_sorted(n);
	sorted = v;
	sort(all(sorted));
	rev_sorted = sorted;
	reverse(all(rev_sorted));
	int k = -1 , h = -1;
	int count = 0;
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (v[i] != sorted[i] && v[i] != rev_sorted[i])
		{
			if (k == -1)
				k = i;
			else if (h == -1)
				h = i;
			count++;
			if (count > 2)
			{
				break;
				flag = 0;
			}

		}

	}
	if (flag)
	{
		cout << "yes" << "\n";
		if (h == -1 && k == -1)
			cout << 1 << " " << n;
		else
			cout << k + 1 << " " << h + 1;
	}
	else
		cout << "no";
}