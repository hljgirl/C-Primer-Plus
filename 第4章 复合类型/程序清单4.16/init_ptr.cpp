// �����嵥4.16.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	int higgens = 5;
	int *pt = &higgens;

	cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << endl;

	system("pause");
	return 0;
}

