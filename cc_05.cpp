#include <bits/stdc++.h>
using namespace std;
auto gcd1(auto a ,auto b)
{
    if(*a == *b)
     return a;
    else if(*a>*b)
        return gcd1(a-b,b);
    else
        return gcd1(a,b-a);
}
vector<int> gcd(vector<int> &v )
{
    int m = INT_MAX;
    auto it = v.begin();
    while(it!=v.end())
    {
        auto it2 = it + 1 ;
        if(m<gcd1(it,it2))
            m = gcd(it,it2);
        it++;
    }
    for(auto i:v)
        *it / m;
    return v;
}
int main() {
	// your code goes here
	int t;
	vector<int> a;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n;

	    for(int i=0;i<n;i++)
	   {
	       cin>>m;
	       a.push_back(m);
	   }
	   gcd(a);
	   for(auto i:a)
	    cout<<*it<<" ";
	   cout<<"\n";
	   a.clear();
	}
	return 0;
}
