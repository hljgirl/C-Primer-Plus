// �����嵥4.15.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;


int main()
{

	int updates = 6;
	int * p_updates;

	p_updates = &updates;

	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;

	cout << "Now updates = " << updates << endl;


	system("pause");
	return 0;
}

