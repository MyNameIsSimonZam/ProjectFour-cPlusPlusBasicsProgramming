#include <iostream>

/* Задание 5. Кратность числа
Что нужно сделать:
Напишите программу, которая проверяет, делится ли одно число на другое без остатка.
Пример 1
Введите первое число: 45
Введите второе число: 5
-----Проверяем-----
Да, 45 делится на 5 без остатка!
Пример 2
Введите первое число: 21
Введите второе число: 8
-----Проверяем-----
Нет, 21 не делится на 8 без остатка!
Советы и рекомендации:
• Не забудьте про отрицательные числа.
• Учитывайте правила деления чисел.
Что оценивается:
• Корректная работа программы. */

void practicalWork5() {
	int a = 0;
	int b = 0;
	std::cout << "This program checks, is the first number divisible by the second without remainder?" << "\n";
	std::cout << "Give me first number: ";
	std::cin >> a;
	std::cout << "Give me second number: ";
	std::cin >> b;
	int checker = a % b;
	std::cout << "-----Checking-----" << "\n";
	if (abs(checker) == 1) {
		std::cout << "No " << a << " don't devide by the " << b << " whithout remainder" "\n";
	}
	else {
		std::cout << "Yes " << a << " devidessd by the " << b << " whithout remainder" "\n";
	}
}
