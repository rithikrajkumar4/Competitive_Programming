#include <bits/stdc++.h>
using namespace std;

int cmp(pair<char, int> a, pair<char, int> b)
{
	return a.second < b.second;
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
	string s;
	cin >> s;
	unordered_map<char, int> hm;
	for (auto ch : s)
	{
		hm[ch]++;
	}

	vector<pair<char, int>> v(hm.begin(), hm.end());
	sort(v.begin(), v.end(), cmp);
	for (auto i = v.begin(); i != v.end(); i++)
	{
		cout << i->first << " " << i->second << "\n";
	}
}