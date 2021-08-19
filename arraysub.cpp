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
#endif

	int n, k;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	cin >> k;
	int mx = 0 ;
	int sum = 0;
	vector<int> store; // this to store the max in each k elements
	for (int i = 0 ; i < k; i++)
	{

	}

	for (auto &it : v)
		cout << it << " ";
	return 0;

}