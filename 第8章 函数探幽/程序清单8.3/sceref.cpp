// �����嵥8.3.cpp : �������̨Ӧ�ó������ڵ㡣
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

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	cout << endl;

	int bunnies = 50;
	rodents = bunnies;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents ;
	cout << ", bunnies = " << bunnies << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents ;
	cout << ", bunnies address = " << &bunnies << endl;


	system("pause");
	return 0;
}

