#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "�����������" << endl;
	while (true)
	{
		float number_1 = 0, number_2 = 0, result = 0;
		int choise = 0, exit = 0;
		cout << "������ ����� ����� = ";
		cin >> number_1;
		cout << "������� ����� ����������� �������� :\n\t1. +;\n\t2. -;\n\t3. *;\n\t4. /;" << endl;
		cin >> choise;
		cout << "������ ����� ����� = ";
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
			cout << "������� ����� �������� �� ������!" << endl;
		}
		cout << "0 - �����; 1 - ��������� �������" << endl;
		cin >> exit;
		if (exit == 0) { break; }
	}
}