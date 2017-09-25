// �����嵥8.4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

void swapr(int&, int&);
void swapp(int*, int*);
void swapv(int, int);


int main()
{
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl << endl;


	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl << endl;



	cout << "Using pointers to swap contents again:\n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl << endl;


	cout << "Trying to use passing by value:\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl << endl;


	system("pause");
	return 0;
}



void swapr(int& a , int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}


void swapp(int* a , int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


void swapv(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}