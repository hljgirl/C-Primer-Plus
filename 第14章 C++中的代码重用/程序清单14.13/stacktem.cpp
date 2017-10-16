// �����嵥14.13.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include "stacktp.h"
#include "stacktp.cpp"

int main()
{
	using namespace std;
	{
		Stack<string> st;
		char ch;
		string po;

		cout << "Please enter A to add a purchase order, \n"
			<< "P to process a PO, or Q to quit.\n";

		while (cin >> ch && toupper(ch) != 'Q')
		{
			while (cin.get() != '\n')
			{
				continue;
			}

			if (!isalpha(ch))
			{
				cout << '\a';
				continue;
			}

			switch (ch)
			{
			case 'A':
			case 'a':
				cin >> po;
				if (st.isfull())
				{
					cout << "stack already full\n";
				}
				else
				{
					st.push(po);
				}
				break;
			case 'P':
			case 'p':

				if (st.isempty())
				{
					cout << "stack already empty\n";
				}
				else
				{
					st.pop(po);
					cout << "PO #" << po << " popped\n";
				}
				break;
			default:
				break;
			}

			cout << "Please enter A to add a purchase order,\n"
				<< "P to process a PO, or Q to quit.\n";
		}
	}

	cout << "Bye!\n";

	system("pause");
	return 0;
}