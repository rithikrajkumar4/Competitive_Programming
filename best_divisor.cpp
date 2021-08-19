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

	long int n;
	cin >> n;
	vector<int> v;
	for (int i = n; i >= 1; i--)
	{
		if (n % i == 0)
			v.push_back(i);
	}
	int s = 0 , no = INT_MAX;
	for (int i = 0; i < v.size(); i++)
	{
		int k = v[i];
		int sm = 0;
		while (k > 0)
		{
			int r = r % 10;
			sm += r;
			k = k / 10;
		}
		if (sm > s)
		{
			s = sm;
			no = v[i];
		}
		else if (sm == s)
		{
			if (no > v[i])
				no = v[i];
		}
		else
			continue;
	}
	cout << no << "\n";
}