// �����嵥3.4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (decimal for 42)\n";

	cout << hex;
	cout << "waist = " << waist << " (hexadecimal for 42)\n";

	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)\n";



	system("pause");
	return 0;
}