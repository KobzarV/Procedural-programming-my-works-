#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cstring>
#include <stdio.h>
#include <string.h>

using namespace std;

void Mystrcat(char *str1, char *str2)
{
    for (int i = strlen(str1), j=0; i <= strlen(str2) + strlen(str1); i++, j++)
    {
        *(str1 + i) = *(str2 + j);
    }
}

int Mystrcmp(char *str1, char *str2)
{
    int i = 0, j = 0, check = 0;
    for (i, j; str1[i] != (str1[i] - str2[j]);i++,j++)
    {
        check = (char)str1[i] - (char)str2[j];
        if (str1[i] != str2[j]) { break; }
    }
    if (check > 0) { return 1; }
    else if (check < 0) { return -1; }
    else { return 0; }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //1) Написать собственный вариант функции strcat().
    cout << "Task #1" << endl;
    char str1 [100], str2[50];
    cout << "Введіть перший рядок" << endl;
    cin.getline(str1, 100);
    cout << "Введіть другий рядок" << endl;
    cin.getline(str2, 50);
    Mystrcat(str1, str2);
    cout << str1 << endl;

    //2) Написать собственный вариант функции strcmp().
    /*Если строки идентичны (и по символам и по их количеству) – функция возвращает в программу число 0.
    Если первая строка  длиннее второй – возвращает в программу число 1, а если меньше, то -1.  
    Число -1 возвращается и  тогда, когда длина строк равна, но символы строк не совпадают.*/
    cout << "Task #2" << endl;
    char str1[100], str2[50];
    cout << "Введіть перший рядок" << endl;
    cin.getline(str1, 100);
    cout << "Введіть другий рядок" << endl;
    cin.getline(str2, 50);
    cout << Mystrcmp(str1, str2) << endl;
}
