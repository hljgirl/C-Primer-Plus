// �����嵥7.16.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

void countdown(int n);

int main()
{
	system("color 0A");

	countdown(4);

	system("pause");
	return 0;
}


void countdown(int n)
{
	cout << "Counting down ... " << n << endl;
	if (n > 0)
	{
		countdown(n - 1);
	}

	cout << n << ": Kaboom!\n";
}
