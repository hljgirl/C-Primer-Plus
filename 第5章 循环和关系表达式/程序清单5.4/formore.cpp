// �����嵥5.4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

const int ArSize = 16;

int main()
{
	long long factorials[ArSize];

	factorials[0] = factorials[1] = 1LL;

	for (int i = 2; i < ArSize; i++)
	{
		factorials[i] = i * factorials[i-1];
	}

	for (int i = 0; i < ArSize; i++)
	{
		cout << i << "! = " << factorials[i] << endl;
	}

	system("pause");
	return 0;
}

