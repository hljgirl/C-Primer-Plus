// �����嵥2.4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
	double area;

	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;

	double side;
	side = sqrt(area);

	cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
	cout << "How fascinating!" << endl;


	system("pause");
    return 0;
}

