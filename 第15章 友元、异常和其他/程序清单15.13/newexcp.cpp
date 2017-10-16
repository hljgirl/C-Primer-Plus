// �����嵥15.13.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Big
{
	long double stuff[20000];
};

int main()
{

	Big* pb;

	try
	{
		cout << "Trying to get a big block of memory:\n";
		pb = new Big[10000];
		cout << "Got past the new request: \n";
	}
	catch (bad_alloc & ba)
	{
		cout << "Caught the exception!\n";
		cout << ba.what() << endl;
		exit(EXIT_FAILURE);
	}
	
	cout << "Memory successfully allocated\n";
	pb[0].stuff[0] = 4;

	cout << pb[0].stuff[0] << endl;

	delete[] pb;

	system("pause");
    return 0;
}

