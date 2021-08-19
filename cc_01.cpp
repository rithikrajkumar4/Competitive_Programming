#include<bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	vector<long int> v;
	long int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    v.push_back(n);
	}
	sort(v.begin(),v.end());
	for(auto i= v.begin();i!=v.end();i++)
	    cout<<i<<"\n";

	return 0;

}
