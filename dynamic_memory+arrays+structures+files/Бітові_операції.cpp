#include <iostream>
#include <Windows.h>

using namespace std;

/*1) �������� �������, ���������� �����, ������� ��������� ��� �������, 
�� �������� ������� ����� 2. ������������ �������� ���������� ������ ����� <<.

2) �������� ��������� ��� ��������� 3-�� ���� ������ � �������� 
������������� ���������� �����.*/

int multipl (int number, int degree)
{
    int rez = number << degree;
    return rez;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*cout << "Task #1" << endl;
    int num, degree, rezult;
    cout << "������ ����� - ";
    cin >> num;
    cout << "������ ������ ����� 2 - ";
    cin >> degree;
    rezult = multipl(num, degree);
    cout << num << " * 2 ^ " << degree << " = " << rezult;*/

    cout << "Task #2" << endl;
    int number;
    cout << "������ ����� - ";
    cin >> number;
    if ((number & 0b00000100) == 0)
    {
        cout << "����� �� ������ ����� ����� = 0" << endl;
    }
    else
    {
        cout << "����� �� ����� " << number << " ��������!" << endl;
        number &= 0b11111011;     // ���� ����������� 3 �� �� ����� ���������� �� 4 (2^2)
        cout << "����� = " << number << endl;
    }
}