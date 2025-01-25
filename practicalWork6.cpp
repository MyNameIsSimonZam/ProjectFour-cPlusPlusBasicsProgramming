#include <iostream>

/* Что нужно сделать:
Помните задачу про барберов из видео 4.3? Кстати, именно оператор % мог помочь нам с барберами.
Перепишите программу про них с его использованием для проверки на проблему с целочисленным делением.
Напишите программу, которая отвечает на вопрос хватает ли барберов в данном
городе если задано число людей и число барберов, а так же указано, что
один барбер работает 8 часов в день, на одного клиента тратит 1 час
а каждый клиент приходит раз в месяц. Воспользуйтесь для решения проблемы
целочисленного деления оператором %
Что оценивается:
Программа должна всегда корректно работать и не вылетать. */

void practicalWork6() {
    int menCount;
    int barbersCount;

    std::cout << "************** Барбершоп-калькулятор **************\n";
    std::cout << "Введите число мужчин в городе: ";
    std::cin >> menCount;

    std::cout << "Сколько уже барберов удалось нанять? ";
    std::cin >> barbersCount;

    // Сколько человек успеет постричь один барбер за одну смену?
    int menPerBarber = 8; // один человек в час, смена 8 часов
    // Сколько человек успеет постричь барбер за месяц?
    int menPerBarberPerMonth = menPerBarber * 30;
    std::cout << "Один барбер стрижет столько клиентов в месяц: "
        << menPerBarberPerMonth << "\n";

    // Сколько нужно барберов чтобы постричь menCount человек в месяц?
    int requiredBarbersCount = menCount / menPerBarberPerMonth;
    if (menCount % menPerBarberPerMonth != 0) {  // ИЗМЕНЕНИЕ С ПРИМЕНЕНИЕМ ОПЕРАТОРА %
        requiredBarbersCount += 1;
    }
    std::cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";

    // Сколько человек успеют постричь requiredBarbersCount барбера за месяц?
    std::cout << requiredBarbersCount << " барбера могут постричь "
        << requiredBarbersCount * menPerBarberPerMonth
        << " мужчин за месяц\n";

    // Сравниваем с количеством имеющихся барберов
    if (requiredBarbersCount > barbersCount) {
        std::cout << "Нужно больше барберов!!!\n";
    }

    if (requiredBarbersCount <= barbersCount) {
        std::cout << "Барберов хватает!!!\n";
    }
}
