// �����嵥5.2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	cout << "Enter the starting countdown value: ";

	int limit;
	cin >> limit;

	int i;

	for ( i = limit; i; i--)
	{
		cout << "i = " << i << "\n";
	}

	cout << "Done now that i = " << i << "\n";

	system("pause");
	return 0;
}

