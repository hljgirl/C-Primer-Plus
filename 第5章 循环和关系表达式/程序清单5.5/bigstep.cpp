// �����嵥5.5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout << "Enter an integer: ";

	int by;
	cin >> by;

	cout << "counting by " << by << "s:\n";

	for (int i = 0; i < 100; i += by)
	{
		cout << i << endl;
	}


	system("pause");
	return 0;
}

