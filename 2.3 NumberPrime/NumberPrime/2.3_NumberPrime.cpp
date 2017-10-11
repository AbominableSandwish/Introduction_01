// NumberPrime.cpp : Définit le point d'entrée pour l'application console.
// Author: Dylan Von Arx
// Date: 14.09.2017
// Exercice: Create a program that takes an integer as text input and then print if the number is prime or not and repeat the question until the user writes -1.


#include "stdafx.h"
#include <iostream>

int control() {
	int tmp_playernumber = 0;
	std::cout << "Is this number a prime number: ";
	std::cin >> tmp_playernumber;
	while (std::cin.fail() || tmp_playernumber < -1) {
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cout << "Is this number a prime number: ";
		std::cin >> tmp_playernumber;
	}
	return tmp_playernumber;
}

bool prime(int tmp_playernumber) {
	for (int i = 2; i <= tmp_playernumber / 2; ++i){
		if (tmp_playernumber % i == 0){
			return false;
			break;
		}
	}
		return true;
}

int main(){
	int player_number = 0;
	player_number = control();
	if (player_number!= int(-1)) {
		if (prime(player_number) && player_number > 1)
			std::cout << "Yes\n";
		else
			std::cout << "No\n";
		return main();
	}
	system("pause");
    return 0;
}

