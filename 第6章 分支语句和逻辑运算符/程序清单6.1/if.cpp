// �����嵥6.1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	char ch;

	int spaces = 0;
	int total = 0;

	cout << "Enter text,Please! when '.' to quit.\n";

	cin.get(ch);

	while (ch != '.')
	{
		if (ch == ' ')
		{
			spaces++;
		}
		total++;

		cin.get(ch);
	}

	cout << spaces << " spaces, " << total;
	cout << " characters total in sentence\n";


	system("pause");
	return 0;
}

