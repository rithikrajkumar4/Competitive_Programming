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
#define vvll 			vector<vector<ll>>
#define sll		  		set<ll>
#define pii				pair<ll,ll>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
const int maxn = 100010;


struct node
{
	int data;
	node *next;
}*first = NULL;

void createLL(int a[], int n)
{
	first = new node;
	first->data = a[0];
	first->next = NULL;
	node *t, *last;
	last = first;
	for (int i = 1; i < n; i++)
	{
		t = new node;
		t->data = a[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}
void display(node *p)
{
	int mx = 0;
	while (p != NULL)
	{
		mx = max(mx, p->data);
		cout << p->data << "\n";
		p = p->next;
	}
	cout << "max  elemets is " << mx << "\n";
}

void reverse_display(node *p)
{
	if (p != NULL)
	{
		reverse_display(p->next);
		cout << p->data << "\n";
	}
}
node *search(node *p , int key)
{
	while (p != NULL)
	{
		if (p->data == key)
		{
			return p;
		}
		p = p->next;
	}
}

int main()
{
	IOS;
	read;
	int a[] = {3, 5, 6, 7, 19, 12};
	createLL(a, 6);
	display(first);
	reverse_display(first);
	cout << search(first, 12);
	// free(p);
}
