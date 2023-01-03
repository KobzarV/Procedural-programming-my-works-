#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cstring>

using namespace std;

void ArrInit(int** arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = -10 + rand() % 26;
        }
    }
}

void ShowArr(int** arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "����������� ������" << endl;
        /*�������� ���������, ������� ����������� ��������� ��� ������������
        ��������� �������,
        ����������� ���������� �������, � ��������� ��������� �
        ������� �������.������� ���� �������� �������� �������������,
        ��� ������ ���� �����������.*/
    int size;
    cout << "������ ����� ������ - ";
    cin >> size;
    int** mas2 = new int*[size];
    int** mas1 = new int*[size];
    int** arr_rezult = new int*[size];
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        mas1[i] = new int[size];
        mas2[i] = new int[size];
        arr_rezult[i] = new int[size];
    }
    cout << "\n������ �����" << endl;
    ArrInit(mas1, size);
    ShowArr(mas1, size);
    cout << "\n������ �����" << endl;
    ArrInit(mas2, size);
    ShowArr(mas2, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr_rezult[i][j] = mas1[i][j] + mas2[i][j];
        }
    }
    cout << "\n����� �����" << endl;
    ShowArr(arr_rezult, size);
    for (int i = 0; i < size; i++)
    {
        delete[]mas1[i];
        delete[]mas2[i];
        delete[]arr_rezult[i];
    }
    delete[]mas1;
    delete[]mas2;
    delete[]arr_rezult;
}