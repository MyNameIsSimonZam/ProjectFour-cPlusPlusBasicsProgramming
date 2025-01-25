#include <iostream>

/*Задание 2. Складываем в уме
Что нужно сделать :
Напишите программу которая проверяет то, как вы умеете складывать два числа в уме.
Программа должна выводить два разных сообщения на верный и неверный ответ пользователя.
В последнем случае надо показывать правильный результат.
Пример - 1
Введите первое число : 45
Введите второе число : 70
Введите их сумму : 115
---- - Проверяем---- -
Верно!
Пример - 2
Введите первое число : 45
Введите второе число : 70
Введите их сумму : 125
---- - Проверяем---- -
Ошибка!Верный результат : 115
Что оценивается :
Корректность использования условных конструкций*/

void practicalWork2() {
	int a = 0;
	int b = 0;
	int result = 0;
	std::cout << "This program checks how you count in your mind";
	std::cout << "Give me first number: ";
	std::cin >> a;
	std::cout << "Give me second number: ";
	std::cin >> b;
	std::cout << "Give me second number: ";
	std::cin >> result;
	std::cout << "-----Проверяем-----" << "\n";
	if (a + b == result) {
		std::cout << "Excellent! You are right!" << "\n";
	}
	else {
		std::cout << "Wrong! Right result is: " << result << "\n";
	}
}
