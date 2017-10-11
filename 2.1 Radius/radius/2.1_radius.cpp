// radius.cpp : Définit le point d'entrée pour l'application console.
// Author: Dylan Von Arx
// Date: 14.09.207
// Excercice :Write a program that asks the user the radius of a circle and outputs the perimeter and the area.

#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#define _MIN_RADIUS 0



int main(){
	int radius = 0;
	std::cout << "Please, enter the radius of circle: ";
	std::cin >> radius;
	while (std::cin.fail() || radius < _MIN_RADIUS) {
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cout << "Please, enter the radius of circle : ";
		std::cin >> radius;
	}
	std::cout << "Area of circle is " << M_PI * (radius * radius) << "\nPerimeter of circle is " << (M_PI)* radius << "\n";
	system("pause");
	return 0;
}

