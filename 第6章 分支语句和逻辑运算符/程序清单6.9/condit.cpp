// �����嵥6.9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	int a, b;
	cout << "Enter two integers: ";

	cin >> a >> b;

	cout << "The larger of " << a << " and " << b;

	int c = a > b ? a : b;

	cout << " is " << c << endl;



	system("pause");
	return 0;
}

