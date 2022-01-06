#include<bits/stdc++.h>
#include<string.h>
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

// int32_t main()
// {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// 	cout.tie(0);
// #ifndef ONLINE_JUGDE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// 	int n, t, k, d;
// 	cin >> n >> t >> k >> d;
// 	int maxi = d / t + 1;
// 	int total = maxi * k;
// 	// cout<<total;
// 	if (total < n) cout << "YES";
// 	else cout << "NO";
// 	return 0;
// }

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	float n, d, k, t;
	cin >> n >> t >> k >> d;
	float one_cake = (t * n ) / k, two_cake;
	cout << one_cake << "\n";
	two_cake = (d / t) * k + (n / 2) * (t / k);

	cout << two_cake << "\n";
	if (two_cake >= one_cake)
		cout << "NO";
	else
		cout << "YES";

}

