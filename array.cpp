#include <bits/stdc++.h>
using namespace std;

#define IOS 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read			freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)


struct Array
{
	int a[10];
	int size;
	int length;
};
void print(Array arr)
{
	printf("Elements inside the array is :\n");
	for (int i = 0; i < arr.size; i++)
		printf("%d ", arr.a[i]);
}
void append(Array *arr, int x)
{
	if (arr->length < arr->size)
	{
		arr->a[arr->length++] = x;
	}
	else
		cout << "NOT POSSIBLE\n";
}
void insert(Array *arr, int i, int x)
{
	if (arr->length < arr->size)
	{
		for (int j = arr->length; j > i; j--)
		{
			arr->a[j] = arr->a[j - 1];
		}
		arr->a[i] = x;
		arr->length++;
	}
}
void delet(Array *arr, int i)
{
	if (i <= arr->length && i >= 0)
	{
		for (int j = i + 1; j < arr->length; j++)
		{
			arr->a[j - 1] = arr->a[j];
			// arr->a[j] = 0;
		}
		arr->length--;
		arr->a[arr->length] = 0;
	}
}
int linear_search(Array arr, int x)
{
	for (int i = 0; i < arr.length; i++)
	{
		if (arr.a[i] == x)
			return i;
	}
	return -1;
}
int binary_search(Array arr, int x)
{
	int begin = 0, end = arr.length - 1;
	while (begin <= end)
	{
		int mid = (begin + end) / 2;
		if (arr.a[mid] == x)
			return mid;
		else if (arr.a[mid] < x)
			begin = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}
void reverse1(Array *arr)
{
	int b[arr->length];
	int j = 0;
	for (int i = arr->length - 1 ; i >= 0; i--)
	{
		b[j] = arr->a[i];
		j++;
	}
	for (int i = 0; i < arr->length; i++)
		arr->a[i] = b[i];
}
void swap(int &a , int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
void reverse(Array *arr)
{
	for (int i = 0, j = arr->length - 1; i < j; i++, j--)
	{
		swap(arr->a[i], arr->a[j]);
	}
}
void left_rotate(Array *arr)
{
	int j = arr->a[0];
	for (int i = 1; i < arr->length; i++)
		arr->a[i - 1] = arr->a[i];
	arr->a[arr->length - 1] = j;
}
void left_shift(Array *arr)
{
	for (int i = 1; i < arr->length; i++)
		arr->a[i - 1] = arr->a[i];
	arr->a[arr->length - 1] = 0;
}
void right_rotate(Array *arr)
{
	int j = arr->a[arr->length - 1];
	for (int i = arr->length - 2; i >= 0; i--)
	{
		arr->a[i + 1] = arr->a[i];
	}
	arr->a[0] = j;
}
bool check_sort(Array arr)
{
	for (int i = 0; i < arr.length - 1; i++)
	{
		if (arr.a[i] > arr.a[i + 1])
			continue;
		else if (arr.a[i] < arr.a[i + 1])
			continue;
		else
			return false;
	}
	return true;
}
void inset_sorted(Array *arr, int x)
{
	if (arr->length + 1 <= arr->size)
	{
		int order = arr->a[0] - arr->a[1];
		if (order > 0)
		{
			int pos ;
			for (int i = 0; i < arr->length; i++)
			{
				if (arr->a[i] < x) {
					pos = i;
					break;
				}

			}
			arr->length++;
			for (int i = arr->length - 2; i >= pos; i--)
			{
				arr->a[i + 1] = arr->a[i];
			}
			arr->a[pos] = x;
		}
		else
		{
			int pos ;
			for (int i = 0; i < arr->length; i++)
			{
				if (arr->a[i] > x)
				{
					pos = i;
					break;
				}
			}
			arr->length++;
			for (int i = arr->length - 2; i >= pos; i--)
			{
				arr->a[i + 1] = arr->a[i];
			}
			arr->a[pos] = x;
		}
	}
}
int insert_sorted_2(Array *arr, int x)
{
	if (arr->length + 1 <= arr->size)
	{
		arr->length++;
		int order = arr->a[0] - arr->a[1];
		if (order > 0)
		{
			for (int i = arr->length - 2; i >= 0; i--)
			{
				if (arr->a[i] > x) {
					arr->a[i + 1] = x;
					break;
				}
				else
				{
					arr->a[i + 1] = arr->a[i];
				}
			}

		}
		else
		{
			for (int i = arr->length - 2; i >= 0; i--)
			{
				if (arr->a[i] < x) {
					arr->a[i + 1] = x;
					break;
				}
				else
				{
					arr->a[i + 1] = arr->a[i];
				}
			}
		}
	}
}
void negative_on_one_side(Array arr)
{
	int i = 0, j = arr.length - 1;
	while (i < j)
	{
		while (arr.a[i] < 0)
			i++;
		while (arr.a[j] >= 0)
			j++;
		if (i < j)
			swap(arr.a[i].arr.a[j]);

	}
}
int main()
{
	IOS;
	read;
	Array arr = {{2, 3, 4, 5, 6}, 10, 5};
	append(&arr, 7);
	append(&arr, 8);
	insert(&arr, 0, 1);
	// delet(&arr, 4);
	cout << binary_search(arr, 7) << "\n";
	// cout << linear_search(arr, 7) << "\n";
	// reverse(&arr);
	// left_rotate(&arr);
	// left_shift(&arr);
	// right_rotate(&arr);
	// if (check_sort(arr))
	// 	cout << "Sorted ";
	// else
	// 	cout << "Not Sorted ";
	delet(&arr, 3);
	reverse(&arr);
	insert_sorted_2(&arr, 4);
	print(arr);
}
