#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

struct Country {
	string name;
	string capital;
	int population;
	double area;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int countryCount = 10;

	//array of countries
	Country countries[10] = {
		{"Україна", "Київ", 42000000, 603549},
		{"Польща", "Варшава", 38000000, 312696},
		{"Німеччина", "Берлін", 83000000, 357386},
		{"Франція", "Париж", 67000000, 551695},
		{"Іспанія", "Мадрид", 47000000, 505992},
		{"Італія", "Рим", 60000000, 301340},
		{"Великобританія", "Лондон", 66000000, 243610},
		{"Канада", "Оттава", 39000000, 9984670},
		{"Китай", "Пекін", 1400000000, 9596961},
		{"США", "Вашингтон", 330000000, 9833520}
	};

	//введення з клавіатури даних в масив, що складається з десяти елементів типу Country
	// замість введення з клавіатури використовуємо вже введені дані
	//Country countries[countryCount];
	/**
	for (int i = 0; i < countryCount; i++) {
		//очищення консолі
		system("cls");
		Country* country = &countries[i];

		//введення даних
		cout << "Введіть назву країни: ";
		cin >> country->name;
		cout << "Введіть столицю країни: ";
		cin >> country->capital;
		cout << "Введіть чисельність населення країни: ";
		cin >> country->population;
		cout << "Введіть площу країни: ";
		cin >> country->area;
	}
	*/


	//впорядкування записів у масиві за зростанням площі країни
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (countries[j].area > countries[j + 1].area) {
				Country temp = countries[j];
				countries[j] = countries[j + 1];
				countries[j + 1] = temp;
			}
		}
	}

	//виведення на екран даних про всі країни чисельність населення у яких не менше деякої заданої величини
	// Якщо таких немає – вивести відповідне повідомлення.
	int population;
	cout << "Введіть чисельність населення для фільтрації: ";
	cin >> population;
	bool isFound = false;
	for (int i = 0; i < 10; i++) {
		Country* country = &countries[i];
		if (country->population >= population) {
			cout << "Країна: " << country->name << endl;
			cout << "Столиця: " << country->capital << endl;
			cout << "Чисельність населення: " << country->population << endl;
			//площу вивести як string
			string area = to_string(country->area);
			cout << "Площа: " << area << endl;

			cout << endl;
			isFound = true;
		}
	}
	if (!isFound) {
		cout << "Країн з чисельністю населення більше " << population << " не знайдено" << endl;
	}

	system("pause");

	return 0;


}