#include<bits/stdc++.h>
using namespace std;

struct node
{
    char data;
    node *next;
    node(char c)
    {
        data = c;
    }
}top;

int pop()
{
    if(top == NULL)
        return -1;
    else
    {
        node *t = top;
        auto x = t->data;
        top = top->next;
        delete t;
        return x;
    }
}
bool isfull()
{
    node *t = new node;
    if(t == NULL)
    {
        delete t;
        return true;
    }
    delete t;
    return false;
}
bool isempty()
{
    if(top == NULL)
        return true;
    else
        return false;
}
void push(auto x)
{
    if(isfull())
        return;
    else{
        node *t = new node(x);
            t->next = top;
            top = t;

    }
}
auto stacktop()
{
    return top->data;
}
int main()
{
    node *t = new node;
    top =t ;
    push('a');
    push('b');
    push('c');
    while(top != NULL)
    {
        cout<<top->data;
        top = top->next;
    }
}
