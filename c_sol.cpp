#include<iostream>
using namespace std;
#define ull unsigned long long int
 ull ways(int n)
{
    ull way=0;
    for(int i = 3;i<=n;i+=2)
    {
        way += 2 * (i-1) * 1ll * (i-1);
    }
    return way;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n = 4999993;
       //cin>>n;
        cout<<ways(n)<<"\n";

    }
    return 0;
}
