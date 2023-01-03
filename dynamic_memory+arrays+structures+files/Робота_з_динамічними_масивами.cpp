#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

void ArrInit(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) =-15 + rand() % 31;
    }
}

void ShowArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << ' ';
    }
    cout << endl;
}

bool in_array(int* arr, int size, int elem)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == elem)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


/*1) Добавить в конце динамического массива один элемент.
2) Добавить один элемент в заданную позицию динамического массива.
3) Добавить заданное количество элементов (случайные значения) в 
конец динамического массива.
4) Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры). 
Необходимо создать третий массив минимально возможного размера, 
в котором нужно собрать элементы обоих массивов.
5) Дан массив: А[M] (M вводится с клавиатуры). 
Необходимо удалить из массива четные или нечетные значения. 
Пользователь вводит данные в массив, а также с помощью меню решает, что нужно удалить.

Дополнительное задание:
Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры). 
Необходимо создать третий массив минимально возможного размера, 
в котором нужно собрать только общие элементы двух массивов без повторений.
*/



    /*cout << "Task #1" << endl;
    int n, elem;
    cout << "Введіть розмір масиву - "; cin >> n;
    int* mas = new int[n];
    cout << "Початковий масив" << endl;
    srand(time(0));
    ArrInit(mas, n);
    ShowArr(mas, n);
    cout << endl;
    cout << "Введіть елемент - "; cin >> elem;
    int* rez_mas = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        rez_mas[i] = mas[i];
    }
    rez_mas[n] = elem;
    cout << "Вихідний масив" << endl;
    delete[] mas;
    mas = rez_mas;
    ShowArr(mas, n + 1);
    delete[] mas;*/

    /*cout << "\nTask #2" << endl;
    int size, indx, el;
    cout << "Введіть розмір масиву - "; cin >> size;
    int* mas1 = new int[size];
    srand(time(0));
    cout << "Початковий масив" << endl;
    ArrInit(mas1, size);
    ShowArr(mas1, size);
    cout << "Введіть елемент - "; cin >> el;
    while (true)
    {
        cout << "Введіть позицію нового елемента - "; cin >> indx;
        if (indx <= size && indx >= 0)
        {
            break;
        }
    }
    int* rez_mas = new int[size + 1];
    for (int i = 0; i < indx; i++)
    {
        rez_mas[i] = mas1[i];
    }
    rez_mas[indx] = el;
    for (int i = 0; i <= size - indx; i++)
    {
        rez_mas[indx + 1 + i] = mas1[indx + i];
    }
    delete[] mas1;
    cout << "Вихідний масив" << endl;
    mas1 = rez_mas;
    ShowArr(mas1, size + 1);
    delete[] mas1;*/

    /*cout << "\nTask #3" << endl;
    int s, count_el;
    cout << "Введіть розмір масиву - "; cin >> s;
    int* arr = new int[s];
    cout << "Початковий масив" << endl;
    srand(time(0));
    ArrInit(arr, s);
    ShowArr(arr, s);
    cout << "Введіть кількість нових елементів - ";
    cin >> count_el;
    int* temp_arr = new int[s + count_el];
    for (int i = 0; i < s; i++)
    {
        temp_arr[i] = arr[i];
    }
    srand(time(0));
    for (int i = s; i < (s + count_el); i++)
    {
        temp_arr[i] = -10 + rand() % 21;
    }
    cout << "Вихідний масив" << endl;
    delete[] arr;
    arr = temp_arr;
    s += count_el;
    ShowArr(arr, s);
    delete[] arr;*/

    /*cout << "\nTask #4" << endl;
    int M, N, same = 0;
    cout << "Введіть розмір 1 масиву - "; cin >> M;
    cout << "Введіть розмір 2 масиву - "; cin >> N;
    int* arr_a = new int[M];
    int* arr_b = new int[N];
    cout << "Масив A : " << endl;
    srand(time(0));
    ArrInit(arr_a, M);
    ShowArr(arr_a, M);
    cout << "Масив B : " << endl;
    ArrInit(arr_b, N);
    ShowArr(arr_b, N);
    for (int i = 0; i < M; i++)
    {
        if (!in_array(arr_a, M, arr_a[i]))
        {
            same++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (!in_array(arr_b, N, arr_b[i]))
        {
            same++;
        }
    }
    int* arr_c = new int[(M+N)-same];
    int c_size = 0;
    for (int i = 0; i < M; i++)
    {
        if (!in_array(arr_c, c_size, arr_a[i]))
        {
            arr_c[c_size++] = arr_a[i];
        }
    }
    for (int j = 0; j < N; j++)
    {
        if (!in_array(arr_c, c_size, arr_b[j]))
        {
            arr_c[c_size++] = arr_b[j];
        }
    }
    cout << "Масив С: " << endl;
    ShowArr(arr_c, c_size);
    delete[] arr_a;
    delete[] arr_b;
    delete[] arr_c;*/

    /*cout << "\nTask #5" << endl;
    int M, N, choise;
    cout << "Введіть розмір масиву - "; cin >> M;
    int* arrA = new int[M];
    cout << "Масив A : " << endl;
    srand(time(0));
    ArrInit(arrA, M);
    ShowArr(arrA, M);
    while (true)
    {
        int temp = 0;
        cout << "\t Меню" << endl;
        cout << "1. Видалити парні елементи" << endl;
        cout << "2. Видалити непарні елементи" << endl;
        cin >> choise;
        for (int i = 0; i < M; i++)
        {
            if (choise == 1)
            {
                if (arrA[i] % 2 != 0) { temp += 1; }
            }
            else if (choise == 2)
            {
                if (arrA[i] % 2 == 0) { temp += 1;; }
            }
        }
        cout << temp << endl;
       int* temp_arr = new int[temp];
        for (int i = 0, j = 0; i < M; i++)
        {
            if (choise == 1)
            {
                if (arrA[i] % 2 != 0) { temp_arr[j++] = arrA[i]; }
            }
            else if (choise == 2)
            {
                if (arrA[i] % 2 == 0) { temp_arr[j++] = arrA[i]; }
            }
        }
        delete[] arrA;
        arrA = temp_arr;
        M = temp;
        if (choise > 0 && choise < 3) break;
        else cout << "Виберіть один з пунктів меню!!!" << endl;
    }
    cout << "Масив A (після видалення) : " << endl;
    ShowArr(arrA, M);
    delete[] arrA;*/

    cout << "\nTask #6" << endl;
    int M, N;
    cout << "Введіть розмір 1 масиву - "; cin >> M;
    cout << "Введіть розмір 2 масиву - "; cin >> N;
    int* arr_a = new int[M];
    int* arr_b = new int[N];
    int* arr_c = new int[M < N ? N : M];
    int c_size = 0;
    cout << "Масив A : " << endl;
    srand(time(0));
    ArrInit(arr_a, M);
    ShowArr(arr_a, M);
    cout << "Масив B : " << endl;
    ArrInit(arr_b, N);
    ShowArr(arr_b, N);
    for (int i = 0; i < M; i++)
    {
        if (in_array(arr_b, M, arr_a[i]) && !in_array(arr_c, c_size, arr_a[i]))
        {
            arr_c[c_size++] = arr_a[i];
        }
    }
    cout << "Масив С: " << endl;
    ShowArr(arr_c, c_size);
    delete[] arr_a;
    delete[] arr_b;
    delete[] arr_c;
}