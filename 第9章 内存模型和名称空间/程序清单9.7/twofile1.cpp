// �����嵥9.7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int tom = 3;
int dick = 30;

static int harry = 300;

void remote_access();

int main()
{

	cout << "main() reports the following addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";

	remote_access();

	system("pause");
	return 0;
}

