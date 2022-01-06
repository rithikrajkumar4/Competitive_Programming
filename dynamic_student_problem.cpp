#include <iostream>
#include<string>
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
	int length;
	cin >> length;
	string *names = new string[length];
	for (int i = 0; i < length; i++)
		cin >> *(names + i);
	for (int i = 0; i < length; i++)
		cout << *(names + i) << "\n";
	delete[] names;
}