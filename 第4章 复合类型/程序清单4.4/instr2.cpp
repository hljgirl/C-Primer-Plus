// �����嵥4.4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
	const int ArSize = 20;

	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	//cin >> name;
	cin.getline(name, ArSize);
	

	cout << "Enter your favorite dessert:\n";
	//cin >> dessert;
	cin.getline(dessert, ArSize);

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";


	system("pause");
	return 0;
}

