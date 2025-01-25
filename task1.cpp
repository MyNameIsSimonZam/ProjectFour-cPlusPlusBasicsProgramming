#include <iostream>

/*Задача 1. Калькулятор скидки.
Вы покупаете 3 товара в магазине.Если сумма вашего чека превышает 10 000 руб,
вам будет сделана скидка 10 % .Напишите программу которая запрашивает 3
стоимости товара и вычисляет сумму чека*/

void task1() {
	int product1 = 0;
	int product2 = 0;
	int product3 = 0;

	std::cout << "This program can calculate discount for you";
	std::cout << "Give me coast of the first product: ";
	std::cin >> product1;
	std::cout << "Give me coast of the second product: ";
	std::cin >> product2;
	std::cout << "Give me coast of the third product: ";
	std::cin >> product3;

	int receipt = product1 + product2 + product3;

	if (receipt > 10000) {
		receipt *= 0.9;
	}
	
	std::cout << "The receipt amount is: " << receipt;

}

