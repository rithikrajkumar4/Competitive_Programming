// RRRRRRRRRRRRkkkkk
#include<bits/stdc++.h>
using namespace std;

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
#define print(x)		cout<<x<<" "

template<typename T>

bool as_sec(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.second < b.second;
}

int find_set(int v,vi &dsu) {
    if (v == dsu[v])
        return v;
    return find_set(dsu[v],dsu);

}

void union_sets(int a, int b,vi &dsu) {
    a = find_set(a,dsu);
    b = find_set(b,dsu);

    if (a != b)
        dsu[a] = b;
}
const int maxn = 100010;

void solve() {
	int n,m;cin>>n>>m;
	vi dsu(n);
	f(i,0,n)dsu[i] = i;
	f(i,0,m){
		int a,b;cin>>a>>b;
		a--;b--;
		union_sets(a,b,dsu);		
	}
	// f(i,0,n)cout<<dsu[i]<<" ";
	// cout<<"\n";
	set<int> s;
	f(i,0,n){
		s.insert(dsu[i]);
	}
	if(s.size()==1)cout<<"YES";
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