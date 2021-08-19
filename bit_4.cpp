#include<iostream>
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
	int arr[] = {3, 3, 3, 4, 4, 5, 5};
	int l = sizeof(arr) / sizeof(arr[0]);
	int res = 0;
	for (int i = 0; i < l; i++)
	{
		res = (res ^ arr[i]);
	}
	cout << res;
}