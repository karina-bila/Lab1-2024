#include <iostream>
#include <windows.h>
#include <forward_list>
#include <random>

using namespace std;

int main()
{
	//Встановлення кодування
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dis(-50.0, 50.0);

	//Створюємо список
	cout << "Введіть довжину списку: ";
	int size;

	cin >> size;

	forward_list<double> list;

	for (int i = 0; i < size; i++)
	{
		double randValue = dis(gen);
		list.push_front(randValue);
	}

	//Виводимо список на екран
	cout << "Список: ";
	for (auto el : list)
	{
		cout << "\n" << el << " ";
	}

	// Ітератор на перший елемент списку
	auto it = list.begin();

	// Перевірка на порожність
	while (it != list.end() && std::next(it) != list.end()) {
		if (*it < 0) {
			// Якщо поточний елемент від'ємний, видаляємо наступний елемент
			it = list.erase_after(it); // erase_after оновлює ітератор
		}
		else {
			// Якщо поточний елемент не від'ємний, рухаємо ітератор вперед
			++it;
		}
	}

	//Виводимо список на екран після видалення
	cout << endl << "Список після видалення: ";
	for (auto el : list)
	{
		cout << "\n" << el << " ";
	}

	system("pause");

	return 0;
}