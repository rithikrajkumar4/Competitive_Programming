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
	int n;
	cin >> n;
	int sl = 0, sr = 0;
	std::vector<int> L, R;
	for (int i = 0; i < n; i++)
	{
		int l, r;
		cin >> l >> r;
		L.push_back(l);
		R.push_back(r);
		sl += l;
		sr += r;
	}
	int ma = abs(sl - sr), j, k, g;
	g = ma;
	for (int i = 0; i < n; i++)
	{
		k = max(ma, abs((sl - L[i] + R[i] ) - (sr - R[i] + L[i])));
		if (k > ma)
		{
			j = i;
			ma = k;
		}

	}
	if (g == ma)
		cout << 0;
	else
		cout << j + 1;


}