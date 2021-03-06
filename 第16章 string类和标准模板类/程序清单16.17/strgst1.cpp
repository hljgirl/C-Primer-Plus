// 程序清单16.17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string letters;
	cout << "Enter the letter grouping (\"quit\" to quit):";

	while (cin >> letters && letters != "quit")
	{
		cout << "Permutations of " << letters << endl;
		sort(letters.begin(), letters.end());
		cout << letters << endl;
		while (next_permutation(letters.begin(), letters.end()))
		{
			cout << letters << endl;
		}

		cout << "Enter next sequence (\"quit\" to quit):";

	}

	cout << "Done!\n";
	system("pause");
    return 0;
}

