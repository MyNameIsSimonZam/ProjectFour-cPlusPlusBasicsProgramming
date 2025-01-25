#include <iostream>

/* Задание 8. Зарплата (дополнительное задание)
Что нужно сделать:
В отделе маркетинга работают три сотрудника. Их зарплаты могут быть как разными,
так и одинаковыми. Напишите программу, которая вычисляет разницу между самой
высокой и самой низкой зарплатами сотрудников, а также среднее арифметическое
зарплат всех сотрудников отдела.
Пример
Введите зарплату первого сотрудника: 45 рублей
Введите зарплату второго сотрудника: 45 рублей
Введите зарплату третьего сотрудника: 45 рублей
-----Считаем-----
Самая высокая зарплата в отделе: 45 рублей
Разница между самой высокой и самой низкой зарплатой в отделе: 0 рублей
Средняя зарплата в отделе: 45 рублей
Что оценивается:
• Правильность нахождения разницы зарплат.
• Оптимальность нахождения разницы зарплат. */

void practicalWork8() {
	int a;
	int b;
	int c;
	std::cout << "This program count average and show difference between extremes" << "\n";
	std::cout << "Give me first employer's salary: ";
	std::cin >> a;
	std::cout << "Give me second employer's salary: ";
	std::cin >> b;
	std::cout << "Give me third employer's salary: ";
	std::cin >> c;
	std::cout << "-----Counting-----" << "\n";
	int avg = (a + b + c) / 3;

	if (a > b && a > c) {
		std::cout << "The biggest salary is: " << a << "\n";
	}
	else if (a > b && a < c) {
		std::cout << "The biggest salary is: " << c << "\n";
	}
	else if (a < b && b > c) {
		std::cout << "The biggest salary is: " << b << "\n";
	}
	else if (a < b && b < c) {
		std::cout << "The biggest salary is: " << c << "\n";
	}

	std::cout << "Average salary: " << avg;
}
