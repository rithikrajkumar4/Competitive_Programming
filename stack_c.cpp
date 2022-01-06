#include<bits/stdc++.h>
using namespace std;


#define pi 				M_PI
#define mem(a,b) 		memset(a,b,sizeof(a))
#define ll        		long long
#define pb(a)         	push_back(a)
#define mk(a,b)			make_pair(a,b)
#define all(x)	  		x.begin(),x.end()
#define fi 				first
#define	se				second
#define loop(i,a,b) 	for(auto i=a;i!=b;i++)
#define b_loop(i,a,b)	for(ll i=b;i>=a;i--)
#define rep(i,n)     	for(ll i=0;i<n;i++)
#define vll       		vector<ll>
#define vi				vector<int>
#define vs 				std::vector<string>
#define vvi				vector<vi>
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
const int maxn = 100010;
const int size = 100;

void pop(int stack[], int &top)
{
	if (top == -1)
		printf("underflow\n");
	else
	{
		printf("Element deleted is %d\n", stack[top]);
		top--;
	}
}
void push(int stack[], int &top, int data)
{
	if (top == (size - 1))
		printf("Overflow\n");
	else
	{
		top++;
		stack[top] = data;
		printf("Element added is %d\n", stack[top]);
	}
}
void print(int stack[], int &top)
{
	cout << endl;
	for (int i = 0; i <= top; i++)
		cout << stack[i] << " ";
}
int main()
{
	IOS;
	read;

	int stack[size], top = -1;
	push(stack, top, 2);
	push(stack, top, 3);
	push(stack, top, 4);
	push(stack, top, 5);
	push(stack, top, 6);
	push(stack, top, 7);
	pop(stack, top);
	// print(stack, top);



}

