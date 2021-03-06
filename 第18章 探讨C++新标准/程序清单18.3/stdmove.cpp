// 程序清单18.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Useless
{

private:
	int n;
	char* pc;
	static int ct;
	void ShowObject() const;

public: 
	Useless();
	explicit Useless(int k);
	Useless(int k, char ch);
	Useless(const Useless& f);
	Useless(Useless&& f);
	~Useless();

	Useless operator+(const Useless& f) const;
	Useless& operator=(const Useless& f);
	Useless& operator=(Useless&& f);
	void ShowData() const;
};


void Useless::ShowObject() const
{
	cout << "Number of elements: " << n;
	cout << " Data address: " << (void*)pc << endl;
}

Useless::Useless()
{
	ct++;
	n = 0;
	pc = nullptr;
	//cout << "default constructor called; number of objects: " << ct << endl;
	ShowObject();
}

Useless::Useless(int k) :n(k)
{
	ct++;	
	pc = new char[n];

	//cout << "int constructor called; number of objects: " << ct << endl;
	ShowObject();
}

Useless::Useless(int k, char ch) :n(k)
{
	ct++;	
	pc = new char[n];
	for (int i = 0; i < n; i++)
	{
		pc[i] = ch;
	}

	//cout << "int, char constructor called; number of objects: " << ct << endl;
	ShowObject();
}

Useless::Useless(const Useless & f) : n(f.n)
{
	ct++;	
	pc = new char[n];
	for (int i = 0; i < n; i++)
	{
		pc[i] = f.pc[i];
	}

	//cout << "copy const called; number of objects: " << ct << endl;
	ShowObject();
}

Useless::Useless(Useless && f) :n(f.n)
{
	ct++;	
	pc = f.pc;
	f.pc = nullptr;
	f.n = 0;

	//cout << "move constructor called; number of objects: " << ct << endl;
	ShowObject();
}

Useless::~Useless()
{
	//cout << "destructor called; objects left: " << --ct << endl;
	//cout << "deleted object:\n";
	ShowObject();
	delete[] pc;
}

Useless Useless::operator+(const Useless & f) const
{
	//cout << "Entering operator+()\n";
	Useless temp = Useless(n + f.n);
	for (int i = 0; i < n; i++)
	{
		temp.pc[i] = pc[i];
	}
	for (int i = n; i < temp.n; i++)
	{
		temp.pc[i] = f.pc[i - n];
	}

	//cout << "temp object:\n";
	//cout << "Leaving operator+()\n";

	return temp;
}

Useless & Useless::operator=(const Useless & f)
{
	cout << "copy assignment operator called:\n";

	if (this == &f)
	{
		return *this;
	}

	delete[] pc;
	n = f.n;
	pc = new char[n];
	for (int i = 0; i < n; i++)
	{
		pc[i] = f.pc[i];
	}

	return *this;
}

Useless & Useless::operator=(Useless && f)
{
	cout << "move assignment operator called:\n";

	if (this == &f)
	{
		return *this;
	}
	delete[] pc;

	n = f.n;
	pc = f.pc;
	f.n = 0;
	f.pc = nullptr;

	return *this;

}

void Useless::ShowData() const
{
	if (n == 0)
	{
		cout << "(object empty)";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << pc[i];
		}
	}

	cout << endl;
}



int Useless::ct = 0;

int main()
{

	{
		Useless one(10, 'x');
		Useless two = one + one;

		cout << "object one: ";
		one.ShowData();

		cout << "object two: ";
		two.ShowData();

		Useless three, four;
		cout << "three = one\n";
		three = one;
		cout << "now object three = ";
		three.ShowData();
		cout << "and object one = ";
		one.ShowData();

		cout << "four = one + two\n";
		four = one + two;
		cout << "now object four = ";
		four.ShowData();

		cout << "four = move(one)\n";
		four = move(one);
		cout << "now object four = ";
		four.ShowData();

		cout << "and object one = ";
		one.ShowData();

	}

	system("pause");
    return 0;
}

