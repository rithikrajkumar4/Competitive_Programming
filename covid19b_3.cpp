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



int main()
{
	IOS;
	read;
	w(t)
	{
		int n;
		cin >> n;
		vi speed(n), pos(n);
		for (int i = 0; i < n; i++)
		{
			cin >> speed[i];
			pos[i] = i;
			// cout << speed[i] << " " << pos[i] << "\n";
		}
		vi left(n), v(n);
		vector <float> positive(n);
		int mx = 0, mn = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			// cout << i + 1 << " st athelete effects->";
			int ans = 0;
			for (int j = 0 ; j < n; j++)
			{
				if (i == j)
				{
					ans++;
					positive[j] = 0;
					left[j] = 1;
					continue;
				}
				else if (pos[i] > pos[j] && speed[i] < speed[j] || pos[i] < pos[j] && speed[i] > speed[j])
				{
					float time = abs(pos[i] - pos[j]) / abs(speed[i] - speed[j]);
					positive[j] = time;
					left[j] = -1;
					// cout << "AT time:" << time << " =";
					// cout << j + 1;
					ans++;
				}
				else
				{
					left[j] = j + 1;
				}
				// cout << "\n";
			}
			// cout << "\n";
			for (int j = 0; j < n; j++)
			{
				cout << left[j] << " ";
			}
			cout << "\n";

		}

	}
}
