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

// ll ncr(ll n, ll r){
// 	r = min(r,n-r);
// 	ll ans = 1,t=r;
// 	for(int i=0;i<r;i++){
// 		ans *=(n-i);
// 		ans /= t;
// 		t--;
// 	}
// 	return ans;
// }
bool as_sec(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.second < b.second;
}
set<vector<int>> s;
const int maxn = 100010;
// ll ans(vvll &a,int n){
// 	for(int i=0;i<2*n-1;i++){
// 		for(int)
// 	}
// }
ll solve() 
{
	int n;cin>>n;
	// cout<<n<<" ";
	int r = 2*n-1,c=n;
	// cout<<r<<" "<<c<<"\n";
	vvll ar(r,vll(c,0)),mxbanana(r,vll(c,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cin>>ar[i][j];
		}
	}
	int k=1;
	for(int i=n;i<r;i++){
		for(int j=k;j<c;j++){
			cin>>ar[i][j];
		}
		k++;
	}

	mxbanana[0][0] = ar[0][0];

	for(int i=1;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j == 0)
			mxbanana[i][j]= mxbanana[i-1][j]+ar[i][j];
			else
			 mxbanana[i][j] = max(mxbanana[i-1][j]+ar[i][j],mxbanana[i-1][j-1]+ar[i][j]); 
		}
	}
	k=1;
	for(int i=n;i<r;i++){
		for(int j=k;j<c;j++){
        mxbanana[i][j] = max(mxbanana[i - 1][j], mxbanana[i - 1][j - 1]) + ar[i][j];

		}
		k++;
	}
	// for(int i=0;i<r;i++){
	// 	for(int j=0;j<c;j++){	
	// 		cout<<mxbanana[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	// cout<<"\n";
	return mxbanana[r-1][c-1];
}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	int t;cin>>t;
	for(int i=1;i<=t;i++)
		cout<<"Case "<<i<<": "<<solve()<<"\n";
}