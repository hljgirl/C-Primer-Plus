// �����嵥2.5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

void simon(int);

int main()
{

	simon(3);

	cout << "Pick an integer: ";

	int count;
	cin >> count;

	simon(count);


	cout << "Done!" << endl;

	system("pause");
    return 0;
}

void simon(int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}