#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int my_x , my_y, n, k ;
	cin >> my_x >> my_y;
	cin >> n >> k ;
	vector<tuple<int, int, int>> v;
	while (n--)
	{
		int x, y;
		cin >> x >> y;
		int k = sqrt(pow(abs(y - my_y), 2) + pow(abs(x - my_x), 2));

		v.push_back(make_tuple(k, x, y));

	}
	sort(v.begin(), v.end());

	for (int i = 0; i < k; i++)
		cout << get<1>(v[i]) << " " << get<2>(v[i]) << "\n";


	return 0;

}