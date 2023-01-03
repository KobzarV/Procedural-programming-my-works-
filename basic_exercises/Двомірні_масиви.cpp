#include <iostream>
#include <Windows.h>
#include <random>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


/*������� 1. �������� ���������, ������� ������� ���������� ������ � ��������� ��� �� ���������� ��������:
������������ ������ ����� (��������, 3) ������ �������
������� ��������� �������� ����� �����, ����������� ������� ������� ��������� �������� ����� �����
����������� �� 2 (�.�. 6 ��� ������ �������), ������
������� ������� ���������� ������� ���������� ��
2 (�.�. 6*2=12 ��� ������ �������). ��������� ������
������� �� �����.*/

    /*cout << "�������� �1" << endl;
    const int n = 3, m = 4;
    int mas[n][m], numb;
    cout << "����� ������ ������� ������ = "; cin >> numb;
    cout << "\t�����" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mas[i][j] = numb;
            cout << mas[i][j] << "\t";
            numb *= 2;
        }
        cout << endl;
    }*/


/*������� 2. �������� ���������, ������� ������� ���������� ������ � ��������� ��� �� ���������� ��������:
������������ ������ ����� (��������, 3) ������ �������
������� ��������� �������� ����� �����, �����������
������� ������� ��������� �������� ����� ����� + 1 (�.�.
4 ��� ������ �������), ������ ������� ������� ���������� ������� + 1 (�.�. 5 ��� ������ �������). ���������
������ ������� �� �����.*/

    /*cout << "�������� �2" << endl;
    const int n = 3, m = 4;
    int mas[n][m], numb;
    cout << "����� ������ ������� ������ = "; cin >> numb;
    cout << "\t�����" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mas[i][j] = numb;
            cout << mas[i][j] << "\t";
            numb += 1;
        }
        cout << endl;
    }*/


/*������� 3. �������� ���������� ������. ��������� ���
���������� ������� � �������� �� �����. ������������
�������� ���������� ������� � ��������� (�����, ������, �����, ����). 
��������� ����� ������� � �������� ��
����� ���������� ���������. ����� �����������.
��������, ���� �� ����� ��������� ������
1 2 0 4 5 3
4 5 3 9 0 1
� ������������ ������ ����� �� 2 ������� ������, �� ��
�������
5 3 1 2 0 4
0 1 4 5 3 9.*/

    cout << "�������� �3" << endl;
    const int n = 5;
    int mas[n][n], move, choise = 0;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mas[i][j] = -15 + rand() % 31;
            cout << mas[i][j] << "\t";
        }
        cout << endl;
    }
    while (choise != 5)
    {
        cout << "\n\t������� ���� �� ������ ����" << endl;
        cout << "1.���� ������;\n2.���� ����;\n3.���� ����;\n4.���� �����;\n5.�����" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "\n����� ������� ����� = "; cin >> move;
            for (int k = 0; k < move; k++)  //������
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = n - 1; j > 0; j--)
                    {
                        int temp = mas[i][j];
                        mas[i][j] = mas[i][j - 1];
                        mas[i][j - 1] = temp;
                    }
                }
            }
            break;
        case 2:
            cout << "\n����� ������� ����� = "; cin >> move;
            for (int k = 0; k < move; k++) //����
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n - 1; j++)
                    {
                        int temp = mas[i][j];
                        mas[i][j] = mas[i][j + 1];
                        mas[i][j + 1] = temp;
                    }
                }
            }
            break;
        case 3:
            cout << "\n����� ������� ����� = "; cin >> move;
            for (int k = 0; k < move; k++)  //������
            {
                for (int j = 0; j < n; j++)
                {
                    for (int i = n - 1; i > 0; i--)
                    {
                        int temp = mas[i][j];
                        mas[i][j] = mas[i - 1][j];
                        mas[i - 1][j] = temp;
                    }
                }
            }
            break;
        case 4:
            cout << "\n����� ������� ����� = "; cin >> move;
            for (int k = 0; k < move; k++) //�����
            {
                for (int j = 0; j < n; j++)
                {
                    for (int i = 0; i < n - 1; i++)
                    {
                        int temp = mas[i][j];
                        mas[i][j] = mas[i + 1][j];
                        mas[i + 1][j] = temp;
                    }
                }
            }
            break;
        case 5:
            cout << "Bye Bye" << endl;
            break;
        default:
            cout << "������ ���� �� ������ ����!! (1-5)" << endl;
        }
        if (choise > 0 && choise <= 4)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << mas[i][j] << "\t";
                }
                cout << endl;
            }
        }
    }
}