#include <bits/stdc++.h>
using namespace std;

bool mycompare(pair<string, int > p1 , pair<string, int > p2)
{
	if (p1.second == p2.second )
		return p1.first < p2.first;
	else
		return p1.second < p2.second;
}
void sort(pair<string, int> emp[] , int n)
{
	for (int i = 0; i < n; i++)
	{
		if (mycompare(emp[i], emp[i + 1]))
			swap(emp[i], emp[i + 1]);
	}
}
int main()
{
	int min_salary, n;
	cin >> min_salary >> n;
	string name;
	int salary;
	pair<string, int> emp[n];
	for (int i = 0; i < n; i++)
	{
		cin >> name >> salary;
		emp[i].fisrt = name ;
		emp[i].second = salary;
	}
	sort(emp, emp + n, mycompare);
	for (int i = 0; i < n; i++)
	{
		if (emp[i].second > min_salary)
			cout << emp[i].first << " " << emp[i].second << "\n";
	}
}