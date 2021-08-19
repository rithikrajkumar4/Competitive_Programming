#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << "*";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << " ";
	for (int i = 1; i <= (n + 1) / 2; i++)
	{
		cout << "*";
	}
	cout << "\n";
	for (int i = 1; i <= (n - 3) - 1; i++)
	{
		cout << "*";
		for (int i = 1; i <= (n - 3) / 2; i++)
			cout << " ";
		cout << "*" << "\n";
	}
	for (int i = 0; i < n; i++)
		cout << "*" ;
	cout << "\n";
	for (int i = 1; i <= (n - 3) - 1; i++)
	{
		for (int i = 1; i < (n - (n - 3) / 2 - 1); i++)
			cout << " ";
		cout << "*" ;
		for (int i = 1; i <= (n - 3) / 2; i++)
			cout << " ";
		cout << "*" << "\n";

	}
	for (int i = 1; i <= (n + 1) / 2; i++)
		cout << "*" ;
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << " ";
	cout << "*" << "\n";

	return 0;
}
