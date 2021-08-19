#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> result;

    // your code
    sort(a.begin(), a.end());

    for (int j = 0; j < a.size() - 1; j++)
        result.push_back(a[j]);

    for (int i = 0; i < result.size(); ++i)
    {
        if (i != 0) cout << ' ';
        cout << result[i];
    }
    cout << endl;

    return 0;
}