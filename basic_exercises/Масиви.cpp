#include <iostream>
#include <Windows.h>
#include <random>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*ЗАДАНИЕ 1
В одномерном массиве, заполненном случайными числами,
определить минимальный и максимальный элементы.*/
	/*cout << "Завдання №1" << endl;
	int const n = 10;
	int mas[n], max, min;
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		mas[i] = -10 + rand() % 21;
		cout << mas[i] << " ";
	}
	max = mas[0]; min = mas[0];
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > max) { max = mas[i]; }
		if (mas[i] < min) { min = mas[i]; }
	}
	cout << "\n Max = " << max << "\nMin = " << min << endl;*/



/*ЗАДАНИЕ 2
В одномерном массиве, заполненном случайными числами
в заданном пользователем диапазоне, найти сумму элементов,
значения которых меньше указанного пользователем.*/
	/*cout << "Завдання №2" << endl;
	int const N = 10;
	int mas[N], a, b, num, sum = 0;
	srand(time(0));
	cout << "Введіть діапазон елементів \nВід "; cin >> a;
	cout << "До "; cin >> b;
	if (a > b) 
	{
		int s;
		s = a; a = b; b = s;
	}
	cout << "Введіть число - "; cin >> num;
	for (int i = 0; i < N; i++)
	{
		mas[i] = a + rand() % (b-a+1);
		cout << mas[i] << " ";
	}
	for (int i = 0; i < N; i++)
	{
		if (mas[i] <= num)
		{
			sum += mas[i];
		}
	}
	cout << "\nСума елементів менших за " << num << " = " << sum << endl;*/



/*ЗАДАНИЕ 3
Пользователь вводит прибыль фирмы за год (12 месяцев).
Затем пользователь вводит диапазон (например, 3 и 6 — поиск
между 3-м и 6-м месяцем). Необходимо определить месяц,
в котором прибыль была максимальна и месяц, в котором
прибыль была минимальна с учетом выбранного диапазона.*/
	/*cout << "Завдання №3" << endl;
	int const m = 12;
	int mas3[m], max, min, min_i=0, max_i=0, x, y, i;
	while (true)
	{
		cout << "Введіть діапазон \nВід "; cin >> x;
		cout << "До "; cin >> y;
		if (x > y)
		{
			int s;
			s = x; x = y; y = s;
		}
		if (x > 0 && y <= 12 && x!=y) { break; }
		else { cout << "Введіть номер місяця!!!(1-12)" << endl; }
	}
	for (i = 0; i < m; i++)
	{
		++i;
		cout << "Введіть прибуток фірми за " << i-- << " місяць = ";
		cin >> mas3[i];
	}
	max = mas3[x];
	min = mas3[x];
	for (i = x-1; i < y; i++)
	{
		if (mas3[i] > max)
		{
			max = mas3[i];
			max_i = i;
		}
	}
	for (i = x-1; i < y; i++)
	{
		if (mas3[i] < min)
		{
			min = mas3[i];
			min_i = i;
		}
	}
	cout << "Місяць " << ++max_i << " найприбутковіший (" << max << " $)" << endl;
	cout << "Місяць " << ++min_i << " найменш прибутковий (" << min << " $)" << endl;*/



/*ЗАДАНИЕ 4
В одномерном массиве, состоящем из N вещественных
чисел вычислить:
+ Сумму отрицательных элементов.
+ Произведение элементов, находящихся между min и max
элементами.
+ Произведение элементов с четными номерами.
+ Сумму элементов, находящихся между первым и последним отрицательными элементами.*/
	cout << "Завдання №4" << endl;
	int const n = 10;
	int mas[n], max, min, sum1 = 0, min_max = 1, dob = 1;
	int last, first, first_last = 0, max_i=0, min_i=0;
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		mas[i] = -10 + rand() % 21;
		cout << mas[i] << " ";
	}
	max = mas[0]; min = mas[0];
	for (int i = 0; i < n; i++) 
	{ 
		if (mas[i] > max) { max = mas[i]; max_i = i; }
		if (mas[i] < min) { min = mas[i]; min_i = i; }
	}
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0) { sum1 += mas[i]; }
		if (i % 2 == 0)
		{
			dob *= mas[i];
		}
	}
	for (int i = n - 1; i >= 0; i--) { if (mas[i] < 0) { last = i;  break; } }
	for (int i = 0; i < n; i++) { if (mas[i] < 0) { first = i; break; } }
	for (int i = first; i <= last; i++) { first_last += mas[i]; }
	for (int i = min_i; i <= max_i; i++)
	{
		min_max *= mas[i];
	}
	cout << "\nСума від'ємних елементів масиву = " << sum1 << endl;
	cout << "Добуток елементів масиву між максимальним і мінімальним елементом = " << min_max << endl;
	cout << "Добуток елементів масиву з парними номерами = " << dob << endl;
	cout << "Сума елементів масиву між першим і останнім від'ємним елементом = " << first_last << endl;
}