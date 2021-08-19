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


bool tell_me(string s)
{
	int index = s[0] - 'a', t = 0;
	for (int i = 1; i < s.length(); i++)
	{
		int ind = s[i] - 'a';
		if (ind == index)
		{
			continue;
			t = 0;
		}
		else if (ind < index && t == 0 )
		{
			return true;
		}
		t++;
		if (t == 1)
			break;
	}
	return false;
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
	w(t)
	{
		string s, p;
		cin >> s >> p;
		int a[26] = {0};
		string b = "abcdefghijklmnopqrstuvwxyz";
		for (auto ch : s)
		{
			int idx = ch - 'a';
			a[idx] += 1;
		}
		for (auto ch : p)
		{
			int idx = ch - 'a';
			a[idx] -= 1;
		}
		// for (auto i : a)
		// 	cout << i << " ";
		string n = "";
		// int index = p[0] - 'a';
		for (int i = 0; i < 26; i++)
		{
			for (int j = 1; j <= a[i]; j++)
			{
				n += b[i];
			}
		}
		// cout << n << "\n";
		int low = -1, upp = -1;
		for (int i = 0, j = n.length() - 1; i < n.length(); i++, j--)
		{
			if (n[i] == p[0] && low < 0)
			{
				low = i;
			}
			if (n[j] == p[0] && upp < 0)
			{
				upp = j;
			}
		}
		// cout << low << " " << upp << "\n";

		string ans = "";
		if (low > -1 && upp > -1)
		{
			if (tell_me(p))
				ans = n.substr(0, low) + p + n.substr(low);
			else
				ans = n.substr(0, upp + 1) + p + n.substr(upp + 1);
		}
		else
		{
			int t = 0;
			for (int i = 0; i < n.length(); i++)
			{
				int idx = n[i] - 'a';
				int index = p[0] - 'a';
				if (idx < index)
					ans += n[i];
				else if (t == 0)
				{
					ans += p + n[i];
					t = 1;
				}
				else
				{
					ans += n.substr(i);
					break;
				}
			}
			if (t == 0)
				ans = n + p;
		}
		// if (ans.length() == s.length())
		// 	cout << "YES" << "\n";
		cout << ans << "\n";
	}

}

