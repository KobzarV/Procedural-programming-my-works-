#include <iostream>
#include <random>
#include <Windows.h>
#include <ctype.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //1) Дана строка символов. Пользователь вводит искомый символ. 
    //Посчитать, сколько раз он встречается в строке.
    cout << "Task #1" << endl;
    char line[] = "Дана строкА символов.2 The user enTers a sEarch charActEr2.";
    cout << line << endl;
    int size = strlen(line);
    int count = 0;
    char user_el;
    cout << "Введіть шуканий символ - ";
    cin >> user_el;
    for (int i = 0; i < size; i++)
    {
        char temp = tolower(line[i]);
        if (line[i] == user_el) 
        {
            count += 1; 
        }
    }
    cout << "Кількість таких символів у рядку - " << count << endl;


    //2)Дана строка символов. Определить количество букв, цифр и остальных символов, присутствующих в строке.
    cout << "Task #2" << endl;  // цифри 48-57     букви(латиниця) 65-90(великі); 97-122(малі)
    char str[] = "Hel3l/o 0(:/*-+)9 12CFZ,34.; How arez uAr?";
    cout << str << endl;
    int num = 0, sym = 0, other = 0;
    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        if (int(str[i]) >= 48 && int(str[i]) <= 57)
        {
            num += 1;
        }
        else if ((int(str[i]) > 64 && int(str[i]) < 91) || (int(str[i]) > 96 && int(str[i]) < 123))
        {
            sym += 1;
        }
        else { other += 1; }
    }
    cout << "Букви - " << sym << "\nЦифри - " << num << "\nІнші символи - " << other << endl;


    //3) Дана строка символов. Необходимо проверить, является ли эта строка палиндромом.
    cout << "Task #3" << endl;
    char str[] = "Pylyp";
    cout << str << endl;
    int size = strlen(str), check = 0;
    
    for (int i = 0; i < size/2; i++)
    {
        if (tolower(str[i]) == tolower(str[size - 1 - i]))
        {
            check += 1;
        }
    }
    if (size/2 == check)
    {
        cout << "Це слово паліндром!" << endl;
    }
    else { cout << "Це НЕ паліндром!" << endl; }

    //Написать программу, которая вставляет в заданную строку в указанную  позицию заданный символ
    cout << "Task #4" << endl;
    char str[] = "Написать программу.";
    cout << str << endl;
    int pos;
    char symvol;
    cout << "Введіть символ - ";
    cin >> symvol;
    while (true)
    {
        cout << "Введіть позицію нового символу - "; cin >> pos;
        if (pos >= 0 && pos < strlen(str)) { break; }
    }
    char* temp = new char[strlen(str) + 2];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = str[i];
    }
    temp[pos] = symvol;
    for (int i = pos + 1; i < strlen(str) + 1; i++)
    {
        temp[i] = str[i-1];
    }
    temp[strlen(str) + 1] = '\0';
    cout << temp << endl;
    delete[] temp;

    //Подсчитать количество слов в предложении (между словами может быть более одного пробела).
    cout << "Task #5" << endl;
    char str[] = "Палац розташований на      прямовисній скелі Аврора, що  є  відногою мису Ай-Тодор, до речі, сама ідея.";
    int count = 0, check = 0;
    cout << str << endl;
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ' ' && check == 0 || str[i] == '\0')
        {
            check = 1;
            count++;
        }
        else if (check == 1 && str[i] != ' ')
        {
            check = 0;
        }
    }
    cout << count << endl;
}
