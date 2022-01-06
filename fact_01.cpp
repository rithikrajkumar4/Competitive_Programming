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
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
const int maxn = 100010;

void print(vector<char> v)
{
	int j;
	if (v[0] == '0')
		j = 1;
	else
		j = 0;
	for (int i = j; i <= 1000; i++)
	{
		if (v[i] == 's')
			break;
		cout << v[i];
	}
}
vector<char> multiply(vector<char> v, int k)
{
	int j;
	for (int i = 2; i <= v.size(); i++)
	{
		if (v[i] == 's')
		{
			j = i - 1;
			break;
		}
	}
	cout << j << "\n";
	for (int i = j; i >= 1; i--)
	{
		int m = (v[i] - '0') * k;
		v[i] = '0' + m % 10;
		m = m / 10;
		if (m > 0)
			v[i - 1] = ('0' + (v[i - 1] - '0') + m);
	}
	print(v);
	return v;
}
int main()
{
	IOS;
	read;
	int n;
	cin >> n;
	vector<char> v(1000, 's');
	v[0] = '0';
	v[1] = '1';
	// cout << v[3];
	for (int i = 2; i <= n; i++)
	{
		multiply(v, i);
		cout << "\n";
	}


}
