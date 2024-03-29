#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;
bool prime[MAX];
int spf[MAX];


void sieve()
{
	fill(prime, prime + MAX, true);
	for (int i = 1; i < MAX; i++)spf[i] = i;
	prime[0] = prime[1] = false;
	for (int i = 2; i * i < MAX; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j < MAX; j += i;)
			{
				if (prime[j])spf[j] = i;
				prime[j] = false;
			}
		}
	}
}




//single Query
vector<int> primeFactors(long long int n)
{
	vector<int> pfact;
	while (n % 2 == 0)
	{
		pfact.push_back(2);
		n = n / 2;
	}
	long long int i;
	for ( i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			pfact.push_back(i);
			n = n / i;
		}
	}
	if (n > 2)pfact.push_back(n);
	return pfact;
}




// Multiple Query
vector<int> getFactorization( long long int x)
{
	vector<int> ret;
	while (x != 1)
	{
		ret.push_back(spf[x]);
		x = x / spf[x];
	}
	return ret;
}









int main()
{

}