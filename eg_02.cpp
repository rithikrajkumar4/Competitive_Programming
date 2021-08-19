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

	int x, n;
	cin >> x >> n;

	std::vector<pair<int, string>> v;
	string name[n];
	int salary[n];
	for (int i = 0; i < n; ++i)
	{
		getline(cin, name[i]);
		cin >> salary[i];
	}
	for (int i = 0; i < n; i++)
	{
		v.push_back(make_pair(salary[i], name[i]));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		if (v[i].first > x)
			cout << v[i].second << " " << v[i].first << "\n";
	}
	return 0;
}