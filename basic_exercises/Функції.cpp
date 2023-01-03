#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int Pow(int x, int y)
{
    int res = 1;
    for (int i = 1; i <= y; i++)
    {
        res *= x;
    }
    return res;
}

int Diapazon_sum(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    return sum;
}

void Perfect_num(int start, int finish)
{
    int sum, count;

    for (int i = start; i <= finish; i++)
    {
        sum = 0;
        count = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            cout << i << " ";
            count += 1;
        }
    }
    if (count == 0) { cout << "\nДосконалих чисел немає в цьому діапазоні." << endl; }
}

void Card(char card, int suit)
{
    switch (suit)  // зображення мастей не виводяться, тому виводжу першу букву назви масті
    {
    case 1:
        suit = 72;
        break;
    case 2:
        suit = 68;
        break;
    case 3:
        suit = 67;
        break;
    case 4:
        suit = 83;
        break;
    }
    cout << " _______________" << endl;
    cout << "| " << card << ' ' << (char)suit << "\t\t|" << endl;
    for(int i = 0; i <4; i++){ cout << "|\t\t|" << endl; }
    cout << "|\t"<< (char)suit <<"\t| " << endl;
    for (int i = 0; i < 4; i++) { cout << "|\t\t|" << endl; }
    cout << "|\t    " << card << ' ' << (char)suit << " |" << endl;
    cout << " _______________" << endl;
    
}

void Happy_num(int number)
{
    int n1 = 0, n2 = 0;
    for (int i = 1; i < 7; i++)
    {
        if (i < 4)
        {
            n1 += number % 10;
            number /= 10;
        }
        else 
        {
            n2 += number % 10;
            number /= 10;
        }
    }
    if (n1 == n2) { cout << "Число щасливе" << endl;}
    else { cout << "Число НЕ щасливе" << endl;}
}

void Line_search(int arr[], int size, int elem)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            cout << "Заданий ключ знаходиться в масиві" << endl;
            cout << "Індекс заданого ключа = " << i << endl;
            count++;
            break;
        }
    }
    if (count == 0) { cout << "Такого ключа немає в масиві!" << endl; }
}

void Convert(int arr[], int numb [], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i] * numb[i];
    }
    cout << "Число - " << sum << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


/*Задание 1. Написать функцию, которая принимает два
параметра: основание степени и показатель степени, и
вычисляет степень числа на основе полученных данных*/
    /*cout << "Задача №1.1" << endl;
    int num1, num2;
    cout << "Введіть основу степені = "; cin >> num1;
    cout << "Введіть показник степені = "; cin >> num2;
    cout << num1 << " ^ " << num2 << " = " << Pow(num1, num2) << endl;*/


/*Задание 2. Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел
из диапазона между ними.*/

    /*cout << "Задача №1.2" << endl;
    int a, b;
    cout << "Введіть початок діапазону = "; cin >> a;
    cout << "Введіть кінець діапазону = "; cin >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << "Сума чисел в цьому діапазоні = " << Diapazon_sum(a, b) << endl;*/


/*Задание 3. Число называется совершенным, если сумма
всех его делителей равна ему самому. Напишите функцию
поиска таких чисел во введенном интервале*/

    /*cout << "Задача №1.3" << endl;
    int a, b;
    cout << "Введіть початок діапазону = "; cin >> a;
    cout << "Введіть кінець діапазону = "; cin >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << "Досконалі числа з діапазону" << endl;
    Perfect_num(a, b);*/



/*Задание 4. Написать функцию, выводящую на экран
переданную ей игральную карту.*/

    /*cout << "Задача №1.4" << endl;
    char cards[] = { '6','7','8','9','10','J','Q','K','A'};
    int user_card, suit, a = 0;
    char card;
    while (a == 0)
    {
        cout << "Введіть номер вашої карти (1-9)"<<endl;
        cout << "1-6; 2-7; 3-8; 4-9; 5-10; 6-J; 7-Q; 8-K; 9-A" << endl;
        cin >> user_card;
        if (user_card >= 1 && user_card < 10)
        {
            cout << "\tВиберіть масть карти" << endl;
            cout << "1. Hearts\n2. Diamonds\n3. Clubs\n4. Spades" << endl;
            cin >> suit;
            if (suit >= 1 && suit < 5)
            {
                for (int i = 1; i <= 9; i++)
                {
                    if (user_card == i)
                    {
                        card = cards[i];
                        a = 1;
                    }
                }
            }
            else { cout << "Недопустиме значення!!!" << endl; }
        }
        else
        {
            cout << "Недопустиме значення!!!" << endl;
        }
    }
    Card(card, suit);*/     // зображення мастей не виводяться, тому виводжу першу букву назви масті




/*Задание 5. Написать функцию, которая определяет, является ли «счастливым» шестизначное число.*/

    /*cout << "Задача №1.5" << endl;
    int num;
    while (true)
    {
        cout << "Введіть 6-значне число = "; cin >> num;
        if(num >= 100000 && num <1000000)
        {
            break;
        }
        else { cout << "Некоректне значення!!!" << endl; }
    }
    Happy_num(num);*/



/*Задание 1. Написать функцию, реализующую алгоритм
линейного поиска заданного ключа в одномерном массиве*/

    /*cout << "Задача №2.1" << endl;
    const int n = 10;
    int mas[n], num;
    cout << "Введіть ключ = "; cin >> num;
    cout << "Масив" << endl;
    for (int i = 0; i < n; i++)
    {
        mas[i] = -20 + rand() % 41;
        cout << mas[i] << ' ';
    }
    cout << endl;
    Line_search(mas, n, num);*/


/*Задание 3. Написать функцию для перевода числа, 
записанного в двоичном виде, в десятичное представление. */

    cout << "Задача №2.3" << endl;
    const int n = 8;
    int numb[n];
    int mas[] = { 1,2,4,8,16,32,64,128 };
    cout << "Введіть число у двійковому вигляді (10010110)\nВвід буде починатися з кінця" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> numb[i];
    }
    Convert(mas, numb, n);
}