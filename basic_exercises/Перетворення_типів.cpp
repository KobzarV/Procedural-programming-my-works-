#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

/*ЗАДАНИЕ 1
Пользователь вводит с клавиатуры время 
в секундах. Необходимо написать программу, которая переведет введенные
пользователем секунды в часы, минуты, секунды и выводит
их на экран.*/

	cout << "Завдання 4.1\n\n";
	double sec, min, hour;
	cout << "Введіть час в секундах:" << endl;
	cin >> sec;
	min = sec / 60;
	hour = min / 60;
	cout << "Час в секундах = " << sec << endl;
	cout << "Час в хвилинах = " << min << endl;
	cout << "Час в годинах = " << hour << endl;

/*ЗАДАНИЕ 2
Написать программу, которая преобразует введенное с
клавиатуры дробное число в денежный формат. Например,
число 12,5 должно быть преобразовано к виду — 12 долларов
и 50 центов.*/

	cout << "Завдання 4.2\n\n";
	double cent, number;
	int dollar;
	cout << "Введіть дробове число:" << endl;
	cin >> number;
	dollar = number;
	cent = (number-dollar)*100;
	cout << dollar << " долар(-а;-ів) " << cent << " цент(-а;-ів)" << endl;

/*ЗАДАНИЕ 3
Написать программу, которая преобразует введенное
пользователем количество дней в количество полных недель
и оставшихся дней. Например, пользователь ввел 17 дней,
программа должна вывести на экран 2 недели и 3 дня.*/

	cout << "Завдання 4.3\n\n";
	int days;
	float week, day;
	cout << "Введи кількість днів:"<<endl;
	cin >> days;
	week = days / 7;
	day = days % 7;
	cout << "Кількість тижнів : " << int(week) << endl << "Кількість днів : " << day << endl;
}
