#include<iostream>
using namespace std;

struct pair {
	int key;
	int value;

};
void display(struct pair ar[], int size)
{
	cout << "KEY\tVALUE";
	for (int i = 0; i < size; i++)
	{
		cout << ar[i].key << "\t" << ar[i].value << "\n";
	}

}
int main()
{
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int size;
	cin >> size;
	struct pair hash_table[size];
	cout << "Enter the elements=\n";
	for (int i = 0; i < size; i++)
	{
		int temp;
		cin >> temp;
		int k = temp % size;
		hash_table[k].key = k;
		hash_table[k].value = temp;
	}
	printf("\n");
	display(hash_table[], size);

}