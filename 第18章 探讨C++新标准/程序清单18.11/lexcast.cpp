// �����嵥18.11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

using namespace std;

int main()
{
	cout << "Enter your weight: ";
	float weight;
	cin >> weight;

	string gain = "A 10% increase raises ";
	string wt = boost::lexical_cast<string>(weight);

	gain = gain + wt + " to ";
	weight = 1.1*weight;

	gain = gain + boost::lexical_cast<string>(weight) + ".";
	

	cout << gain << endl;


	system("pause");
    return 0;
}

