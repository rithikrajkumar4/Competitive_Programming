#include<iostream>
using namespace std;
int main()
{
    int n,a,b,player1=0,player2=0,m =0,f,w;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        player1 += a;
        player2 += b;
        if(player1>player2)
        {
            f = player1 - player2;
            if(f>m)
            {
                m =f;
                w =1;
            }


        }
        else
        {
            f = player2-player1;
            if(f>m)
            {
                m =f;
                w =2;
            }
        }
    }
    cout<<w<<" "<<m;
}
