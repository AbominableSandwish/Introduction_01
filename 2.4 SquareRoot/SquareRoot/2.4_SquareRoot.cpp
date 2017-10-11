// SquareRoot.cpp : Définit le point d'entrée pour l'application console.
// Author: Dylan Von Arx
// Date: 14.09.2017
// Exercice: Create a program that takes a double floating number as input and print the square root of the same number. If the number is negative, the program should say an error message.


#include "stdafx.h"
#include <iostream>
#include <cmath>


int main()
{
	double number_player, squareroot_number = 0;
	std::cout << "Is this number a square root number: ";
	std::cin >> number_player;
	while (std::cin.fail() || number_player < 0) {
		std::cout << "Error\n";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cout << "Is this number a square root number: ";
		std::cin >> number_player;
	}
	squareroot_number = sqrt(number_player);
	std::cout <<"square root of the same number: " << squareroot_number << "\n";
	main();
	system("pause");
    return 0;
}

