#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

void Swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

 void Operation(float* num1, float* num2, char* choise)
{
     float rez;
     switch (*choise)
     {
     case '+':
         rez = *num1 + *num2;
         cout << *num1 << ' ' << *choise << ' ' << *num2 << " = " << rez << endl;
         break;
     case '-':
         rez = *num1 - *num2;
         cout << *num1 << ' ' << *choise << ' ' << *num2 << " = " << rez << endl;
         break;
     case '*':
         rez = *num1 * *num2;
         cout << *num1 << ' ' << *choise << ' ' << *num2 << " = " << rez << endl;
         break;
     case '/':
         rez = *num1 / *num2;
         cout << *num1 << ' ' << *choise << ' ' << *num2 << " = " << rez << endl;
         break;
     default:
         cout << "���������� ������ ��������!!!\n(������� ������ ������)" << endl;
     }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



/*2) ��������� ��������� � �������� �������������, 
�������� ������� �������� ���� ����������.*/
    /*cout << "Task 1.1" << endl;    // ����� 1
    int a, b;
    int* pa,* pb;
    pa = &a;
    pb = &b;
    cout << "Enter first number (A) - "; cin >> a;
    cout << "Enter second number (B) - "; cin >> b;
    Swap(pa, pb);
    cout << "A - " << a << "\nB - " << b << endl;*/

    /*cout << "Task 1.2" << endl;     // ����� 2
    int a, b, temp;
    int* pa, * pb;
    pa = &a; pb = &b;
    cout << "Enter first number (A) - "; cin >> a;
    cout << "Enter second number (B) - "; cin >> b;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    cout << "A - " << a << "\nB - " << b << endl;*/

/*3) �������� ����������� �����������, ��������� ������ 
����������� � ���������� �������������.*/

    /*cout << "Task 2\n\tCalculator" << endl;
    int exit;
    float n1, n2;
    char operation;
    char* op;
    float* pn1, * pn2;
    pn1 = &n1; pn2 = &n2; op = &operation;
    do
    {
        cout << "����� ����� ����� - "; cin >> n1;
        cout << "����� ����� ����� - "; cin >> n2;
        cout << "����� ����������� �������� (+, -, *, /) - ";
        cin >> operation;
        Operation(pn1, pn2, op);
        cout << "1 - ����� �������\n2 - �����" << endl;
        cin >> exit;
        if (exit == 2) { break; }
        system("cls");
    } while (exit != 2);*/
}