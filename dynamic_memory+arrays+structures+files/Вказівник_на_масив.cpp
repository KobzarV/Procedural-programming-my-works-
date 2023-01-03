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



/*1) ��������� ��������� �� ������ ����� �����, �������� ������� ���������� ��������� ������� �� ��������������� 
(�� ������� ������ �� ����� � �����, � ��� ������ ������ ����������!).
������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.
*/

    /*cout << "Task #1" << endl;
    const int n = 10;
    int mas[n], temp [n];
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        *(mas + i) = -10 + rand() % 21;
        *(temp + i) = *(mas + i);
    }
    cout << "�����" << endl;
    ShowArr(mas, n);
    for (int i = n-1, j = 0; i >= 0; i--, j++)
    {
        *(mas + i) = *(temp + j);
    }
    cout << "\n�����" << endl;
    ShowArr(mas, n);*/



/*2) ��������� ��� ��������� �� ������� ����� �����, ����������� ���� ������ � ������ ���,
����� �� ������ ������� �������� ���������� � �������� �������.
������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.
*/
    cout << "Task #2" << endl;
    const int s = 12;
    int arr1[s], arr2[s];
    srand(time(0));
    for (int i = 0; i < s; i++)
    {
        *(arr1 + i) = -10 + rand() % 21;
        *(arr2 + i) = -10 + rand() % 21;
    }
    cout << "\n����� #1" << endl;
    ShowArr(arr1, s);
    cout << "\n����� #2" << endl;
    ShowArr(arr2, s);
    for (int i = 0, j = s-1; i < s; i++, j--)
    {
        *(arr2 + i) = *(arr1 + j);
    }
    cout << "\n\n����� #1" << endl;
    ShowArr(arr1, s);
    cout << "\n����� #2" << endl;
    ShowArr(arr2, s);
}