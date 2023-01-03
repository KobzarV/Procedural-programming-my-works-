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
    if (count == 0) { cout << "\n���������� ����� ���� � ����� �������." << endl; }
}

void Card(char card, int suit)
{
    switch (suit)  // ���������� ������ �� ����������, ���� ������� ����� ����� ����� ����
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
    if (n1 == n2) { cout << "����� �������" << endl;}
    else { cout << "����� �� �������" << endl;}
}

void Line_search(int arr[], int size, int elem)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            cout << "������� ���� ����������� � �����" << endl;
            cout << "������ �������� ����� = " << i << endl;
            count++;
            break;
        }
    }
    if (count == 0) { cout << "������ ����� ���� � �����!" << endl; }
}

void Convert(int arr[], int numb [], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i] * numb[i];
    }
    cout << "����� - " << sum << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


/*������� 1. �������� �������, ������� ��������� ���
���������: ��������� ������� � ���������� �������, �
��������� ������� ����� �� ������ ���������� ������*/
    /*cout << "������ �1.1" << endl;
    int num1, num2;
    cout << "������ ������ ������ = "; cin >> num1;
    cout << "������ �������� ������ = "; cin >> num2;
    cout << num1 << " ^ " << num2 << " = " << Pow(num1, num2) << endl;*/


/*������� 2. �������� �������, ������� �������� � �������� ���������� 2 ����� ����� � ���������� ����� �����
�� ��������� ����� ����.*/

    /*cout << "������ �1.2" << endl;
    int a, b;
    cout << "������ ������� �������� = "; cin >> a;
    cout << "������ ����� �������� = "; cin >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << "���� ����� � ����� ������� = " << Diapazon_sum(a, b) << endl;*/


/*������� 3. ����� ���������� �����������, ���� �����
���� ��� ��������� ����� ��� ������. �������� �������
������ ����� ����� �� ��������� ���������*/

    /*cout << "������ �1.3" << endl;
    int a, b;
    cout << "������ ������� �������� = "; cin >> a;
    cout << "������ ����� �������� = "; cin >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << "�������� ����� � ��������" << endl;
    Perfect_num(a, b);*/



/*������� 4. �������� �������, ��������� �� �����
���������� �� ��������� �����.*/

    /*cout << "������ �1.4" << endl;
    char cards[] = { '6','7','8','9','10','J','Q','K','A'};
    int user_card, suit, a = 0;
    char card;
    while (a == 0)
    {
        cout << "������ ����� ���� ����� (1-9)"<<endl;
        cout << "1-6; 2-7; 3-8; 4-9; 5-10; 6-J; 7-Q; 8-K; 9-A" << endl;
        cin >> user_card;
        if (user_card >= 1 && user_card < 10)
        {
            cout << "\t������� ����� �����" << endl;
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
            else { cout << "����������� ��������!!!" << endl; }
        }
        else
        {
            cout << "����������� ��������!!!" << endl;
        }
    }
    Card(card, suit);*/     // ���������� ������ �� ����������, ���� ������� ����� ����� ����� ����




/*������� 5. �������� �������, ������� ����������, �������� �� ����������� ������������ �����.*/

    /*cout << "������ �1.5" << endl;
    int num;
    while (true)
    {
        cout << "������ 6-������ ����� = "; cin >> num;
        if(num >= 100000 && num <1000000)
        {
            break;
        }
        else { cout << "���������� ��������!!!" << endl; }
    }
    Happy_num(num);*/



/*������� 1. �������� �������, ����������� ��������
��������� ������ ��������� ����� � ���������� �������*/

    /*cout << "������ �2.1" << endl;
    const int n = 10;
    int mas[n], num;
    cout << "������ ���� = "; cin >> num;
    cout << "�����" << endl;
    for (int i = 0; i < n; i++)
    {
        mas[i] = -20 + rand() % 41;
        cout << mas[i] << ' ';
    }
    cout << endl;
    Line_search(mas, n, num);*/


/*������� 3. �������� ������� ��� �������� �����, 
����������� � �������� ����, � ���������� �������������. */

    cout << "������ �2.3" << endl;
    const int n = 8;
    int numb[n];
    int mas[] = { 1,2,4,8,16,32,64,128 };
    cout << "������ ����� � ��������� ������ (10010110)\n��� ���� ���������� � ����" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> numb[i];
    }
    Convert(mas, numb, n);
}