#include <bits/stdc++.h>
using namespace std;

#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

bool if_3(int n)
{
	while (n > 0)
	{
		int r = n % 10;
		if (r == 3)
			return true;
		n /= 10;
	}
	return false;
}

// int dp[501] = {0};
// bool visited[501] = {false};

int main()
{
	IOS;
	read;
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		// cout << i <b< " ";
		if (if_3(i))
			ans++;
	}
	// cout << ans;
	cout << n - ans;
}