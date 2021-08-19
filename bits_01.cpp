#include <iostream>
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
	/*int x, k;
	cin >> x >> k;
	int y = 1 << (k - 1);
	if (x & y)
		cout << "True";
	else
		cout << "False";

	// another question.

	int x, y;
	cin >> x;
	y = x - 1;
	if (x <= 0)
		cout << "False";
	else if (!(x & y))
		cout << "True";
	else
		cout << "False";*/

	//counting total no. of setbits in a no.
	// 	|
	// \ /
	//  -
	int n;
	cin >> n;
	int res = 0;
	while (n > 0)
	{
		n = n & (n - 1);
		res++;
	}
	cout << res;
}