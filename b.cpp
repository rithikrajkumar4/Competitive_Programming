#include<bits/stdc++.h>
using namespace std;


#define w(t)            while(t--)

int msum(int n ,int a[],int b[])
{
    int sa =0 ,sb =0;
    for(int i=0;i<n;i++)
    {
        sa += a[i];
        sb += b[i];
    }
    if(sa > sb )
        return sa;
    else
        return sb;
}

int main()
{
    int t,a[30],b[30],k,n,sa =0 ,sb =0;
    cin>>t;
    w(t)
    {
        cin>>n>>k;
        for(int i = 0;i<n;i++)
         {
             cin>>a[i];
             sa += a[i];
         }


        for(int j =0 ;j<n;j++)
        {
            cin>>b[j];
            sb += b[j];
        }
        sort(a,a+n);
        sort(b,b+n);
        if((n - k) == (n/2))
            k= n - k;
        if( k  ==  0 || k == n )
            cout<<msum(n,a,b)<<"\n";

        else
        {
            for(int i=1;i<=k;i++)
            {

                if(sb>sa)
                {
                    b[0+i-1] = a[n-1-i-1];
                }
                else
                {
                    a[0+i-1] = b[n-1-i-1];
                }

            }
            cout<<msum(n,a,b)<<"\n";
        }

    }

    return 0;
}

