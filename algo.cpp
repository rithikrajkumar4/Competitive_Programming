#include <bits/stdc++.h>
using namespace std;

// #define sp(x,y)         fixed<<setprecision(y)<<x
#define ll long long
bool sortinrev(const pair<int , string> &a, const pair<int , string> &b)
{
	return (a.first > b.first)  ;
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
	std::vector<pair<int , string>> v;
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		string name;
		cin >> name >> a;
		v.push_back(make_pair(a, name));
	}
	sort(v.begin(), v.end(), sortinrev);
	// reverse(v.begin(), v.end());

	for (auto it : v)
	{
		cout << it.second << " " << it.first << "\n";
	}
}