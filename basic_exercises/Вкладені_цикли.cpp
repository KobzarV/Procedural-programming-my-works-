#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



/*������� 1
������������ ������ �����. ���������� ���������� ����
� ���� �����, ��������� �� ����� � ������� ��������������.
���������� ���������� ����� � ���� �����. ������� � ������������� ������������ ����� ����.*/
	/*cout << "�������� �1" << endl;
	int number, n, sum, count, count_null, choise, temp;
	float sr_ar;
	cout << "������ ����� - "; cin >> number;
	do
	{
		sum = 0; count = 0; count_null = 0;
		cout << "1. ��������� ������� ���� � ����;" << endl;
		cout << "2. ���������� ���� ���� ��������� �����;" << endl;
		cout << "3. ������ ������ ����������� ���� ��������� �����;" << endl;
		cout << "4. ��������� ������� ���� � ����;" << endl;
		cout << "5. ������ ���� �����;" << endl;
		cout << "6. Exit;" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			temp = number;
			while (temp > 0)
			{
				temp /= 10;
				count += 1;
			}
			cout << "ʳ������ ���� � ����� ���� = " << count << endl;
			break;
		case 2:
			temp = number;
			while (temp > 0)
			{
				n = temp % 10;
				sum += n;
				temp /= 10;
			}
			cout << "C��� ���� ��������� ����� = " << sum << endl;
			break;
		case 3:
			temp = number;
			while (temp > 0)
			{
				n = temp % 10;
				sum += n;
				temp /= 10;
				count += 1;
			}
			sr_ar = (float)sum / count;
			cout << "C����� ����������� ���� ��������� ����� = " << sr_ar << endl;
			break;
		case 4:
			temp = number;
			while (temp > 0)
			{
				n = temp % 10;
				sum += n;
				if (n == 0) { count_null += 1; }
				temp /= 10;
			}
			cout << "ʳ������ ���� � ���� = " << count_null << endl;
			break;
		case 5:
			cout << "������ ���� ����� - "; cin >> number;
			break;
		case 6:
			break;
		default:
			cout << "������� ���� �� ������ ����!!! (1-6)" << endl;
		}
	} while (choise != 6);*/


/*������� 2
�������� ���������, ������� ������� �� ����� ���������
����� � �������� �������� ��������. 
��������,
***---***---***---***---
***---***---***---***---
***---***---***---***---
---***---***---***---***
---***---***---***---***
---***---***---***---****/
	/*cout << "�������� �2" << endl;
	int size;
	cout << "���������" << endl;  //8x8
	cout << "������ ����� ������� - "; cin >> size;
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 0; j < size; j++)
			{
				for (int k = 0; k < 8; k++)
				{
					if (k % 2 != 0)  { for (int r = 0; r < size; r++) { cout << "W"; } }  // �� ������
					else { for (int r = 0; r < size; r++) { cout << "b"; } }  // ���� ������
				}
				cout << endl;
			}
		}
		else
		{
			for (int j = 0; j < size; j++)
			{
				for (int k = 0; k < 8; k++)
				{
					if (k % 2 != 0) { for (int r = 0; r < size; r++) { cout << "b"; } }  // ���� ������
					else { for (int r = 0; r < size; r++) { cout << "W"; } }    // �� ������
				}
				cout << endl;
			}
		}
	}*/



/*������� 3
����������� ��������� ������� ������ � ���������
��� �������, ��� ����� ����� ���� �� ��������� ������� �
������ ������ ��������� ���� ����� ������. ����������
�������� � ������������ �� ������� ������� �����. �����
������� �������� ���������� ���� (�������� ��������,
������������ ������� � �� ����) � �� ��������. ������������� ����������� ������ ���������� ��������� ���� ���
�������, ���� �� ������ �������� ��� ���-�� � ���� �����.
��������� ������ ��������� � �������� ����� ������
������ ���� ��������.*/
	/*cout << "�������� �3" << endl;
	cout << "��������" << endl;
	int count_people, choise, i = 1;
	float food_price, drink_price, all_price = 0;

	while (true)
	{
		cout << "�� ������� ����� ���� ����������?" << endl; cin >> count_people;
		if (count_people <= 0 || count_people > 15)   // ������'������ ��������
		{
			cout << " �������, ��� �� �� ������ �������� ���� ����������. ��������� �� ���." << endl;
		}
		else
		{
			do
			{
				cout << "\n\t�볺�� �" << i << "\n\n";
				while (true)
				{
					cout << "\t����" << "\n\n";
					cout << "\t����" << endl;
					cout << "1. ѳ� (�� ����) - 1.42 $" << endl;
					cout << "2. Coca Cola - 1.65 $" << endl;
					cout << "3. ��������� ���� - 1.51 $" << endl;
					cout << "4. ���� - 2.14 $" << endl;
					cin >> choise;
					if (choise > 0 && choise <= 4)
					{
						switch (choise)
						{
						case 1:
							drink_price = 1.42;
							break;
						case 2:
							drink_price = 1.65;
							break;
						case 3:
							drink_price = 1.51;
							break;
						case 4:
							drink_price = 2.14;
							break;
						}
						all_price += drink_price;
						cout << "������ �� ����? \n 1-���; 2-�" << endl; cin >> choise;
						if (choise == 2) { break; }
					}
					else
					{
						cout << "������� ���� �� ����!!! (1-4)" << endl;
					}
				}

				while (true)
				{
					cout << "\t�������" << endl;
					cout << "1. ҳ������ � ������ - 6.78 $" << endl;
					cout << "2. �������� ����� - 5.98 $" << endl;
					cout << "3. ������ - 6.25 $" << endl;
					cout << "4. �������� - 7.43 $" << endl;
					cin >> choise;
					if (choise > 0 && choise <= 4)
					{
						switch (choise)
						{
						case 1:
							food_price = 6.78;
							break;
						case 2:
							food_price = 5.98;
							break;
						case 3:
							food_price = 6.25;
							break;
						case 4:
							food_price = 7.43;
							break;
						}
						all_price += food_price;
						cout << "������ �� ����? \n 1-���; 2-�" << endl; cin >> choise;
						if (choise == 2) { break; }
					}
					else
					{
						cout << "������� ���� �� ����!!! (1-4)" << endl;
					}
				}
				i++;
				count_people--;
			} while (count_people != 0);
			cout << "�� ������ = " << all_price << " $" << endl;
			break;
		}
	}*/


/*������� 4
���� ������ ���� ���� �������� ���.
������� � ������� ������ ����� ����:
A0 B0 C0 D0 E0 F0 G0 H0 I0 J0
A1 B1 C1 D1 E1 F1 G1 H1 I1 J1
�..
A9 B9 C9 D9 E9 F9 G9 H9 I9 J9*/
	/*cout << "�������� �4" << endl;
	cout << "�������� �� (����)" << endl;  //10x10
	int simv;
	for (int i = 0; i < 10; i++)
	{
		simv = 65;   // A-J  65-74
		for (int j = 0; j < 10; j++)
		{
			cout << (char)simv << i << " ";
			simv++;
		}
		cout << endl;
	}*/
}