#include <iostream>
#include <Windows.h>

using namespace std;

auto root(double a, int b)->decltype(a + b)
{
	return pow(a, 1 / b);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*1) Создать и инициализировать 3 переменные с именами x, y и z - одна с типом char, 
другая с типом short, третья - с типом double.
С помощью ключевого слова auto создать переменную такого же типа, 
какой тип имеет выражение a + b + c.
Инициализировать эту переменную значением a + b + c. 
Вывести значение этой переменной на экран.*/
	/*cout << "Task #1" << endl;
	char x = '0';
	short y = 4;
	double z = 13.345;
	auto rez(x + y + z);
	cout << rez << " - "<< typeid(rez).name() << endl;*/

	/*2) Создать и инициализировать 3 переменные с именами 
x, y и z - одна с типом char, другая с типом short, третья - с типом double.
С помощью decltype создать переменную такого же типа, какой тип имеет выражение a + b + c.
Инициализировать эту переменную значением a + b + c. Вывести значение этой переменной на экран.*/
	/*cout << "Task #2" << endl;
	char x = '7';
	short y = 15;
	double z = 111.34;
	decltype (x + y + z) r = x + y + z;
	cout << r << " - " << typeid(r).name() << endl;*/

	/*3) Придумать любую функцию, использующую хвостовой возвращаемый тип. 
Вызвать эту функцию в main()*/
	cout << "Task #3" << endl;
	double x;
	int y;
	cout << "Введіть число, яке буде під знаком степеня" << endl; cin >> x;
	cout << "Введіть степінь кореня" << endl; cin >> y;
	cout << "x ^ 1/y = " << root(x, y) << endl;
}