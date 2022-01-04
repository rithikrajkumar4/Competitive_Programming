// RRRRRRRRRRRRkkkkk
#include<bits/stdc++.h>
using namespace std;

#define pi 			M_PI
#define eb(x)			emplace_back(x)
#define mem(a,b) 		memset(a,b,sizeof(a))
#define ll        		long long
#define pb(a)         		push_back(a)
#define mk(a,b)			make_pair(a,b)
#define all(x)	  		x.begin(),x.end()
#define rall(x)			x.rbegin(),x.rend()	
#define fi 			first
#define	se			second
#define f(i,a,n)		for(int i=a;i<n;i++)
#define loop(i,a,b) 		for(auto i=a;i!=b;i++)
#define b_loop(i,a,b)		for(ll i=b;i>=a;i--)
#define rep(i,n)     		for(ll i=0;i<n;i++)
#define vll       		vector<ll>
#define vi			vector<int>
#define vs 			std::vector<string>
#define vvi			vector<vi>
#define vvll 			vector<vector<ll>>
#define sll		  	set<ll>
#define pii			pair<ll,ll>
#define vpii			vector<pair<int,int>>
#define vpll			vector<pair<ll,ll>>
#define get_str(s)   		getline(cin,s)
#define w(t)            	int t; cin>>t; while(t--)
#define sp(x,y)         	fixed<<setprecision(y)<<x
#define mod 			1000000007
#define inf 			INT_MAX-1
#define ninf			INT_MIN+1
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define print(x)		cout<<x<<" "

const int maxn = 100010;
void solve() 
{
	string s,t;
	cin>>s>>t;
	sort(all(s));
	vi cnt(26,0);
	for(int i=0;i<s.length();i++)cnt[s[i]-'a']++;
		// for(int i=0;i<26;i++)cout<<cnt[i]<<" ";
		// 	cout<<"\n";
	if(t!="abc"||!cnt[0]||!cnt[1]||!cnt[2])cout<<s<<"\n";
	else{
		while(cnt[0]--)cout<<"a";
		while(cnt[2]--)cout<<"c";
		while(cnt[1]--)cout<<"b";
		for(int i=3;i<26;i++){
			while(cnt[i]--)cout<<char('a'+i);
		}
		cout<<"\n";
	}
}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	w(t)solve();
}