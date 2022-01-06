#include <bits/stdc++.h>

using namespace std;

int main ()
{

  string s;
  int n;
  cin >> n;
  cin >> s;
  int d = 0, l = 0, u = 0, o = 0, length = 6;
  int add = 0;
  for (int i = 0 ; i <= n ; i++)
  {
    if (isdigit(s[i]))
      ++d;
    else if (islower(s[i]))
      ++l;
    else if (isupper(s[i]))
      ++u;
    else if ( s[i] == '\0')
      continue;
    else
      ++o;
  }

  if (n < length)
  {
    if (d == 0)
      ++add;
    if (l == 0)
      ++add;
    if (u == 0)
      ++add;
    if (o == 0)
      ++add;
    if (add < (length - n))
      cout << length - n;
    else
      cout << add;

  }
  else
  {
    if (d == 0)
      ++add;
    if (l == 0)
      ++add;
    if (u == 0)
      ++add;
    if (o == 0)
      ++add;
    cout << add;
  }
  return 0;
}


