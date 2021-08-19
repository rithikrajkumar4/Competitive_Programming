// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict, string pattern);

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<string> s(n);
		for (int i = 0; i < n; i++)
			cin >> s[i];

		string tt;
		cin >> tt;

		vector<string> res = findMatchedWords(s, tt);
		sort(res.begin(), res.end());
		for (int i = 0; i < res.size(); i++)
			cout << res[i] << " ";
		cout << endl;

	}
}// } Driver Code Ends


/* The function returns a  vector of strings
present in the dictionary which matches
the string pattern.
You are required to complete this method */
int cmp(pair<char, int> a, pair<char, int> b)
{
	return a.second < b.second;
}
vector<string> findMatchedWords(vector<string> dict, string pattern)
{
	unordered_map<char, int> hm;
	vector<string> r;
	for (auto ch : pattern)
	{
		hm[ch]++;
	}
	std::vector<pair<char, int>> v(hm.begin(), hm.end());
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < dict.size(); i++)
	{
		unordered_map<char, int> temp;
		for (auto ch : dict[i])
		{
			temp[ch]++;
		}
		int t = 1;
		std::vector<pair<char, int>> v1(temp.begin(), temp.end());
		sort(v1.begin(), v1.end(), cmp);
		for (auto j = v1.begin(), k = v.begin(); j != v1.end(); j++, k++)
		{
			if (j->second != k->second)
				t = 0;
		}
		if (t == 1)
		{
			r.push_back(dict[i]);
		}


	}
	return r;

}