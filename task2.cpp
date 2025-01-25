#include <iostream>

/*Задача 2. Автомобиль.
Автомобиль выехал из Москвы в Рязань. Напишите программу, которая вычисляет сумеет ли добраться
автомобиль до Рязани за два часа с заданной пользователем средней скоростью движения.
Программа должна выводить вычисленное расстояние,
а если автомобиль сумеет добраться до Рязани, - сообщение “Вы приехали”.
Расстояние между городами - 200 км.*/

void task2() {
	int speed = 0;
	int distantion = 200;
	int time = 2;

	std::cout << "This program can tell you will you come in Ryazan on time or not?";
	std::cout << "Give me your speed: ";
	std::cin >> speed;

	if (speed >= 100) {
		std::cout << "Вы приехали";
	}
	if (speed < 100) {
		std::cout << "You'll not able to come on time";
	}
	}

