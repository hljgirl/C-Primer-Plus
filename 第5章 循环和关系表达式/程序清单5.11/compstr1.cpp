// �����嵥5.11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	char word[5] = "?ate";

	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}

	cout << "After loop ends, word is " << word << endl;

	system("pause");
	return 0;
}

