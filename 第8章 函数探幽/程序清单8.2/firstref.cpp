// �����嵥8.2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

	int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	rodents++;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;


	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;


	system("pause");
	return 0;
}

