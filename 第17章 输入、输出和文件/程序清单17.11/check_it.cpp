// �����嵥17.11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	cout << "Enter numbers: ";
	int sum = 0;
	int input;

	while (cin>>input)
	{
		sum += input;
	}

	cout << "Last value entered = " << input << endl;
	cout << "Sum = " << sum << endl;

	system("pause");
    return 0;
}

 