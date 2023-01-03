#include <iostream>
#include <Windows.h>
#include <cstring>
#include <random>

using namespace std;

void ArrInit(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = -10 + rand() % 26;
        }
    }
}

void ShowArr(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
}

void Del(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
}

void AddRow(int**& arr, int& row, int col)
{
    int** temp = new int* [row + 1];
    for (int i = 0; i < row + 1; i++)
    {
        temp[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = arr[i][j];
            if(i == row-1){ temp[i+1][j] = -10 + rand() % 26; }
        }
    }
    Del(arr, row, col);
    row++;
    arr = temp;
}

void AddCol(int**& arr, int row, int& col)
{
    int** temp = new int* [row];
    for (int i = 0; i < row; i++)
    {
        temp[i] = new int[col+1];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = arr[i][j];
            if (j == col - 1) { temp[i][j+1] = -10 + rand() % 26; }
        }
    }
    Del(arr, row, col);
    col++;
    arr = temp;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    //1) Написать функцию, добавляющую строку двумерному динамическому массиву в конец.
    cout << "Task #1" << endl;
    int row, col;
    cout << "Введіть розміри масиву" << endl;
    cout << "Рядки - "; cin >> row;
    cout << "Стовпці - "; cin >> col;
    int** mas = new int* [row];
    srand(time(0));
    for (int i = 0; i < row; i++)
    {
        mas[i] = new int[col];
    }
    cout << "\nМасив" << endl;
    ArrInit(mas, row, col);
    ShowArr(mas, row, col);
    AddRow(mas, row, col);
    cout << "\nНовий масив" << endl;
    ShowArr(mas, row, col);
    Del(mas, row, col);

    
    //Написать функцию, добавляющую столбец к двумерному динамическому массиву вправо
    cout << "Task #2" << endl;
    int row, col;
    cout << "Введіть розміри масиву" << endl;
    cout << "Рядки - "; cin >> row;
    cout << "Стовпці - "; cin >> col;
    int** arr = new int* [row];
    srand(time(0));
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    cout << "\nМасив" << endl;
    ArrInit(arr, row, col);
    ShowArr(arr, row, col);
    AddCol(arr, row, col);
    cout << "\nНовий масив" << endl;
    ShowArr(arr, row, col);
    Del(arr, row, col);
}
