// �����嵥7.5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

const int ArSize = 8;

int sum_arr(int arr[], int n);

int main()
{

	int cookies[] = {1,2,4,8,16,32,64,128};

	int sum = sum_arr(cookies, ArSize);

	cout << "Total cookies eaten: " << sum << "\n";

	system("pause");
	return 0;
}


int sum_arr(int arr[], int n)
{
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}

	return total;
}