#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *link;

};
void display(node *root)
{
    while (root != NULL) {
        cout << root->data << "->";
        cout << root->link;
    }
}
void insert(node **root, int num)
{
    node *temp = NULL;
    node *ptr ;
    temp->data = num;
    temp->link = NULL;
    if (*root == NULL)
    {
        *root = NULL;
    }
    else
    {
        ptr = *root;
        while (ptr->link != NULL)
            ptr = ptr->link;
        ptr->link = temp;
    }
}
node * arraytolist(int arr[], int n)
{
    node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        insert(&root, arr[i]);
    }
    return root;
}

int main()
{
#ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int arr[] = { 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);


}