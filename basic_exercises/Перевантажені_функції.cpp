#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

int Array(int arr[][4], int size)
{
	int max = 0, min = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = -10 + rand() % 21;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	max = arr[0][0];
	min = arr[0][0];
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][i] < min) { min = arr[i][i]; }
			if (arr[i][i] > max) { max = arr[i][i]; }
		}
	}
	cout << "Максимальний елемент на головній діагоналі = " << max << endl;
	cout << "Мінімальний елемент на головній діагоналі = " << min << endl;
	return 0;
}

double Array(double arr[][4], int size)
{
	double max = 0, min = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = (-100 + rand() % 201) / 10.;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	max = arr[0][0];
	min = arr[0][0];
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][i] < min) { min = arr[i][i]; }
			if (arr[i][i] > max) { max = arr[i][i]; }
		}
	}
	cout << "Максимальний елемент на головній діагоналі = " << max << endl;
	cout << "Мінімальний елемент на головній діагоналі = " << min << endl;
	return 0;
}

char Array(char arr[][4], int size)
{
	double max = 0, min = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = 33 + rand() % 100;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	max = arr[0][0];
	min = arr[0][0];
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] < min) { min = arr[i][i]; }
			if (arr[i][i] > max) { max = arr[i][i]; }
		}
	}
	cout << "Максимальний елемент на головній діагоналі = " << max << '(' << (char)max << ')' << endl;
	cout << "Мінімальний елемент на головній діагоналі = " << min << '(' << (char)min << ')' << endl;
	return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*Написать перегруженные функции (int, double, char)
для выполнения следующих задач:
¦ Инициализация квадратной матрицы;
¦ Вывод матрицы на экран;
¦ Определение максимального и минимального элемента
на главной диагонали матрицы*/

	const int n = 4;
	int mas1[n][n];
	double mas2[n][n];
	char mas3[n][n];
	srand(time(0));
	Array(mas1, n); cout << endl;
	Array(mas2, n); cout << endl;
	Array(mas3, n); cout << endl;
}
