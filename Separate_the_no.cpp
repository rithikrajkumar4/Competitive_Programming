#include <bits/stdc++.h>

using namespace std;

#define IOS             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod             1000000007
#define read            freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

// Complete the separateNumbers function below.
vector<long long> v(32, 0);
long long create_no(int ind , int check, string sub)
{
    int i = ind, j = 0;
    long long  n = 0;
    while (j <= check)
    {
        n = n * 10 + (int)sub[i] - '0';
        i++;
        j++;
        // cout << n;
    }
    return n;
}
int main()
{
    IOS;
    read;
    w(t)
    {
        string s;
        cin >> s;
        int digit = 1;

    }

    return 0;
}
