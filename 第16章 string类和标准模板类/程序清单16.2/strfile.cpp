// �����嵥16.2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("tobuy.txt");

	if (fin.is_open() == false)
	{
		cerr << "Can't open file.Bye.\n";
		exit(EXIT_FAILURE);
	}

	string item;
	int count = 0;

	getline(fin, item, ':');

	while (fin)
	{
		++count;
		cout << count << ": " << item << endl;
		getline(fin, item, ':');
	}

	cout << "Done!\n";
	fin.close();
	system("pause");
    return 0;
}

