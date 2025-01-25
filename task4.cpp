#include <iostream>
#include <cmath>

/*Задача 4. Барберы (необязательная).
В небольшом городке проживает 18 000 взрослых человек: 9 000 мужчин и 9 000 женщин.
Согласно традиции этого городка все мужчины обязаны носить бороду.
Один предприимчивый житель открыл сеть барбершопов, чтобы помочь мужчинам ухаживать за их бородами.
Однако он никак не может посчитать сколько всего специалистов-барберов для этого нужно.
Вам нужно написать программу которая будет рассчитывать сколько мужчин можно постричь
во всех барбершопах исходя из следующих данных:
* каждый из 9000 мужчин посещает барбершоп раз в месяц (30 дней)
* один барбер способен обслужить одного клиента за 1 час
* смена барбера — 8 часов
Программа должна спросить сколько мужчин проживает в городе и сколько всего барберов уже работает
во всех барбершопах, и посчитать сколько барберов нужно, и если их недостаточно — выдать сообщение об этом.
Если барберов достаточно — сказать и об этом.
Подсказка: в конструкции условия можно сравнивать не только переменную с числом, но и две переменные!
А еще - целые математические выражения. Например: if (a * b > c) …
*/

void task4() {
	int allMen = 0;
	int barbersHave = 0;
	int barberShift = 8;
	std::cout << "How many men live in the town?" << "\n";
	std::cin >> allMen;
	std::cout << "How many barbers work in the town?";
	std::cin >> barbersHave;
	int menForOneBarber = barberShift * 30;
	int barbersNeed = (allMen + menForOneBarber - 1) / menForOneBarber;
	std::cout << "We need " << barbersNeed << " barbers";

	if (barbersNeed > barbersHave) {
		std::cout << "We don't have enough barbers";
	}
	if (barbersNeed <= barbersHave) {
		std::cout << "We have enough barbers";
	}	




}

