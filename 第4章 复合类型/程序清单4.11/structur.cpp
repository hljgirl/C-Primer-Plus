// �����嵥4.11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


using namespace std;


typedef struct inflatable
{
	char name[20];
	float volume;
	double price;
}INFLATABLE;



int main()
{
	INFLATABLE guest = {"Glorious Gloria", 1.88, 29.99};
	INFLATABLE pal = { "Audacious Arthur", 3.12, 32.99 };


	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";

	cout << "You can have both for $";
	cout << guest.price + pal.price << ".\n";

	system("pause");
	return 0;
}

