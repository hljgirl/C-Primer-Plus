// �����嵥5.14.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
	cout << "Enter the delay time, in seconds: ";
	float secs;

	cin >> secs;

	clock_t delay = secs * CLOCKS_PER_SEC;

	cout << "starting\a\n";

	clock_t start = clock();

	while (clock() - start < delay)
	{
		
	}

	cout << "Done!\a\n";

	system("pause");
	return 0;
}

