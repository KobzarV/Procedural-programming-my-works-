#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

void ShowArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << ' ';
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


/*1) ��������� ��� ��������� �� ������ ����� �����, ����������� ���� ������ � ������. 
������������ � ��������� ���������� ���������� ��� ����������� �� �������, 
� ����� �������� �������������.*/

    /*cout << "Task 1" << endl;
    int n;
    cout << "������ ����� ������ - "; cin >> n;
    int* mas1 = new int[n];
    int* mas2 = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        *(mas1 + i) = -15 + rand() % 31;
        *(mas2 + i) = -15 + rand() % 31;
    }
    cout << "������ �����" << endl;
    ShowArr(&mas1[0], n);
    cout << "\n������ �����" << endl;
    ShowArr(&mas2[0], n);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        *(mas1 + i) = *(mas2 + i);
    }
    cout << "\n������ �����" << endl;
    ShowArr(&mas1[0], n);
    cout << "\n������ �����" << endl;
    ShowArr(&mas2[0], n);*/



/*2) �������� ���� ������� � �������� ������� ������������� �������
*/

    cout << "Task 2" << endl;
    int n, index, elem;
    cout << "������ ����� ������ - "; cin >> n;
    int* mas = new int[n];
    cout << "���������� �����" << endl;
    for (int i = 0; i < n; i++)
    {
        *(mas + i) = -10 + rand() % 26;
    }
    ShowArr(&mas[0], n);
    cout << endl;
    cout << "������ ������� - "; cin >> elem;
    cout << "������ ������� ������ �������� - "; cin >> index;
    int* rez_mas = new int[n + 1];
    for (int i = 0; i < index; i++)
    {
        rez_mas[i] = mas[i];
    }
    rez_mas[index] = elem;
    for (int i = 0; i <= n - index; i++)
    {
        rez_mas[index + 1 + i] = mas[index + i];
    }
    cout << "�������� �����" << endl;
    ShowArr(&rez_mas[0], n + 1);
    delete[] mas;
    delete[] rez_mas;
}