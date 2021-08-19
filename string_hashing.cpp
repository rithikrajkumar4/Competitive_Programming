#include<bits/stdc++.h>
using namespace std;

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
	string s;
	cin >> s;
	unordered_map<char, int> m;
	for (char ch : s)
	{
		auto it = m.find(ch);
		if (it != m.end())
			m[ch]++;
		else
			m.insert({ch, 1});
	}
	int g = 0;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		if ((i->second) > g)
			g = i->second;
	}
	if (g == 1)
		cout << 0;
	else
		cout << g;
}