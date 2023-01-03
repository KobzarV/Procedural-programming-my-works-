#include <iostream>
#include <Windows.h>

using namespace std;

void ArrInit(int* arr, int size)  // ������� ����������� ������
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = -10 + rand() % 26;  // �� -10 �� 15
    }
}

void ShowArr(int* arr, int size)  // ������� ������ ������ �� �����
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << ' ';
    }
    cout << endl;
}

bool ascending(int a, int b)  // ������� ��� ���������� �� ������� �� �������
{
    return a > b;     // ������� �������,
        // ���� ������ �������
        // ����������� ������ �������
}

bool descending(int a, int b) // ������� ��� ���������� �� ������� �� �������
{
    return a < b;
}

void BubbleSort(int* arr, int size, bool (*comparisonFcn)(int, int)) // ����������� ����������
{
    int x = 0;
    for (int i = size - 1; i > x; i--) // ������ ���������� � ���� ������
    {
        for (int j = size - 1; j > x; j--) {
            if (comparisonFcn(arr[j], arr[j - 1]))  // ���������
            {
                int temp = arr[j];   // ��������� ����� ��� ����� �������
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }

        }
    }
}

void SelectionSort(int* array, int size, bool (*comparisonFcn)(int, int))
{
    for (int startIndex = 0; startIndex < size; ++startIndex) // ���������� ������ ������� �������
    { // smallestIndex - �� ������ ���������� ��������,
      // ���� �� ������� �� ����� ������
        int smallestIndex = startIndex;
        // ������ ��������� ������� ����� ���, �� ���������� � ����� (������� �� startIndex+1)
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (comparisonFcn(array[smallestIndex], array[currentIndex])) // ��в������
                smallestIndex = currentIndex;
        }
        // ̳����� ������ ��� ���������� ������� � �������� ��������� ���������
        swap(array[startIndex], array[smallestIndex]);
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 10;
    int array[n], choise;
    srand(time(0));
    ArrInit(array, n);
    cout << "���������� �����" << endl;
    ShowArr(array, n);
    cout << "\n������� ����� ���������� :" << endl;
    cout << "1) ³� ������� �� �������\n2) ³� ������� �� �������" << endl;
    cin >> choise;
    switch (choise)  // ���� ������� ����������
    {
    case 1:  // ³� ������� �� �������
        BubbleSort(array, n, descending);  // ����������� ����������
        //SelectionSort(array, 8, descending);  // ���������� �������
        break;
    case 2:  // ³� ������� �� �������
        BubbleSort(array, n, ascending);
        // SelectionSort(array, 8, descending);
        break;
    default:
        cout << "ͳ���� �� ��������" << endl;
    }
    cout << "³����������� �����" << endl;
    ShowArr(array, n);   // ������� ������������ ������ �� �����
}