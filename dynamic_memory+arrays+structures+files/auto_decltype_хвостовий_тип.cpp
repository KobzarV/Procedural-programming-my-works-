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
	/*1) ������� � ���������������� 3 ���������� � ������� x, y � z - ���� � ����� char, 
������ � ����� short, ������ - � ����� double.
� ������� ��������� ����� auto ������� ���������� ������ �� ����, 
����� ��� ����� ��������� a + b + c.
���������������� ��� ���������� ��������� a + b + c. 
������� �������� ���� ���������� �� �����.*/
	/*cout << "Task #1" << endl;
	char x = '0';
	short y = 4;
	double z = 13.345;
	auto rez(x + y + z);
	cout << rez << " - "<< typeid(rez).name() << endl;*/

	/*2) ������� � ���������������� 3 ���������� � ������� 
x, y � z - ���� � ����� char, ������ � ����� short, ������ - � ����� double.
� ������� decltype ������� ���������� ������ �� ����, ����� ��� ����� ��������� a + b + c.
���������������� ��� ���������� ��������� a + b + c. ������� �������� ���� ���������� �� �����.*/
	/*cout << "Task #2" << endl;
	char x = '7';
	short y = 15;
	double z = 111.34;
	decltype (x + y + z) r = x + y + z;
	cout << r << " - " << typeid(r).name() << endl;*/

	/*3) ��������� ����� �������, ������������ ��������� ������������ ���. 
������� ��� ������� � main()*/
	cout << "Task #3" << endl;
	double x;
	int y;
	cout << "������ �����, ��� ���� �� ������ �������" << endl; cin >> x;
	cout << "������ ������ ������" << endl; cin >> y;
	cout << "x ^ 1/y = " << root(x, y) << endl;
}