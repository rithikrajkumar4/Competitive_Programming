// RRRRRRRRRRRRkkkkk
#include<bits/stdc++.h>
using namespace std;

#define pi 				M_PI
#define eb(x)			emplace_back(x)
#define mem(a,b) 		memset(a,b,sizeof(a))
#define ll        		long long
#define pb(a)         	push_back(a)
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
const int maxn = 100010;

bool as_sec(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.second < b.second;
}

void buildtree(int *a, int s, int e, int *tree, int index)
{
	if (s == e)
	{
		tree[index] = a[s];
		return;
	}
	// Recursive case
	int mid = (s + e) / 2;
	buildtree(a, s, mid, tree, 2 * index);//building left sub-tree
	buildtree(a, mid + 1, e, tree, 2 * index + 1); // building right sub-tree

	tree[index] = min(tree[2 * index], tree[2 * index + 1]); // storing the range (min) query

	return;
}

int query(int *tree, int ss, int se, int qs, int qe, int index) {

	//1.complete overlap
	if (qs <= ss && qe >= se)
		return tree[index];

	//2. no overlay as its min we return infinity
	if (qe < ss || qs > se)
		return inf;
	// 3.partial overlap
	int mid = (ss + se ) / 2;
	int left = query(tree, ss, mid, qs, qe, 2 * index);
	int right = query(tree, mid + 1, se, qs, qe, 2 * index + 1);
	return min(left, right);
}

void update(int *tree, int ss, int se, int i, int inc, int index)
{
	if (i<ss or i>se)
		return;
	if (se == ss)
	{
		tree[index] += inc;
		return ;
	}
	int mid = (ss + se) / 2;
	update(tree, ss, mid, i, inc, 2 * index);
	update(tree, mid + 1, se, i, inc, 2 * index + 1);

	tree[index] = min(tree[2 * index], tree[2 * index + 1]);

	return;

}
void updateRange(int *tree, int ss, int se, int l, int r, int inc, int index)
{
	// out of bound
	if (l > se || r < ss)
		return ;
	// leaf node
	if (ss == se)
	{
		tree[index] += inc;
	}
	// recursive case
	int mid = (ss + se) / 2;
	updateRange(tree, ss, mid, l, r, inc, 2 * index);
	updateRange(tree, mid + 1, se, l, r, inc, 2 * index + 1);

	tree[index] = min(tree[2 * indes], tree[2 * index + 1]);
	return ;
}

void solve() {
	int n; cin >> n;
	int a[n];
	f(i, 0, n)cin >> a[i];
	int *tree = new int[4 * n + 1];
	buildtree(a, 0, n - 1, tree, 1);

	// // print tree array
	// f(i, 1, 4 * n + 1)cout << tree[i] << " ";

	int k; cin >> k;
	for (int i = 0; i < k; i++)
	{
		int qs, qe; cin >> qs >> qe;
		cout << query(tree, 0, n - 1, qs, qe, 1) << "\n";
	}

	update(tree, 0, n - 1, 3, 10, 1);
	update(tree, 0, n - 1, 2, 2, 1);

	// print tree array
	f(i, 1, 4 * n + 1)cout << tree[i] << " ";


}
int main()
{
	IOS;
#ifndef ONLINE_JUDGE
	read;
#endif
	solve();


}
