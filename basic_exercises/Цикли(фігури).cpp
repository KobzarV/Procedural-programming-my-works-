#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*������� 1
������� �� ����� ������, ����������� �����������.
������ � ������������� ����������� ��� ������ ����.*/
	int choise, n, i, j;
	while (true)
	{
		cout << "�����, ��� ������ ������� �� ����� :" << endl;
		cout << "1. ��� �������� ���������" << endl;
		cout << "2. ϳ� �������� ���������" << endl;
		cout << "3. ������ ���������" << endl;
		cout << "4. ����� ���������" << endl;
		cout << "5. ϳ����� ��������" << endl;
		cout << "6. �������������� ������ ��������" << endl;
		cout << "7. ˳��� ���������" << endl;
		cout << "8. ������ ���������" << endl;
		cout << "9. ��� ������� ���������" << endl;
		cout << "10. ϳ� ������� ���������" << endl;
		cout << "11. Exit" << endl;
		cin >> choise;
		if (choise == 11) { break; }
		cout << "������ ������ - "; cin >> n;
		switch (choise)
		{
		case 1:
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					if (i > j) { cout << " "; }
					else { cout << "*"; }
				}
				cout << endl;
			}
			break;
		case 2:
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					if (i >= j) { cout << "*"; }
				}
				cout << endl;
			}
			break;
		case 3:
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n - i; j++)
				{
					if (j >= i) { cout << "*"; }
					else { cout << " "; }
				}
				cout << "\n";
			}
			break;
		case 4:
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					if (i >= j && i + j >= n)
						cout << "*";
					else cout << " ";
				}
				cout << endl;
			}
			break;
		case 5:
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					if (j == 1 && i <= n/2) { cout << " "; }
					if (i <= j && i + j <= n) { cout << "*"; }
					else { cout << " "; }
					if (i > j && i + j > n) { cout << "*"; }
					else { cout << " "; }
				}
				cout << '\n';
			}
			break;
		case 6:
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					if (i >= j && i + j <= n) { cout << "*"; }
					else { cout << " "; }
					if (i < j && i + j > n) { cout << "*"; }
					else { cout << " "; }
				}
				cout << endl;
			}
			break;
		case 7:
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					if (i >= j && i + j <= n+1) { cout << "*"; }
					else { cout << " "; }
				}
				cout << endl;
			}
			break;
		case 8:
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					if (i <= j && i + j > n) { cout << "*"; }
					else { cout << " "; }
				}
				cout << endl;
			}
			break;
		case 9:
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					if (i + j <= n+1) { cout << "*"; }
					else { cout << " "; }
				}
				cout << endl;
			}
			break;
		case 10:
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= n; j++)
				{
					if (i + j >= n + 1) { cout << "*"; }
					else { cout << " "; }
				}
				cout << endl;
			}
			break;
		default:
			cout << "������� ���� ����� � ����!!! (1-11)" << endl;
		}
	}
}