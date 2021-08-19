#include<bits/stdc++.h>
using namespace std;

#define ll   long long int
int gcd(ll a,ll b )
{
    if(a == b)
        return a;
    else if(a>b)
        return gcd(a-b,b);
    else
        return gcd(a,b-a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<endl;
    }

}
