#include <iostream>
#include <Windows.h>

using namespace std;

void ArrInit(int* arr, int size)  // функція ініціалізації масиву
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = -10 + rand() % 26;  // від -10 до 15
    }
}

void ShowArr(int* arr, int size)  // функція виводу масиву на екран
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << ' ';
    }
    cout << endl;
}

bool ascending(int a, int b)  // функція для сортування від більшого до меншого
{
    return a > b;     // повертає «істину»,
        // якщо перший елемент
        // виявляється більшим другого
}

bool descending(int a, int b) // функція для сортування від меншого до більшого
{
    return a < b;
}

void BubbleSort(int* arr, int size, bool (*comparisonFcn)(int, int)) // бульбашкове сортування
{
    int x = 0;
    for (int i = size - 1; i > x; i--) // перебір починається з кінця масиву
    {
        for (int j = size - 1; j > x; j--) {
            if (comparisonFcn(arr[j], arr[j - 1]))  // порівняння
            {
                int temp = arr[j];   // тимчасова змінна для обміну значень
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }

        }
    }
}

void SelectionSort(int* array, int size, bool (*comparisonFcn)(int, int))
{
    for (int startIndex = 0; startIndex < size; ++startIndex) // Перебираем каждый элемент массива
    { // smallestIndex - це індекс найменшого елемента,
      // який ми знайшли до цього масиву
        int smallestIndex = startIndex;
        // Шукаємо найменший елемент серед тих, що залишились в масиві (почнемо із startIndex+1)
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (comparisonFcn(array[smallestIndex], array[currentIndex])) // ПОРІВНЯННЯ
                smallestIndex = currentIndex;
        }
        // Міняємо місцями наш початковий елемент з найденим найменшим елементом
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
    cout << "Початковий масив" << endl;
    ShowArr(array, n);
    cout << "\nВиберіть спосіб сортування :" << endl;
    cout << "1) Від меншого до більшого\n2) Від більшого до меншого" << endl;
    cin >> choise;
    switch (choise)  // вибір способу сортування
    {
    case 1:  // Від меншого до більшого
        BubbleSort(array, n, descending);  // бульбашкове сортування
        //SelectionSort(array, 8, descending);  // сортування вибором
        break;
    case 2:  // Від більшого до меншого
        BubbleSort(array, n, ascending);
        // SelectionSort(array, 8, descending);
        break;
    default:
        cout << "Нічого не відбулося" << endl;
    }
    cout << "Відсортований масив" << endl;
    ShowArr(array, n);   // выводим відсортований массив на экран
}