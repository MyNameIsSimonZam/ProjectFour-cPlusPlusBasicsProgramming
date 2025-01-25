#include <iostream>

/* Задание 3. Проверка на чётное число
Что нужно сделать:
Напишите программу, которая проверяет, чётное ли число ввел пользователь.
Пример: int remainder = x % 2 (вычисляет остаток от деления x на 2).
Пример
Введите число: 28
-----Проверяем-----
Число 28 — чётное
Советы и рекомендации:
• Для проверки чётности используйте оператор %. Он вычисляет остаток от деления двух чисел.
• Не забудьте про отрицательные числа. */

void practicalWork3() {
	int a = 0;
	std::cout << "This program checks number parity" << "\n";
	std::cout << "Give me your number: ";
	std::cin >> a;
	int remainder = a % 2;
	std::cout << remainder << "\n";
	if (abs(remainder) == 1) {
		std::cout << "Number " << a << " - is odd" << "\n";
	}
	else {
		std::cout << "Number " << a << " - is even" << "\n";
	}
}
