#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*������� 1
������������ ������ � ���������� ������. ����������,
����� ��� ������: �����, �����, ���� ���������� ��� ������*/

	/*cout << "������ �1" << endl;
	char symvol;
	cout << "����� ������ - "; 
	cin >> symvol;
	if (isalpha(symvol))
	{
		cout << "�������� ������ - �����!" << endl;
	}
	else if (isdigit(symvol))
	{
		cout << "�������� ������ - �����!" << endl;
	}
	else if (ispunct(symvol))
	{
		cout << "�������� ������ - ���� ����������!" << endl;
	}
	else
	{
		cout << "�� ����������� ������!" << endl;
	}*/


/*������� 2
�������� ��������� �������� ��������� ��������� ���
������ ��������� ����������. ������������ ������ 
������������ ��������� � �������� � ������ �� ����� ��������
�� ������. ������� ��������� �� �����.*/

	/*cout << "������ �2" << endl;
	float min, kievstar, vodafone, life;
	int my_operator, your_operator;
	kievstar = 1.07;
	vodafone = 1.55;
	life = 1.69;
	cout << "������� - " << kievstar << " (���/��)" << endl;
	cout << "Vodafone - " << vodafone << " (���/��)" << endl;
	cout << "Life - " << life << " (���/��)" << endl;
	while (true)
	{
		cout << "\n������ ����� ��������� : " << endl;
		cout << "1. �������\n2. Vodafone\n3. Life" << endl;
		cin >> my_operator;
		cout << "������ ���������, �� ����� ��������� : " << endl;
		cout << "1. �������\n2. Vodafone\n3. Life" << endl;
		cin >> your_operator;
		cout << "������ ������� ������ ������� : "; cin >> min;
		if (my_operator == your_operator)
		{
			cout << "������ ����� ���� ������ ��������� - ����������!" << endl;
			break;
		}
		if (my_operator <= 3 && your_operator <= 3)
		{
			switch (my_operator)
			{
			case 1:
				if (your_operator == 2 || your_operator == 3)
				{
					cout << "������� ������� = " << kievstar * min << endl;
				}
				break;
			case 2:
				if (your_operator == 1 || your_operator == 3)
				{
					cout << "������� ������� = " << vodafone * min << endl;
				}
				break;
			case 3:
				if (your_operator == 1 || your_operator == 2)
				{
					cout << "������� ������� = " << life * min << endl;
				}
				break;
			}
			break;
		}
		else { cout << "����������� ���� ���������!" << endl; }
	}*/


/*������� 3
���� �������� ������������� � �������� 50$ �� ������
100 ����� ����. �� ������ ������ ��������� �� ������ ����
�������� �� 20$. ����������� ����:
+ ������������ ������ �������� ����� ���� � ����������
���������, ���������, ������� ����� ���� ��� ���� ��������;
+ ������������ ������ ���������� ����� ����, ����������
����� � �������� ����� ��������. ���������, �������
��� ���� ����� ��������;
+ ������������ ������ ���������� ����� ���� � ����������
���������, ����������, ������� ����� �������� ���� �
�������� �� ������*/


	/*cout << "������ �3" << endl;
	int str_of_code=0, lates=0, money_want=0, choise, lates_money = 0;
	cout << "���� ������ 50$ �� 100 ����� ����, �� ����� 3 ��������� ���� ��������� �� 20$." << endl;
	float money, str1 = 0.5;
	while (true)
	{
		cout << "\n\t\t Menu (��������� ����)" << endl;
		cout << "1) ��������� : ������� ����� �� ������� �������; ���������� : ������� ����� ����." << endl;
		cout << "2) ��������� : ������� ����� �� ������� ����� ����; ���������� : ������� ���������� ��������." << endl;
		cout << "3) ��������� : ������� ����� ���� �� ������� �������; ���������� : ��������(���� ������ ����)." << endl;
		cout << "4) �����." << endl;
		cin >> choise;
		if (choise > 0 && choise <= 3)
		{
			switch(choise)
			{
			case 1:
				cout << "������� ����� ��� = "; cin >> money_want;
				cout << "ʳ������ �������� = "; cin >> lates;
				str_of_code = money_want * str1;
				if (lates >= 3)
				{
					lates_money = (lates / 3) * 20;   // + 40 ���� ������� ��������
					str_of_code += lates_money / str1;
				}
				cout << "��� �������� ������ ���� ������� - " << str_of_code << " ����� ����." << endl;
				break;
			case 2:
				cout << "������� ����� ��� = "; cin >> money_want;
				cout << "ʳ������ ����� ���� = "; cin >> str_of_code;
				money = str_of_code * str1;
				if (money_want <= money) 
				{
					lates = (money - money_want) / 20 * 3;
					cout << "ʳ������ �������� ���������� ��� ��� - " << lates + 2;
				}
				else { cout << "��� �� ����� ������������!!!" << endl; }
				break;
			case 3:
				cout << "ʳ������ ����� ���� = "; cin >> str_of_code;
				cout << "ʳ������ �������� = "; cin >> lates;
				money = str_of_code * str1;
				if (lates >= 3)
				{
					lates_money = (lates / 3) * 20;
					if (lates_money >= money) { cout << "���� ����� �� ������!!!" << endl; }
					else{ cout << "���� ������ " << money-lates_money << "$" << endl; }
				}
				else
				{
					cout << "���� ������ " << money << "$" << endl;
				}
				break;
			}
		}
		else if (choise == 4) { break; }
		else { cout << "������� ���� � ������ ���� (1-3)!!!" << endl; }
	}*/
}