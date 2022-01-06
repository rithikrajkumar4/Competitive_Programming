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
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int d;
	cin >> d;
	for (int i = n - d ; i < n; i++) cout << a[i] << " ";
	for (int i = 0; i < n - d; i++)	cout << a[i] << " ";
}