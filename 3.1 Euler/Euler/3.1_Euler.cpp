// Euler.cpp : Définit le point d'entrée pour l'application console.
// Author: Dylan Von Arx
// Date: 14.09.2017
/* Exercice: 3.1 - Formative
	À faire pour le 24.09.2017
	Create a program that outputs the sum of the multiples of 3 or 5 under 1000.
	For example, for the sum of the multiples of 3 or 5 under 10, we have 3, 5, 6, 9 and the sum of those numbers is 23. */

#include "stdafx.h"
#include <iostream>

void Euler(int tmp_number) {
	std::cout << "The sum of multiples of 3 and 5:\n";
	int sum = 0;
	for (int i = 1; i < tmp_number; i++){
		if (i % 3 == 0 || i % 5 == 0){
			std::cout << i << " ";
			sum += i;
		}
	}
	std::cout << "\nThe sum of multiples of " << tmp_number << " from 1 to 1000 is " << sum <<"\n";
}
int main(){	
	Euler(1000);
	system("pause");
	return 0;
}

