// �����嵥7.19.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <malloc.h>
#include <iostream>
#include <windows.h>

using namespace std;

const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

const double * (**pb)(const double *, int);

int main()
{
	double av[3] = {1112.3, 1542.6, 2227.9};


	const double * (*p1)(const double *, int) = f1;
	//const double * (*p2)(const double *, int) = f2;
	auto p2 = f2;

	cout << "Using pointers to function: \n";
	cout << "Address Value\n";
	cout << p1(av, 3) << ": " << *p1(av, 3) << endl;
	cout << (*p2)(av, 3) << ": " << *((*p2)(av, 3)) << endl;

	const double * (*pa[])(const double *, int) = {f1, f2, f3};
	
	//auto pb = pa;
	pb = pa;

	cout << "\nUsing an array of pointers to functions:\n";
	cout << "Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		cout << (pa[i])(av, 3) << ": " << *(pa[i](av, 3)) << endl;
	}
	
	cout << "\nUsing a pointer to a pointer to a functions:\n";
	cout << "Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		cout << (pb[i])(av, 3) << ": " << *(pb[i](av, 3)) << endl;
	}
	

	auto pc = &pa;

	cout << "\nUsing a pointer to an array of functions:\n";
	cout << "Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		cout << ((*pc)[i])(av, 3) << ": " << *((*pc)[i](av, 3)) << endl;
	}


	cout << "\nAddress Value\n";
	const double * (*(*pd)[3])(const double *, int) = &pa;

	for (int i = 0; i < 3; i++)
	{
		cout << ((*pd)[i])(av, 3) << ": " << *((*pd)[i](av, 3)) << endl;
	}


	cout << "\nAddress Value\n";
	const double * pdb = ((*pd)[1])(av, 3);
	cout << pdb << ": " << *pdb << endl;

	system("pause");
	return 0;
}



const double * f1(const double ar[], int n)
{
	return ar;
}


const double * f2(const double ar[], int n)
{
	return ar + 1;
}

const double * f3(const double * ar, int n)
{
	return ar + 2;
}