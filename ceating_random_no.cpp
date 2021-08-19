#include <bits/stdc++.h>
using namespace std;

int main()
{
	while (true) // to test different codes for different random outputs
	{
		int n = rand() % 10 + 2;
		cout << n << "\n";
		std::vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			a.push_back(rand() % 100000);
		}
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << "\n";
		// two different solutions

		if (sol1 != sol2)
		{
			cout << "WRONG ANS " << sol1 << " "sol2;
			break;
		}
		else
			cout << "ok" << "\n";
	}
}