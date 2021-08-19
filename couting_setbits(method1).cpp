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
	// method 1
	int n, ans = 0;
	cin >> n;
	/*while (n > 0)
	{
		ans += (n & 1);
		n = n >> 1;
	}
	cout << ans << "\n";

	// method 2
	ans = 0;*/
	while (n > 0)
	{
		n = n & (n - 1);
		ans++;
	}
	cout << ans << "\n";

}
