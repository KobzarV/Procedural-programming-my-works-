#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*ЗАДАНИЕ 1
Вывести на экран фигуры, заполненные звездочками.
Диалог с пользователем реализовать при помощи меню.*/
	int choise, n, i, j;
	while (true)
	{
		cout << "Обери, якц фігуру вивести на екран :" << endl;
		cout << "1. Над основною діагоналлю" << endl;
		cout << "2. Під основною діагоналлю" << endl;
		cout << "3. Верхній трикутник" << endl;
		cout << "4. Нижній трикутник" << endl;
		cout << "5. Піщаний годинник" << endl;
		cout << "6. Горизонтальний піщаний годинник" << endl;
		cout << "7. Лівий трикутник" << endl;
		cout << "8. Правий трикутник" << endl;
		cout << "9. Над побічною діагоналлю" << endl;
		cout << "10. Під побічною діагоналлю" << endl;
		cout << "11. Exit" << endl;
		cin >> choise;
		if (choise == 11) { break; }
		cout << "Введіть розміри - "; cin >> n;
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
			cout << "Виберіть один пункт з меню!!! (1-11)" << endl;
		}
	}
}
