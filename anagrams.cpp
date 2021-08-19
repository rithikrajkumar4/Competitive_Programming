#include<bits/stdc++.h>
using namespace std;

#define get_str(s)   	getline(cin,s)

int main()
{
	int flag = 1;
#ifndef k_k
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s1, s2;
	get_str(s1);
	get_str(s2);
	int count1[256];
	if (s1.length() != s2.length())
	{
		cout << -1;
		exit(0);
	}
	for (int i = 0; i < 256; i++)
	{
		count1[i] = 0;
	}
	for (int j = 0; j < s1.length(); j++)
	{
		count1[s1[j]]++;
	}
	for (int i = 0; i < s2.length(); i++)
		count1[s2[i]]--;
	for (int i = 0; i < 256; i++)
	{
		if (count1[i] != 0)
		{
			flag = -1;
			break;
		}
	}
	cout << flag;
}

