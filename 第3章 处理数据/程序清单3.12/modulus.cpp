// �����嵥3.12.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds: ";
	cin >> lbs;

	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;

	cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s)." << endl;


	system("pause");
	return 0;
}

