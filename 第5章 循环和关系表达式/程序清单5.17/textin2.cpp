// �����嵥5.17.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	char ch;
	int count = 0;

	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);

	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}