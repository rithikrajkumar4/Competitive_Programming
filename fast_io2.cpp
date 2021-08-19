#include<bits/stdc++.h>
using namespace std;

#define ll         		long long int
#define ull             unsigned ll
#define pb(a)         	push_back(a)
#define all(x)	  		x.begin(),x.end()
#define fi 				first
#define	se				second
#define loop(i,a,b) 	for(auto i=a;i!=b;i++)
#define b_loop(i,a,b)	for(ll i=b;i>=a;i--)
#define rep(i,n)     	for(ll i=0;i<n;i++)
#define vll       		vector<ll>
#define sll		  		set<ll>
#define get_str(s)   	getline(cin,s)
#define w(t)            while(t--)
#define vi              vector<int>
#define ios		        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Max             1000007

int a[Max];
void _intialisation()
{
    int i;
    for(int i=0;i<Max;i++)
    a[i] = -1;
}
int fib(int n)
{
    if(a[n]== -1)
    {
        if(n<=1)
            a[n] = n;
        else
            a[n] = fib(n-1)+fib(n-2);
    }
    return a[n];
}
int main()
{
    cout<<fib(40);

    return 0;
}

