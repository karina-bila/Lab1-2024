#include <iostream>
#include <windows.h>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	//Встановлення кодування
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Завдання 1 \n" << endl;
	//знайти найбільший елемент в одновимірному масиві використовуючи вказівники
	int size;
	cout << "Введіть розмір масиву: ";
	cin >> size;
	int* arr = new int[size];
	cout << "Введіть елементи масиву: ";
	for (int i = 0; i < size; i++)
	{
		cout << "Введіть " << i + 1 << " елемент: ";
		cin >> arr[i];
	}

	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Найбільший елемент масиву: " << max << endl;
	delete[] arr;

	cout << "\nЗавдання 2 \n" << endl;
	//створити двовимірний масив з vector і вивести його на екран як матрицю
	int rows, cols;
	cout << "Введіть кількість рядків: ";
	cin >> rows;
	cout << "Введіть кількість стовпців: ";
	cin >> cols;
	vector<vector<int>> matrix(rows, vector<int>(cols));

	//заповнення матриці випадковими числами від -100 до 100

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = rand() % 201 - 100;
		}
	}

	//виведення матриці на екран
	cout << "Матриця: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	//підраховуємо середнє арифметичне всіх від'ємних елементів матриці
	int count = 0;
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] < 0)
			{
				count++;
				sum += matrix[i][j];
			}
		}
	}
	if (count == 0)
	{
		cout << "В матриці немає від'ємних елементів" << endl;
	}
	else
	{
		cout << "Середнє арифметичне від'ємних елементів матриці: " << (double)sum / count << endl;
	}

	system("pause");

	return 0;
}