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
	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		vector<int> v(n);
		for (auto &it : v) cin >> it;
		int a = 0, b = 0, move = 0;
		int suml = 0, sumr = 0;
		int j = 0, k = n - 1;
		while (j <= k)
		{
			if (move % 2 == 0)
			{
				int nsuml = 0;
				while ( j <= k && nsuml <= sumr )
				{
					nsuml += v[j++];
				}
				suml += nsuml;
				a += nsuml;
			}
			else
			{
				int nsumr = 0 ;
				while (j <= k && nsumr <= suml)
				{
					nsumr += v[k--];
				}
				sumr += nsumr;
				b += nsumr;
			}
			++move;


		}

		cout << move << " " << a << " " << b << "\n";

	}
}