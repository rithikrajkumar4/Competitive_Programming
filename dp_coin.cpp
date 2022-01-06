#include <bits/stdc++.h>
using namespace std;

#define N 10
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

// int count[N];

int main()
{
	read;
	int count[N] = {0};
	int coin[3] = {1, 3, 4};
	int n;
	cin >> n;
	count[0] = 1;
	for (int x = 1; x <= n; x++)
	{
		for (auto c : coin)
		{
			if (x - c >= 0)
				count[x] += count[x - c];
		}
	}
	cout << count[n];

}