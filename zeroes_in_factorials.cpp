#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long n, ans = 0, k = 5;;
	cin >> n;

	while (true)
	{
		if ((int)n / k == 0)
			break;
		ans += (n / k);
		k = k * 5;
	}
	cout << ans;
}