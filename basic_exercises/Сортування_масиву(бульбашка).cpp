#include <iostream>
#include <Windows.h>
#include <random>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

/*��� ������ ��������� ����� � ��������� �� �20 �� +20. ���������� 
����� ������� ������� ������������� ���������
(������ ������ �������������� �������� � ������ ������� �������������� ��������) 
� ������������� ��������,
����������� ����� ����.*/

    cout << "����������" << endl;
    srand(time(0));
    const int n = 12;
    int mas[n], i, k;
    int first, last;
    cout << "���������� �����" << endl;
    for (i = 0; i < n; i++)
    {
        mas[i] = -20 + rand() % 41;
        cout << mas[i] << " ";
    }
    for (int i = n - 1; i >= 0; i--) { if (mas[i] < 0) { last = i;  break; } }
    for (int i = 0; i < n; i++) { if (mas[i] < 0) { first = i; break; } }
    for (k = first; k <= last; k++)
        for (i = first; i < last; i++)
            if (mas[i] > mas[i + 1])
            {
                int swap;
                swap = mas[i];
                mas[i] = mas[i+1];
                mas[i+1] = swap;
            }
    cout << "\n³����������� ����� (�� ������ � ������� ��'����� ���������) " << endl;
    for (i = 0; i < n; i++)
        cout << mas[i] << " ";
}