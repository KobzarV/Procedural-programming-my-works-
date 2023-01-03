#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Калькулятор" << endl;
	while (true)
	{
		float number_1 = 0, number_2 = 0, result = 0;
		int choise = 0, exit = 0;
		cout << "Введіть перше число = ";
		cin >> number_1;
		cout << "Виберіть номер арифметичної операції :\n\t1. +;\n\t2. -;\n\t3. *;\n\t4. /;" << endl;
		cin >> choise;
		cout << "Введіть друге число = ";
		cin >> number_2;
		if (choise == 1)
		{
			result = number_1 + number_2;
			cout << number_1 << '+' << number_2 << '=' << result << endl;
		}
		else if (choise == 2)
		{
			result = number_1 - number_2;
			cout << number_1 << '-' << number_2 << '=' << result << endl;
		}
		else if (choise == 3)
		{
			result = number_1 * number_2;
			cout << number_1 << '*' << number_2 << '=' << result << endl;
		}
		else if (choise == 4)
		{
			result = number_1 / number_2;
			cout << number_1 << '/' << number_2 << '=' << result <<endl;
		}
		else
		{
			cout << "Виберіть номер операції із списку!" << endl;
		}
		cout << "0 - вийти; 1 - наступний приклад" << endl;
		cin >> exit;
		if (exit == 0) { break; }
	}
}
