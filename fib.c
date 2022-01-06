#include<stdio.h>
#include<conio.h>

//using namespace std;
int dp[100]={0,1};

int fib(int n)
{
 return dp[n]= fib(n-1)+fib(n-2);
}
//without using recursion
int main()
{
    int n;
    printf("Enter a no. till you want to see fibonacci series::\n");
    scanf("%d",&n);
    printf("%d",fib(n));
    for(int i=0;i<n;i++)
        printf("%d,",dp[i]);
}
