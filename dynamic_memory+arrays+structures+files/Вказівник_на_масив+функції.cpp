#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

void ArrInit(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = -10 + rand() % 26;
    }
}

void ShowArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << ' ';
    }
}

void Count_numbers(int* arr, int size, int* p, int* m, int* n)
{
    *p = 0;
    *m = 0;
    *n = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > 0) { *p += 1; }
        else if (*(arr + i)) { *m += 1; }
        else { *n += 1; }
    }
}

void Max_arr_elem(int* arr, int size, int* max_elem, int* index)
{
    *max_elem = *arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max_elem) 
        {
            *max_elem = *(arr + i);
            *index = i;
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



/*1) �������� �������, ������� �������� ��������� �� ������ � ��� ������ 
� ���������� ���������� �������������,
������������� � ������� ��������� �������.
2) �������� �������, ������� ��������� ������ � ���������� 
2 ���������� - ������ ������������� �������� ������� � ��� ��������.
*/


    cout << "Task #1" << endl;
    const int n = 12;
    int mas[n];
    int posit, negat, nul;
    cout << "�����" << endl;
    srand(time(0));
    ArrInit(mas, n);
    ShowArr(mas, n);
    cout << endl;
    Count_numbers(mas, n, &posit, &negat, &nul);
    cout << "\nʳ������ ������� �������� = " << posit << endl;
    cout << "ʳ������ ��'����� �������� = " << negat << endl;
    cout << "ʳ������ �������� �������� = " << nul << endl;

    cout << "\nTask #2" << endl;
    const int size = 8;
    int arr[size];
    int elem, index;
    cout << "�����" << endl;
    srand(time(0));
    ArrInit(arr, size);
    ShowArr(arr, size);
    cout << endl;
    Max_arr_elem(arr, size, &elem, &index);
    cout << "������������ ������� ������ = " << elem << "\n������ ������������� �������� = " << index << endl;
}