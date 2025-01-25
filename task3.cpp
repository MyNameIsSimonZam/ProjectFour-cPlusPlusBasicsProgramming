#include <iostream>

/*#include <iostream>

/*Задача 3. Модуль числа.
Напишите программу, которая вычисляет модуль числа.
Подсказка: чтобы обратить знак числа в переменной ‘x’ надо писать вот так: x = - x.*/

void task3() {
	int count = 0;

	std::cout << "This program make a module";
	std::cout << "Give me your nomber: ";
	std::cin >> count;
	std::cout << "Your number is : " << count << "\n";
	std::cout << "Your number module is : " << abs(count) << "\n";

}

