// RRRRRRRRRRRRkkkkk
#include<bits/stdc++.h>
using namespace std;

#define print(x)	cout<<x<<" "
#define pi 				M_PI
#define eb(x)			emplace_back(x)
#define mem(a,b) 		memset(a,b,sizeof(a))
#define ll        		long long
#define pb(a)         	push_back(a)
#define mk(a,b)			make_pair(a,b)
#define all(x)	  		x.begin(),x.end()
#define rall(x)			x.rbegin(),x.rend()
#define fi 				first
#define	se				second
#define f(i,a,n)		for(int i=a;i<n;i++)
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

bool as_sec(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.second < b.second;
}

const int maxn = 100010;
void solve() {
	string s;cin>>s;
	int a_ct = 0,b_ct=0;
	bool found_ab = 0,found_ba = 0;
	int ab_x=-1,ab_y=-1,ba_x=-1,ba_y=-1;
	int n= s.length();
	for(int i=0;i<n;i+=2)
	{
		if(s[i] =='A')
		{
			a_ct++;
			if(i+1!=n)
			{
				if(s[i+1] == 'B')
				{
					found_ab = 1;
					if(ba_x == i+1 || ba_y == i)
						found_ba = 0;
					else{
					ab_x = i;
					ab_y = i+1;
					}
				}
				else
					i--;
			}
		}
		else if(s[i] =='B')
		{
			b_ct++;
			if(i+1!=n)
			{
				if(s[i+1] == 'A')
				{
					found_ba = 1;
					if(ab_x == i+1 || ab_y == i)
						found_ab = 0;
					else{
					ba_x = i;
					ba_y = i+1;
					}
				}
				else
					i--;
			}
		}
	}	
	print(found_ba)<<found_ab<<" "<<a_ct<<" "<<b_ct<<"\n";
	if(found_ba && found_ab && a_ct>=2 &&b_ct>=2)
		cout<<"YES";
	else
		cout<<"NO";
}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	solve();


}