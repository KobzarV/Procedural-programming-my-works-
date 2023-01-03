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


/*1) Используя два указателя на массив целых чисел, скопировать один массив в другой. 
Использовать в программе арифметику указателей для продвижения по массиву, 
а также оператор разыменования.*/

    /*cout << "Task 1" << endl;
    int n;
    cout << "Введіть розмір масиву - "; cin >> n;
    int* mas1 = new int[n];
    int* mas2 = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        *(mas1 + i) = -15 + rand() % 31;
        *(mas2 + i) = -15 + rand() % 31;
    }
    cout << "Перший масив" << endl;
    ShowArr(&mas1[0], n);
    cout << "\nДругий масив" << endl;
    ShowArr(&mas2[0], n);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        *(mas1 + i) = *(mas2 + i);
    }
    cout << "\nПерший масив" << endl;
    ShowArr(&mas1[0], n);
    cout << "\nДругий масив" << endl;
    ShowArr(&mas2[0], n);*/



/*2) Добавить один элемент в заданную позицию динамического массива
*/

    cout << "Task 2" << endl;
    int n, index, elem;
    cout << "Введіть розмір масиву - "; cin >> n;
    int* mas = new int[n];
    cout << "Початковий масив" << endl;
    for (int i = 0; i < n; i++)
    {
        *(mas + i) = -10 + rand() % 26;
    }
    ShowArr(&mas[0], n);
    cout << endl;
    cout << "Введіть елемент - "; cin >> elem;
    cout << "Введіть позицію нового елемента - "; cin >> index;
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
    cout << "Вихідний масив" << endl;
    ShowArr(&rez_mas[0], n + 1);
    delete[] mas;
    delete[] rez_mas;
}