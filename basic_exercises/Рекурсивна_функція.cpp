#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

void PrintLine(int N) 
{
	if (N == 0) return;
	PrintLine(N - 1);
	cout << "* ";
}

int Month_days (int month, int all_days, int day)
{
	enum mon { jan = 31, feb = 28, mar = 31, apr = 30, may = 31, jun = 30, jul = 31, aug = 31, sep = 30, okt = 31, nov = 30, dec = 31 };
	switch (month)
	{
	case 1:
		all_days = day;
		break;
	case 2:
		all_days = day + jan;
		break;
	case 3:
		all_days = day + jan + feb;
		break;
	case 4:
		all_days = day + jan + feb + mar;
		break;
	case 5:
		all_days = day + jan + feb + mar + apr;
		break;
	case 6:
		all_days = day + jan + feb + mar + apr + may;
		break;
	case 7:
		all_days = day + jan + feb + mar + apr + may + jun;
		break;
	case 8:
		all_days = day + jan + feb + mar + apr + may + jun + jul;
		break;
	case 9:
		all_days = day + jan + feb + mar + apr + may + jun + jul + aug;
		break;
	case 10:
		all_days = day + jan + feb + mar + apr + may + jun + jul + aug + sep;
		break;
	case 11:
		all_days = day + jan + feb + mar + apr + may + jun + jul + aug + sep + okt;
		break;
	case 12:
		all_days = day + jan + feb + mar + apr + may + jun + jul + aug + sep + okt + nov;
		break;
	}
	return all_days;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*1) Написать рекурсивную функцию, которая выводит N звезд в ряд,
 число N задает пользователь. Проиллюстрируйте работу функции примером.*/

	cout << "Task 1" << endl;
	int N;
	cout << "N = "; cin >> N;
	PrintLine(N);



/*2) Написать функцию, которая принимает две даты и возвращает 
количество дней между ними с учётом високосных годов.*/

	cout << "Task 2" << endl;
	int day_start, month_start, year_start, all_days_start = 0;
	int day_end, month_end, year_end, all_days_end = 0;
	int rez, num_years = 0;
	cout << "Введи початкову дату (день;місяць;рік)" << endl;
	cin >> day_start >> month_start >> year_start;
	cout << "Введи кінцеву дату (день;місяць;рік)" << endl;
	cin >> day_end >> month_end >> year_end;
	all_days_start = Month_days(month_start, all_days_start, day_start);
	all_days_end = Month_days(month_end, all_days_end, day_end);
	for (int i = year_start; i < year_end; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			num_years += 366;

		}
		else
		{
			num_years += 365;
		}
	}
	rez = all_days_end - all_days_start + num_years;
	cout << "Rez = " << rez << endl;
}
