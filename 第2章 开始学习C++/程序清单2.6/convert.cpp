// �����嵥2.6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int stonetolb(int);

int main()
{
	int stone;

	cout << "Enter the weight in stone: ";
	cin >> stone;

	int pounds = stonetolb(stone);

	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;

	system("pause");
    return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}