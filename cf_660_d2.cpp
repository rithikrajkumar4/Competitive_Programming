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


// void cf_a()
// {
// 	w(t)
// 	{
// 		int n;
// 		cin >> n;
// 		if (n <= 30) {
// 			cout << "NO" << "\n";
// 			continue;
// 		}
// 		cout << "YES" << "\n";
// 		if ((n - 30) == 6 || (n - 30) == 10 || (n - 30) == 14) {
// 			cout << "6 10 15 " << n - 31 << "\n";
// 			continue;
// 		}
// 		cout << "6 10 14 " << n - 30 << "\n";
// 	}
// }


void cf_b()
{
	w(t)
	{
		int n;
		cin >> n;
		for (int i = 0; i < (n - 1); i++)
			cout << "9";
		cout << "8" << "\n";
	}
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
	cf_b();

}

