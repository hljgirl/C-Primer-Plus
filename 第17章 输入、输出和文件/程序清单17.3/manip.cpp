// �����嵥17.3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;

	cout << "n\t\tn*n\n";
	cout << n << "\t\t" << n*n << " (decimal)\n";

	cout << hex;
	cout << n << "\t\t" << n*n << " (hexadecimal)\n";


	cout << oct << n << "\t\t" << n*n << " (octal)\n";

	dec(cout);
	cout << n << "\t\t" << n*n << " (decimal)\n";


	system("pause");
    return 0;
}

