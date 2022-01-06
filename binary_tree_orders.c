#include<bits/stdc++.h>
using namespace std;
struct node
{
    node* lchild;
    int data;
    node* rchild;
};
void create(int a[],int n)
{
    node *root = new node();
    root->data = a[0];
    root->lchild = root->rchild = NULL;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements for Binary Tree(complete bt) : \n";
    for(int i=0;i<n;i++)
        cin>>a[i];
}
