// �����嵥3.6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	char ch = 'M';
	int i = ch;

	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;

	ch += 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;


	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);

	cout.put('!');

	cout << endl << "Done" << endl;

	system("pause");
	return 0;
}

