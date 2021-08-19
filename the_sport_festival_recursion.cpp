#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define endl '\n'
#define vll vector<ll>
#define MAX 1000000

using namespace std;

void init_code() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

ll dp[2002][2002]  ;
ll arr[2002] ;

ll solve(int l, int r)
{
    if (l >= r)
    {
        return 0 ;
    }
    if (dp[l][r]  != -1)
    {
        return dp[l][r] ;
    }
    return dp[l][r] = arr[r] - arr[l] + min(solve(l + 1, r), solve(l, r - 1))  ;
}
int main()
{
    // your code goes here
    init_code() ;
    memset(dp, -1, sizeof(dp)) ;
    int n; cin >> n ;
    for (int i = 0  ; i < n ; i++)
    {
        cin >> arr[i]  ;

    }



    sort(arr, arr + n) ;
    cout << solve(0, n - 1) << endl;

    return 0;
}