#include <iostream>
#include <Windows.h>
#include <random>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*������� 1
� ���������� �������, ����������� ���������� �������,
���������� ����������� � ������������ ��������.*/
	/*cout << "�������� �1" << endl;
	int const n = 10;
	int mas[n], max, min;
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		mas[i] = -10 + rand() % 21;
		cout << mas[i] << " ";
	}
	max = mas[0]; min = mas[0];
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > max) { max = mas[i]; }
		if (mas[i] < min) { min = mas[i]; }
	}
	cout << "\n Max = " << max << "\nMin = " << min << endl;*/



/*������� 2
� ���������� �������, ����������� ���������� �������
� �������� ������������� ���������, ����� ����� ���������,
�������� ������� ������ ���������� �������������.*/
	/*cout << "�������� �2" << endl;
	int const N = 10;
	int mas[N], a, b, num, sum = 0;
	srand(time(0));
	cout << "������ ������� �������� \n³� "; cin >> a;
	cout << "�� "; cin >> b;
	if (a > b) 
	{
		int s;
		s = a; a = b; b = s;
	}
	cout << "������ ����� - "; cin >> num;
	for (int i = 0; i < N; i++)
	{
		mas[i] = a + rand() % (b-a+1);
		cout << mas[i] << " ";
	}
	for (int i = 0; i < N; i++)
	{
		if (mas[i] <= num)
		{
			sum += mas[i];
		}
	}
	cout << "\n���� �������� ������ �� " << num << " = " << sum << endl;*/



/*������� 3
������������ ������ ������� ����� �� ��� (12 �������).
����� ������������ ������ �������� (��������, 3 � 6 � �����
����� 3-� � 6-� �������). ���������� ���������� �����,
� ������� ������� ���� ����������� � �����, � �������
������� ���� ���������� � ������ ���������� ���������.*/
	/*cout << "�������� �3" << endl;
	int const m = 12;
	int mas3[m], max, min, min_i=0, max_i=0, x, y, i;
	while (true)
	{
		cout << "������ ������� \n³� "; cin >> x;
		cout << "�� "; cin >> y;
		if (x > y)
		{
			int s;
			s = x; x = y; y = s;
		}
		if (x > 0 && y <= 12 && x!=y) { break; }
		else { cout << "������ ����� �����!!!(1-12)" << endl; }
	}
	for (i = 0; i < m; i++)
	{
		++i;
		cout << "������ �������� ����� �� " << i-- << " ����� = ";
		cin >> mas3[i];
	}
	max = mas3[x];
	min = mas3[x];
	for (i = x-1; i < y; i++)
	{
		if (mas3[i] > max)
		{
			max = mas3[i];
			max_i = i;
		}
	}
	for (i = x-1; i < y; i++)
	{
		if (mas3[i] < min)
		{
			min = mas3[i];
			min_i = i;
		}
	}
	cout << "̳���� " << ++max_i << " ��������������� (" << max << " $)" << endl;
	cout << "̳���� " << ++min_i << " ������� ����������� (" << min << " $)" << endl;*/



/*������� 4
� ���������� �������, ��������� �� N ������������
����� ���������:
+ ����� ������������� ���������.
+ ������������ ���������, ����������� ����� min � max
����������.
+ ������������ ��������� � ������� ��������.
+ ����� ���������, ����������� ����� ������ � ��������� �������������� ����������.*/
	cout << "�������� �4" << endl;
	int const n = 10;
	int mas[n], max, min, sum1 = 0, min_max = 1, dob = 1;
	int last, first, first_last = 0, max_i=0, min_i=0;
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		mas[i] = -10 + rand() % 21;
		cout << mas[i] << " ";
	}
	max = mas[0]; min = mas[0];
	for (int i = 0; i < n; i++) 
	{ 
		if (mas[i] > max) { max = mas[i]; max_i = i; }
		if (mas[i] < min) { min = mas[i]; min_i = i; }
	}
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0) { sum1 += mas[i]; }
		if (i % 2 == 0)
		{
			dob *= mas[i];
		}
	}
	for (int i = n - 1; i >= 0; i--) { if (mas[i] < 0) { last = i;  break; } }
	for (int i = 0; i < n; i++) { if (mas[i] < 0) { first = i; break; } }
	for (int i = first; i <= last; i++) { first_last += mas[i]; }
	for (int i = min_i; i <= max_i; i++)
	{
		min_max *= mas[i];
	}
	cout << "\n���� ��'����� �������� ������ = " << sum1 << endl;
	cout << "������� �������� ������ �� ������������ � ��������� ��������� = " << min_max << endl;
	cout << "������� �������� ������ � ������� �������� = " << dob << endl;
	cout << "���� �������� ������ �� ������ � ������� ��'����� ��������� = " << first_last << endl;
}