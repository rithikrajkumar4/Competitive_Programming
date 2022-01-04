#include <bits/stdc++.h>
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
#define print(x)		cout<<x<<" "

struct node{
	node* left;
	node* right;
	int data;
}
void insert(node *root,node *ok){
	if(root == nullptr){
		root = ok;
	}
	else{
		if(root->data > ok->data){
			if(root->left == nullptr)
				root->left  = ok;
			else
				insert(root->left,ok);
		}
		else{
			if(root->right == nullptr)
				root->right = ok;
			else
				insert(root->right,ok);
		}
	}
	return ;
}
void in_order_print(node *root){
	if(root == nullptr)
		return;
	in_order_print(root->left);
	cout<<root->data<<" ";
	in_order_print(root->right);
	cout<<"\n";
}

node *delete_node(node *root,int data){
	if(root == nullptr)return root;
	else if(data < root->data)root->left = delete_node(root->left,data);
	else if(data > root->data)root->right = delete_node(root->right,data);
	else{
		// case 1 : when we are just deleting the node with no child 
		if(root->left == nullptr && root->right == nullptr){
			free(root);
			root = nullptr;
		}
		else if(root->left == nullptr){ // case 2 : when there is only one child on the tree 
			node *temp = root;
			root = root->right;
			free(temp);
		}
		else if(root->right == nullptr){
			node *temp = root;
			root = root->left;
			free(temp);
		}
		else{                          // case 3: when there is child on both side of the tree
			node *temp = root->right;
			while(temp->left!=nullptr){
				temp = temp->left;
			}
			root->data = temp->data;
			root->right = delete_node(root->right,temp->data);
		}
	}
	return root;
}

int main(){
	IOS;


	return 0;
}