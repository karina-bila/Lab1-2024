#include <iostream>
#include <windows.h>
#include <stack>

using namespace std;

int main()
{
	//Встановлення кодування
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//ініціалізація змінних
	int n, sum = 0;

	//Введення кількості елементів стеку
	cout << "Введіть кількість елементів стеку: ";
	cin >> n;

	//Створення стеку
	stack<int> stack;

	//Введення елементів стеку
	for (int i = 0; i < n; i++)
	{
		int value;
		cout << "Введіть " << i + 1 << " елемент: ";
		cin >> value;
		stack.push(value);
	}

	//Обчислення суми непарних елементів стеку
	while (!stack.empty())
	{
		int value = stack.top();
		stack.pop();

		if (value % 2 != 0)
		{
			sum += value;
		}
	}

	//Виведення результату
	cout << "Сума непарних елементів стеку: " << sum << endl;

	system("pause");

	return 0;
}