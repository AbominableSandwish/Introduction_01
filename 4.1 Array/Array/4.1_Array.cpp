// 4.1Array.cpp : Définit le point d'entrée pour l'application console.


#include "stdafx.h"
#include <iostream>
#include <array>

const int SIZE_ARRAY = 5;

int main()
{
	double tmp_average = 0;
	std::array<int, SIZE_ARRAY> tnumber;
	std::cout << "----------------------------------------------------------\n" << "- Entrez 5 nombre different afin de remplir mon tableau! -\n" << "----------------------------------------------------------\n";
	for (int i = 0; i < SIZE_ARRAY; i++)
		std::cin >> tnumber[i];
	std::cout << "|";
	for (int i = 0; i < SIZE_ARRAY; i++) {
		std::cout << "  " << tnumber[i] << "  |";
		tmp_average += tnumber[i];
	}
	std::cout << "\n= Average: " << tmp_average/tnumber.size() << " =\n";
	system("pause");
	return 0;
}

