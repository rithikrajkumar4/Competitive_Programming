#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		// ANWSER 1

		// unordered_map<int, int> x, y;
		// for (ll i = 0; i < (4 * n) - 1; i++)
		// {
		// 	ll cx, cy;
		// 	cin >> cx >> cy;
		// 	x[cx]++;
		// 	y[cy]++;
		// }
		// ll ans_x = 0, ans_y = 0;
		// for (auto a : x)
		// {
		// 	if (a.second % 2)
		// 		ans_x = a.first;

		// }
		// for (auto b : y)
		// {
		// 	if (b.second % 2)
		// 		ans_y = b.first;
		// }
		// cout << ans_x << " " << ans_y << "\n";


		// ANSWER 2 ( USING XOR(^))
		ll ans_x = 0, ans_y = 0;
		for (ll i = 0; i < (4 * n) - 1; i++)
		{
			ll x, y;
			ans_y ^= y;
			ans_x ^= x;
		}
		cout << ans_x << " " << ans_y << "\n";
	}
}