#include<bits/stdc++.h>
using namespace std;

// #define pi 				M_PI
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

bool dp[100][100];
void subset_sum_part(int a[], int n, int sum)
{
	// intialization

	for (int i = 0; i <= n; i++)
		dp[0][i] = false;
	for (int i = 0; i <= sum; i++)
		dp[i][0] = true;


	// main choice top down

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= sum; j++)
		{
			if (a[i - 1] <= j)
			{
				dp[i][j] = dp[i - 1][j - a[i - 1]] | dp[i - 1][j];
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
}
int main()
{
	IOS;
	read;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)cin >> a[i];
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	// cout << sum;
	if (sum % 2 == 0)
	{
		subset_sum_part(a, sizeof(a) / sizeof(a[0]), sum / 2);
		if (dp[4][sum / 2])
			cout << "Possible";
		else
			cout << "Not Possible";

	}
	else
		cout << "Not Possible";

}
