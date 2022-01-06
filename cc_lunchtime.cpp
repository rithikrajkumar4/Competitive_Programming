#include <bits/stdc++.h>
using namespace std;

#define get_str(s)   	getline(cin,s)

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		// first

		// string u, i, nu, ni;
		// cin >> u >> i;
		// // if(u.length() != (i.length()+1))
		// for (int i = 0; i < u.length(); i++)
		// {
		// 	if (u[i] != ',')
		// 	{
		// 		nu += u[i];
		// 	}
		// }
		// for (int k = 0; k < i.length(); k++)
		// {
		// 	if (i[k] != ',')
		// 	{
		// 		ni += i[k];
		// 	}
		// }
		// if (nu == ni)
		// 	cout << "equal" << "\n";
		// else
		// 	cout << "different" << "\n";

		// second

		string s, n;
		get_str(s);
		for (auto x : s)
			n += tolower(x);
		s.clear();
		string a = "berhampore", b = "serampore";
		size_t found = n.find(a);
		if (found != string::npos) cout << "GCETTB" << "\n";
		else
		{
			found = n.find(b);
			if (found != string::npos) cout << "GCETTS" << "\n";
			else cout << "others" << "\n";
		}


	}


}