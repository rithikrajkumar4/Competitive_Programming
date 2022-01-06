#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		ll n, h;
		vector<int> v;
		cin >> n >> h;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		ll sum = 0;
		for (auto it : v)
			sum += it;
		int j = 0;
		while (sum % h == 0)
		{
			sum -= v[j];
			j++;

		}
		int k = n - j;
		cout << n - j << "\n";

	}
	return 0;
}
