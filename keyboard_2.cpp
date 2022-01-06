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
const int maxn = 100010;
bool it_is_in_all(string all , char a)
{
	for (int i = 0; i < all.length(); i++)
	{
		if (all[i] == a || ((char)toupper(all[i])) == a)
			return true;
	}
	return false;
}
int main()
{
	IOS;
	// read;
	int n, m, x;
	cin >> n >> m >> x;
	char key[n][m];
	// cout << n << m << x;
	bool is_shift_present = false;
	string lowers = "", uppers = "", all = "";
	vpii upper_at, shift_at;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> key[i][j];
			if (key[i][j] == 'S')
			{
				is_shift_present = true;
				shift_at.pb(mk(i, j));
				// cout << i << " " << j;
			}
			else
				all += key[i][j];
		}
	}
	int q; cin >> q;
	string s; cin >> s;
	// cout << s << "\n";
	// for (auto it : shift_at)
	// {
	// 	cout << it.fi << " " << it.se << "\n";
	// }
	for (int i = 0; i < q; i++)
	{
		if (islower(s[i]))
			lowers += s[i];
		else
		{
			uppers += s[i];
		}
	}
	// cout << lowers << "\n" << uppers;
	// check lower is present or not
	bool flag = true;
	int ans = 0;
	for (int i = 0; i < lowers.length(); i++)
	{
		if (it_is_in_all(all, lowers[i]))
		{
			// cout << "ok\n";

			continue;
		}
		else
		{
			flag = false;
			ans = -1;
			break;
		}
	}
	// check upper letter by 2 ways :
	// 1. if shift present or not
	// 2. if(euclidian length between them is in x)
	// cout << is_shift_present << "\n";
	if (flag)
	{
		if (is_shift_present && uppers.length() >= 1)
		{
			for (int k = 0; k < uppers.length(); k++)
			{
				// cout << "okok\n";
				if (it_is_in_all(all, uppers[k]))
				{
					// cout << "ok\n";
					int r = -1, c = -1;
					bool get_out = false;
					rep(i, n)
					{
						rep(j, m)
						{
							if (((char)toupper(key[i][j])) == uppers[k])
							{
								r = i; c = j;
								get_out = true;
								break;
							}

						}
						if (get_out)
							break;
					}
					// cout << r << " " << c << "\n";
					bool its_possible  = false;
					for (auto it : shift_at)
					{
						int y = ceil(sqrt((it.fi - r) * (it.fi - r) + (it.se - c) * (it.se - c)));
						if (y <= x)
						{
							its_possible = true;
							break;
						}
					}
					if (!its_possible)
						ans++;
				}
				else
				{
					flag = false;
					ans = -1;
					break;
				}
			}
		}
		else if (uppers.length() == 0)
			ans = 0;
		else
			ans = -1;
	}

	cout << ans;

}
