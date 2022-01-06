
#include <bits/stdc++.h>
using namespace std;
void printstr(string s , string curr, int i)
{
	if (i == s.length())
	{
		cout << curr << " , "; return;
	}
	printstr(s, curr, i + 1);
	printstr(s, curr + s[i], i + 1);

}
int main()
{
#ifndef k_k
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i = 0;
	string s = "ABC";
	string curr = " ";
	printstr(s, curr, i);
	cout << "\b";
	return 0;
}