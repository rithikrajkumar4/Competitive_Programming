#include<bits/stdc++.h>
using namespace std;

#define w(t)            int t; cin>>t; while(t--)

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
		string s;
		cin >> s;
		int p = 0;
		for (int i = 0; i < s.length(); i++)
		{

			if (s[i] == '1')
				++p;
		}
		int m = s.length() - p;
		int n = min(p, m);
		if (n % 2 == 1)
			cout << "DA" << "\n";
		else
			cout << "NET" << "\n";
	}
}
