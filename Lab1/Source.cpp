#include <iostream>
#include <windows.h>
#include <queue>

using namespace std;

int main()
{
	//Встановлення кодування
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//створити чергу цілих чисел
	queue<int> q;

	//додавання елементів у чергу з користувацьким вибором
	int n;
	cout << "Введіть кількість елементів черги: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cout << "Введіть " << i + 1 << " елемент черги: "; cin >> a;
		q.push(a);
	}

	//знайти найменший елемент черги

	int min = q.front();
	while (!q.empty())
	{
		if (q.front() < min)
			min = q.front();
		q.pop();
	}

	cout << "Найменший елемент черги: " << min << endl;

	system("pause");

	return 0;
}