// �����嵥5.13.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

const int ArSize = 20;


int main()
{

	char name[ArSize];

	cout << "Your first name, please: ";
	cin >> name;

	cout << "Here is your name, verticalized and ASCIIized:\n";

	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;

	}


	system("pause");
	return 0;
}

