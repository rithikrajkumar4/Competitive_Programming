#include <bits/stdc++.h>

using namespace std;
#define w(t)            int t; cin>>t; while(t--)

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUGDE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  w(t)
  {
    string s, p;
    cin >> s >> p;
    int a[26] = {0};
    string b = "abcdefghijklmnopqrstuvwxyz";
    for (auto ch : s)
    {
      int idx = ch - 'a';
      a[idx]++;
    }
    for (auto ch : p)
    {
      int idx = ch - 'a';
      a[idx]--;
    }
    for (auto )
    }


  return 0;
}