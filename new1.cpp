#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb(a) push_back(a)
#define mk(a, b) make_pair(a, b)
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define loop(i, a, b) for (auto i = a; i != b; i++)
#define b_loop(i, a, b) for (ll i = b; i >= a; i--)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define vll vector<ll>
#define sll set<ll>
#define pii pair<ll, ll>
#define get_str(s) getline(cin, s)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define sp(x, y) fixed << setprecision(y) << x
#define mod 1000007

vector<vll> createarray(ll n, vector<vll> a, ll k)
{
    rep(i, n)
    {
        if (k != 0)
        {
            a[i][i] = 1;
            k--;
        }
    }
    while (k)
    {

        rep(i, n)
        {
            rep(j, n)
            {
                if (a[i][j] == 1)
                    continue;
                if (k != 0)
                {
                    a[i][j] = 1;
                    i++;
                    k--;
                }
            }
        }
    }

    return a;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUGDE
    freopen("inp.txt", "r", stdin);
    freopen("outp.txt", "w", stdout);
#endif
    w(t)
    {
        ll n, k;
        cin >> n >> k;
        vector<vll> A(n, vector<ll>(n, 0));
        rep(i, n)
        {
            rep(j, n)
            {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }
        // A = createarray(n, A, k);

        // rep(i, n)
        // {
        // 	rep(j, n)
        // 	{
        // 		cout << A[i][j] << " ";
        // 	}
        // 	cout << "\n";
        // }
    }
}
