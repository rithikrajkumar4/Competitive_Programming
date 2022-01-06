// C++ program to demonstrate sorting in
// vector of tuple according to 1st element
// of tuple
#include <bits/stdc++.h>
using namespace std;
int main()
{	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<tuple<int, int, int> > v;
	v.push_back(make_tuple(10, 20, 30));
	v.push_back(make_tuple(15, 5, 25));
	v.push_back(make_tuple(3, 2, 1));

	// Using sort() function to sort by 1st
	// element of tuple
	sort(v.begin(), v.end());
	cout << "Sorted Vector of Tuple on basis"
	     " of first element of tuple:\n";
	for (int i = 0; i < v.size(); i++)
		cout << get<0>(v[i]) << " "
		     << get<1>(v[i]) << " "
		     << get<2>(v[i]) << "\n";

	return 0;
}