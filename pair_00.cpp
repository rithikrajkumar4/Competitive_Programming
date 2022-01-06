#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	/*pair<int , char> p1;
	make_pair(1, 'a');
	make_pair(2, 'b');
	cout << p1.first << " " << p1.second;*/
	vector<pair<int , int>> v;
	v.push_back(make_pair(1, 10));
	v.push_back(make_pair(2, 20));

	for (int i = 0; i < 2; i++)
		cout << v[i].first << " " << v[i].second << "\n";

	return 0;
}