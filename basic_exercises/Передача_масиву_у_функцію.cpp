#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

void Arefmetic(int arr[], int size)
{
	float sum = 0, res;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	res = sum / size;
	cout << "������ ����������� ������ = " << res << endl;
}

void Count_elements(int arr [], int size)
{
	int positiv = 0, negativ = 0, nul = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) { positiv++; }
		else if (arr[i] < 0) { negativ++; }
		else { nul++; }
	}
	cout << "ʳ������ ������� �������� - " << positiv << endl;
	cout << "ʳ������ ��'����� �������� - " << negativ << endl;
	cout << "ʳ������ �������� �������� - " << nul << endl;
}

bool Is_simple(int num)
{
	int count = 0;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) { count++; }
	}
	if (count == 0) { return true; }
	else { return false; }
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*������� 1. �������� �������, ������������ �������
�������������� ��������� ������������� �� �������.*/
	/*cout << "�������� 1" << endl;
	const int n = 10;
	int mas[n];
	srand(time(0));
	cout << "�����" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = -15 + rand() % 31;
		cout << mas[i] << ' ';
	}
	cout << endl;
	Arefmetic(mas, n);*/



/*������� 2. �������� �������, ������������ ����������
�������������, ������������� � ������� ���������
������������� �� �������.*/
	/*cout << "�������� 2" << endl;
	const int n = 12;
	int mas[n];
	srand(time(0));
	cout << "�����" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = -15 + rand() % 31;
		cout << mas[i] << ' ';
	}
	cout << endl;
	Count_elements(mas, n);*/



/*������� 3. �������� �������, ������� ���������, ����-
���� �� ���������� �� ����� �������? ����� ���������� 
�������, ���� ��� ������� ��� ������� ������ �� ���� 
��� �������.
*/
	cout << "�������� 3 (����� �����)" << endl;
	int number, choise;
	while (true)
	{
		cout << "������ ����� = "; cin >> number;
		cout << "������� ����� ������? (1 - ���; 0 - �) " << endl << Is_simple(number) << endl;
		cout << "�����?\n(1 - ���; 2 - �)" << endl;
		cin >> choise;
		if (choise == 1) { break; }
	}
}