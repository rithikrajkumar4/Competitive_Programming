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

bool is_prime(ll p){
	for (ll i = 0; i*i < p; ++i)
	{
		if(p%i==0)return false;
	}
	return true;
}
int main(){
	IOS;
	ll last_prime = 31;
	for(ll i=33;i<100;i++){
		if(!is_prime(i)){

			ll ok = i - last_prime;
			if(ok%2){
				cout<<i<<"\n";
				break;
			}
			else if(floor(sqrt(ok/2)) != ceil(sqrt(ok/2))){
				cout<<i<<"\n";break;
			}
			cout<<"ok";
		}
		else{
			last_prime = i;
		}
	}
	return 0;
}