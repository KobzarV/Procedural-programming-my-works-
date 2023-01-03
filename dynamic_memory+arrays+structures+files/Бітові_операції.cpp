#include <iostream>
#include <Windows.h>

using namespace std;

/*1) Написать функцию, умножающую число, которое принимает эта функция, 
на заданную степень числа 2. Использовать оператор побитового сдвига влева <<.

2) Написать программу для обнуления 3-го бита справа в двоичном 
представлении некоторого числа.*/

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
    cout << "Введіть число - ";
    cin >> num;
    cout << "Введіть степінь числа 2 - ";
    cin >> degree;
    rezult = multipl(num, degree);
    cout << num << " * 2 ^ " << degree << " = " << rezult;*/

    cout << "Task #2" << endl;
    int number;
    cout << "Введіть число - ";
    cin >> number;
    if ((number & 0b00000100) == 0)
    {
        cout << "Третій біт справа цього числа = 0" << endl;
    }
    else
    {
        cout << "Третій біт числа " << number << " обнулено!" << endl;
        number &= 0b11111011;     // коли обнуляється 3 біт то число зменшується на 4 (2^2)
        cout << "Число = " << number << endl;
    }
}