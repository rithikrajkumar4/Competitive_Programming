#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void display();

void Bill()
{
	clrscr();
	int e, f, sum = 0, price, total, Total;
	int item_code[100], price[100];
	bool t = true;
	long long int c;
	char name[50];
	cout << "Enter Name:" << endl;
	gets(name);
	cout << "\nEnter Contact No.: " << endl;
	cin >> c;
	int i = 0;
	while (t)
	{
		cout << "Enter item no. =" << endl;
		cin >> e;
		cout << "Price of item =" << endl;
		cin >> f;

		if (e == -1)
		{
			t = false;
			continue;
		}
		item_code[i] = e;
		price[i] = f;
		i++;
	}
	cout << "Item code " << "          " << "Price" << endl;
	for (int j = 0; ij <= i; j++)
		cout << item_code[i] << "  " << price[i] << endl;
	for (int k = 0; k <= i; k++)
	{
		sum += price[k];
	}
	cout << sum;


	getch();
}

void display()
{
	clrscr();
	int b;
	cout << "************************ MODERN SUPER SHOPEE ************************" << endl;
	cout << "*****************************************26 A/D,Premnagar *******" << endl;
	cout << "\t\t\t welcomes you " << endl << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "What would you like to Do ?" << endl;
	cout << "1. Make Bill" << endl;
	cout << "2. Exit" << endl;
	cin >> b;
	switch (b)
	{
	default:
		break;
	case 1: Bill();
		break;
	case 2: display();
		break;
	}
	getch();
}


void main()
{
	clrscr();
	int a = 2001;
	cout << "Welcome!..." << endl;
	cout << "Enter Security Pin" << endl;
	cin >> a;
	if (a == 2001)
	{
		display();
	}
	else
	{
		exit(0);
	}
	getch();
}
