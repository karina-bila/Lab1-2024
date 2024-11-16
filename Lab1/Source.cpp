#include <iostream>
#include <windows.h>
#include <forward_list>
#include <random>
#include <list>

using namespace std;

int main()
{
	//Встановлення кодування
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dis(-20.0, 20.0);

	//створюємо лінійний двозв’язний список з дійсних чисел з довжини заданої користувачем
	list<double> list;
	int size;

	cout << "Введіть розмір списку: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		list.push_back(dis(gen));
	}

	//Вивести список на екран
	cout << "Список: ";
	for (auto it = list.begin(); it != list.end(); it++)
	{

		cout << "\n" << *it << " ";
	}
	cout << "\n\n";

	//Вставити в список число 1.5 після кожного елемента з від’ємним значенням.
	for (auto it = list.begin(); it != list.end(); ) {
		if (*it < 0) {
			// Вставляємо 1.5 після поточного елемента
			it = list.insert(++it, 1.5);
		}
		else {
			++it; // Якщо елемент не від'ємний, просто переміщаємо ітератор
		}
	}

	//Вивести список на екран
	cout << "Список з доданим 1.5 після кожного від'ємного числа: ";
	for (auto it = list.begin(); it != list.end(); it++)
	{
		cout << "\n" << *it << " ";
	}
	cout << "\n\n";

	//Вилучити зі списку всі числа від 2 до 5.
	for (auto it = list.begin(); it != list.end(); /* без інкрементування тут*/) {
		if (*it >= 2 && *it <= 5) {
			it = list.erase(it);  // Видаляємо елемент і отримуємо новий ітератор на наступний елемент
		}
		else {
			++it;  // Якщо елемент не в діапазоні, переходимо до наступного
		}
	}

	//Вивести список на екран
	cout << "Список з видаленими числами від 2 до 5: ";
	for (auto it = list.begin(); it != list.end(); it++)
	{
		cout << "\n" << *it << " ";
	}



	system("pause");

	return 0;
}