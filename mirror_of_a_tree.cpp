// RRRRRRRRRRRRkkkkk
#include<bits/stdc++.h>
using namespace std;

#define pi 				M_PI
#define eb(x)			emplace_back(x)
#define mem(a,b) 		memset(a,b,sizeof(a))
#define ll        		long long
#define pb(a)         		push_back(a)
#define mk(a,b)			make_pair(a,b)
#define all(x)	  		x.begin(),x.end()
#define rall(x)			x.rbegin(),x.rend()	
#define fi 				first
#define	se				second
#define f(i,a,n)		for(int i=a;i<n;i++)
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
#define vpii			vector<pair<int,int>>
#define vpll			vector<pair<ll,ll>>
#define get_str(s)   	getline(cin,s)
#define w(t)            int t; cin>>t; while(t--)
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mod 			1000000007
#define inf 			INT_MAX-1
#define ninf			INT_MIN+1
#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define print(x)		cout<<x<<" "

const int maxn = 100010;

struct node
{
	int data;
	node *left;
	node *right;
};
node *createNode(int data){
	node *newNode = (node *)malloc(sizeof(node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
void inorder(node *root){
	if(root==NULL)return;
	inorder(root->left);
	cout<<" "<<(root->data);
	inorder(root->right);
	cout<<"\n";
}
node *mirrortree(node *root){
	if(root==NULL)return root;
	node *t = root->left;
	root->left  = root->right;
	root->right = t;

	if(root->left)mirrortree(root->left);
	if(root->right)mirrortree(root->right);
	return root;
}

void solve() 
{
	node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    printf("Inorder of original tree: ");
    inorder(tree);

    tree = mirrortree(tree);

    printf("\nInorder of Mirror tree: ");
    inorder(tree);
    return ;
}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	solve();
}