// �����嵥11.19.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "stonewt1.h"


int main()
{
	using std::cout;
	using STONEWT::Stonewt;
	{
		Stonewt poppins(9, 2.8);
		double p_wt = poppins;

		cout << "Convert to double => ";
		cout << "Poppins: " << p_wt << " pounds.\n";

		cout << "Convert to int => ";
		cout << "Poppins: " << (int)poppins << " pounds.\n";
	}
	system("pause");
    return 0;
}

