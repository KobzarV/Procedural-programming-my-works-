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


/*1) �������� � ����� ������������� ������� ���� �������.
2) �������� ���� ������� � �������� ������� ������������� �������.
3) �������� �������� ���������� ��������� (��������� ��������) � 
����� ������������� �������.
4) ���� ��� �������: �[M] � B[N] (M � N �������� � ����������). 
���������� ������� ������ ������ ���������� ���������� �������, 
� ������� ����� ������� �������� ����� ��������.
5) ��� ������: �[M] (M �������� � ����������). 
���������� ������� �� ������� ������ ��� �������� ��������. 
������������ ������ ������ � ������, � ����� � ������� ���� ������, ��� ����� �������.

�������������� �������:
���� ��� �������: �[M] � B[N] (M � N �������� � ����������). 
���������� ������� ������ ������ ���������� ���������� �������, 
� ������� ����� ������� ������ ����� �������� ���� �������� ��� ����������.
*/



    /*cout << "Task #1" << endl;
    int n, elem;
    cout << "������ ����� ������ - "; cin >> n;
    int* mas = new int[n];
    cout << "���������� �����" << endl;
    srand(time(0));
    ArrInit(mas, n);
    ShowArr(mas, n);
    cout << endl;
    cout << "������ ������� - "; cin >> elem;
    int* rez_mas = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        rez_mas[i] = mas[i];
    }
    rez_mas[n] = elem;
    cout << "�������� �����" << endl;
    delete[] mas;
    mas = rez_mas;
    ShowArr(mas, n + 1);
    delete[] mas;*/

    /*cout << "\nTask #2" << endl;
    int size, indx, el;
    cout << "������ ����� ������ - "; cin >> size;
    int* mas1 = new int[size];
    srand(time(0));
    cout << "���������� �����" << endl;
    ArrInit(mas1, size);
    ShowArr(mas1, size);
    cout << "������ ������� - "; cin >> el;
    while (true)
    {
        cout << "������ ������� ������ �������� - "; cin >> indx;
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
    cout << "�������� �����" << endl;
    mas1 = rez_mas;
    ShowArr(mas1, size + 1);
    delete[] mas1;*/

    /*cout << "\nTask #3" << endl;
    int s, count_el;
    cout << "������ ����� ������ - "; cin >> s;
    int* arr = new int[s];
    cout << "���������� �����" << endl;
    srand(time(0));
    ArrInit(arr, s);
    ShowArr(arr, s);
    cout << "������ ������� ����� �������� - ";
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
    cout << "�������� �����" << endl;
    delete[] arr;
    arr = temp_arr;
    s += count_el;
    ShowArr(arr, s);
    delete[] arr;*/

    /*cout << "\nTask #4" << endl;
    int M, N, same = 0;
    cout << "������ ����� 1 ������ - "; cin >> M;
    cout << "������ ����� 2 ������ - "; cin >> N;
    int* arr_a = new int[M];
    int* arr_b = new int[N];
    cout << "����� A : " << endl;
    srand(time(0));
    ArrInit(arr_a, M);
    ShowArr(arr_a, M);
    cout << "����� B : " << endl;
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
    cout << "����� �: " << endl;
    ShowArr(arr_c, c_size);
    delete[] arr_a;
    delete[] arr_b;
    delete[] arr_c;*/

    /*cout << "\nTask #5" << endl;
    int M, N, choise;
    cout << "������ ����� ������ - "; cin >> M;
    int* arrA = new int[M];
    cout << "����� A : " << endl;
    srand(time(0));
    ArrInit(arrA, M);
    ShowArr(arrA, M);
    while (true)
    {
        int temp = 0;
        cout << "\t ����" << endl;
        cout << "1. �������� ���� ��������" << endl;
        cout << "2. �������� ������ ��������" << endl;
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
        else cout << "������� ���� � ������ ����!!!" << endl;
    }
    cout << "����� A (���� ���������) : " << endl;
    ShowArr(arrA, M);
    delete[] arrA;*/

    cout << "\nTask #6" << endl;
    int M, N;
    cout << "������ ����� 1 ������ - "; cin >> M;
    cout << "������ ����� 2 ������ - "; cin >> N;
    int* arr_a = new int[M];
    int* arr_b = new int[N];
    int* arr_c = new int[M < N ? N : M];
    int c_size = 0;
    cout << "����� A : " << endl;
    srand(time(0));
    ArrInit(arr_a, M);
    ShowArr(arr_a, M);
    cout << "����� B : " << endl;
    ArrInit(arr_b, N);
    ShowArr(arr_b, N);
    for (int i = 0; i < M; i++)
    {
        if (in_array(arr_b, M, arr_a[i]) && !in_array(arr_c, c_size, arr_a[i]))
        {
            arr_c[c_size++] = arr_a[i];
        }
    }
    cout << "����� �: " << endl;
    ShowArr(arr_c, c_size);
    delete[] arr_a;
    delete[] arr_b;
    delete[] arr_c;
}