// �����嵥13.1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

#include "tabtenn0.h"


int main()
{
	{
		TableTennisPlayer player1("Chuck", "Blizzard", true);
		TableTennisPlayer player2("Tara", "Boomdea", false);

		player1.Name();
		if (player1.HasTable())
		{
			cout << ": has a table.\n";
		}
		else
		{
			cout << ": hasn't a table.\n";

		}

		player2.Name(); 
		if (player2.HasTable())
		{
			cout << ": has a table.\n";
		}
		else
		{
			cout << ": hasn't a table.\n";
		}
	}

	system("pause");
    return 0;
}


