#include <bits/stdc++.h>
using namespace std;

#define pi 				M_PI
#define eb(x)			emplace_back(x)
#define mem(a,b) 		memset(a,b,sizeof(a))
#define ll        		long long
#define pb(a)         		push_back(a)
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
#define print(x)		cout<<x<<" "

// int kmp_at(string a,string virus){
// 	int n_a = a.length(),n_virus = virus.length();
// 	for(int i=0;i<n;i++){
// 		if()
// 	}
// 	return 1;
// }
string lcs(string a,string b){
	int n_a=a.length(),n_b= b.length();
	int dp[n_a+1][n_b+1];
	mem(dp,0);
	string ans="";
	for(int i=1;i<=n_a;i++){
		for(int j=1;j<=n_b;j++){
			if(a[i] == b[j])
				dp[i][j]= dp[i-1][j-1]+1;
			else
				dp[i][j]= max(dp[i-1][j] , dp[i][j-1]);
			
		}
	}
	for(int i=0;i<n_a;i++){
		for(int j=0;j<n_b;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	return "a";
}
void solve(){
	string a,b,virus;cin>>a>>b>>virus;
	// int x = kmp_at(a,virus);
	string c = lcs(a,b);
}
int main(){
	IOS;
	solve();
	return 0;
}