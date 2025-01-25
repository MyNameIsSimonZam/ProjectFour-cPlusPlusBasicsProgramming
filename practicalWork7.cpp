#include <iostream>

/* Задание 7. Меню ресторана
Что нужно сделать:
Напишите программу, которая выводит меню бизнес-ланча ресторана
в зависимости от дня недели. В меню есть общая часть, а есть уникальная,
которая зависит от дня недели. Пользователь должен ввести номер
дня недели — от 1 (понедельник) до 7 (воскресенье), а программа должна
вывести на экран день недели и меню этого дня.
Пример 1
Введите день недели (от 1 до 7): 4
Меню сегодня (четверг):
Гороховый суп
Салат «Цезарь» с креветками
Куриная ножка с пюре
Морс
Пример 2
Введите день недели (от 1 до 7): 2
Меню сегодня (вторник):
Харчо
Салат «Оливье»
Баварские колбаски с капустой
Морс
Что оценивается:
• Оптимальное использование условных операторов.
• Приветствуется обработка пользовательского ввода. */

void practicalWork7() {
	int dayNumber;
	std::cout << "************** Menu **************\n";
	std::cout << "Enter the day of week number (from 1 till 7): ";
	std::cin >> dayNumber;

	std::string day;
	std::string salad;
	std::string soup;

	if (dayNumber == 1) {
		day = "monday";
		salad = "Greek salad";
		soup = "fish soup";
	}
	else if (dayNumber == 2) {
		day = "tuesday";
		salad = "Caesar salad";
		soup = "chicken noodle soup";
	}
	else if (dayNumber == 3) {
		day = "wednesday";
		salad = "Cobb salad";
		soup = "tomato soup";
	}
	else if (dayNumber == 4) {
		day = "thursday";
		salad = "Caprese salad";
		soup = "lentil soup";
	}
	else if (dayNumber == 5) {
		day = "friday";
		salad = "Pasta salad";
		soup = "mushroom soup";
	}
	else if (dayNumber == 6) {
		day = "saturday";
		salad = "Asian salad";
		soup = "beef stew";
	}
	else if (dayNumber == 7) {
		day = "sunday";
		salad = "Fruit salad";
		soup = "pumpkin soup";
	}
	else {
		dayNumber = 0; "Failed. Restart and enter number only.";
	}
	
	if (dayNumber == 0) {
		std::cout << "Failed. Restart and enter number only.";
	}
	else {
		std::cout << "Today menu (" << day << "):\n";
		std::cout << salad << "\n" << soup << "\n" << "Grilled beef with beer\n";
	}

}
