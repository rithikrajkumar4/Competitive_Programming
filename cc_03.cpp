#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,f;
        cin>>n;
        vector<int> v(n);

        while(n--)
        {
            cin>>r;
            v.push_back(r);

        }
        for(int i =1;i<n;i++)
        {
            f = gcd(v[i-1],v[i]);

        }

        for(int  i= 0;i<n;i++)
        {
            cout<<v[i]/f<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
