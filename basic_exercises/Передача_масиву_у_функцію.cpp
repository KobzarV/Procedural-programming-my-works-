#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

void Arefmetic(int arr[], int size)
{
	float sum = 0, res;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	res = sum / size;
	cout << "Середнє арифметичне масиву = " << res << endl;
}

void Count_elements(int arr [], int size)
{
	int positiv = 0, negativ = 0, nul = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) { positiv++; }
		else if (arr[i] < 0) { negativ++; }
		else { nul++; }
	}
	cout << "Кількість додатніх елементів - " << positiv << endl;
	cout << "Кількість від'ємних елементів - " << negativ << endl;
	cout << "Кількість нульових елементів - " << nul << endl;
}

bool Is_simple(int num)
{
	int count = 0;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) { count++; }
	}
	if (count == 0) { return true; }
	else { return false; }
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*Задание 1. Написать функцию, определяющую среднее
арифметическое элементов передаваемого ей массива.*/
	/*cout << "Завдання 1" << endl;
	const int n = 10;
	int mas[n];
	srand(time(0));
	cout << "Масив" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = -15 + rand() % 31;
		cout << mas[i] << ' ';
	}
	cout << endl;
	Arefmetic(mas, n);*/



/*Задание 2. Написать функцию, определяющую количество
положительных, отрицательных и нулевых элементов
передаваемого ей массива.*/
	/*cout << "Завдання 2" << endl;
	const int n = 12;
	int mas[n];
	srand(time(0));
	cout << "Масив" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = -15 + rand() % 31;
		cout << mas[i] << ' ';
	}
	cout << endl;
	Count_elements(mas, n);*/



/*Задание 3. Написать функцию, которая проверяет, явля-
ется ли переданное ей число простым? Число называется 
простым, если оно делится без остатка только на себя 
и на единицу.
*/
	cout << "Завдання 3 (прості числа)" << endl;
	int number, choise;
	while (true)
	{
		cout << "Введіть число = "; cin >> number;
		cout << "Введене число просте? (1 - так; 0 - ні) " << endl << Is_simple(number) << endl;
		cout << "Вийти?\n(1 - так; 2 - ні)" << endl;
		cin >> choise;
		if (choise == 1) { break; }
	}
}