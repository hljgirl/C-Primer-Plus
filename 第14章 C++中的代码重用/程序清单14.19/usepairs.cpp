// �����嵥14.19.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "pairs.h"


using namespace std;

int main()
{
	{

		Pair<string, int> ratings[4] = 
		{
			Pair<string, int>("The Purpled Duck", 5),
			Pair<string, int>("Jaquie's Frisco Al Fresco", 4),
			Pair<string, int>("Cafe Souffle", 5),
			Pair<string, int>("Bertie Eats", 3)
		};


		int joints = sizeof(ratings) / sizeof(Pair<string, int>);

		cout << "Rating:\t Eatery\n";
		for (int i = 0; i < joints; i++)
		{
			cout << ratings[i].second() << ":\t"
				<< ratings[i].first() << endl;
		}

		cout << "Oops! Revised rating:\n";
		ratings[3].first() = "Bertie's Fab Eats";
		ratings[3].second() = 6;

		cout << endl;

		for (int i = 0; i < joints; i++)
		{
			cout << ratings[i].second() << ":\t"
				<< ratings[i].first() << endl;
		}


	}


	system("pause");
    return 0;
}

