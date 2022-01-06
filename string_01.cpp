#include<bits/stdc++.h>
using namespace std ;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	unordered_set<string> rs;
	while (n--)
	{
		string s;
		cin >> s;
		auto it = rs.find(s);
		if (it != rs.end())
			cout << s << "1\n";
		else {
			cout << "OK\n";
			rs.insert(s);
		}
	}
}