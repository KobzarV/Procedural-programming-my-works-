#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



/*ЗАДАНИЕ 1
Пользователь вводит число. Определить количество цифр
в этом числе, посчитать их сумму и среднее арифметическое.
Определить количество нулей в этом числе. Общение с пользователем организовать через меню.*/
	/*cout << "Завдання №1" << endl;
	int number, n, sum, count, count_null, choise, temp;
	float sr_ar;
	cout << "Введіть число - "; cin >> number;
	do
	{
		sum = 0; count = 0; count_null = 0;
		cout << "1. Визначити кількість цифр у числі;" << endl;
		cout << "2. Обрахувати суму цифр введеного числа;" << endl;
		cout << "3. Знайти середнє арифметичне цифр введеного числа;" << endl;
		cout << "4. Визначити кількість нулів у числі;" << endl;
		cout << "5. Ввести інше число;" << endl;
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
			cout << "Кількість цифр у цьому числі = " << count << endl;
			break;
		case 2:
			temp = number;
			while (temp > 0)
			{
				n = temp % 10;
				sum += n;
				temp /= 10;
			}
			cout << "Cуму цифр введеного числа = " << sum << endl;
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
			cout << "Cереднє арифметичне цифр введеного числа = " << sr_ar << endl;
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
			cout << "Кількість нулів у числі = " << count_null << endl;
			break;
		case 5:
			cout << "Введіть інше число - "; cin >> number;
			break;
		case 6:
			break;
		default:
			cout << "Виберіть один із пунктів меню!!! (1-6)" << endl;
		}
	} while (choise != 6);*/


/*ЗАДАНИЕ 2
Написать программу, которая выводит на экран шахматную
доску с заданным размером клеточки. 
Например,
***---***---***---***---
***---***---***---***---
***---***---***---***---
---***---***---***---***
---***---***---***---***
---***---***---***---****/
	/*cout << "Завдання №2" << endl;
	int size;
	cout << "Шахівниця" << endl;  //8x8
	cout << "Введіть розмір клітинок - "; cin >> size;
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 0; j < size; j++)
			{
				for (int k = 0; k < 8; k++)
				{
					if (k % 2 != 0)  { for (int r = 0; r < size; r++) { cout << "W"; } }  // білі комірки
					else { for (int r = 0; r < size; r++) { cout << "b"; } }  // чорні комірки
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
					if (k % 2 != 0) { for (int r = 0; r < size; r++) { cout << "b"; } }  // чорні комірки
					else { for (int r = 0; r < size; r++) { cout << "W"; } }    // білі комірки
				}
				cout << endl;
			}
		}
	}*/



/*ЗАДАНИЕ 3
Реализовать программу расчета заказа в кафетерии
при условии, что заказ может быть на несколько человек и
каждый клиент формирует свою часть заказа. Необходимо
спросить у пользователя на сколько человек заказ. Далее
каждому человеку выводиться меню (названия напитков,
кондитерских изделий и их цена) и он выбирает. Предусмотреть возможность выбора нескольких элементов меню для
клиента, если он желает добавить еще что-то в свой заказ.
Результат работы программы — итоговая сумма общего
заказа всей компании.*/
	/*cout << "Завдання №3" << endl;
	cout << "Кафетерій" << endl;
	int count_people, choise, i = 1;
	float food_price, drink_price, all_price = 0;

	while (true)
	{
		cout << "На скількох людей буде замовлення?" << endl; cin >> count_people;
		if (count_people <= 0 || count_people > 15)   // необов'язкова перевірка
		{
			cout << " Вибачте, але ми не можемо прийняти таке замовлення. Спробуйте ще раз." << endl;
		}
		else
		{
			do
			{
				cout << "\n\tКлієнт №" << i << "\n\n";
				while (true)
				{
					cout << "\tМеню" << "\n\n";
					cout << "\tНапої" << endl;
					cout << "1. Сік (на вибір) - 1.42 $" << endl;
					cout << "2. Coca Cola - 1.65 $" << endl;
					cout << "3. Фруктовий фреш - 1.51 $" << endl;
					cout << "4. Кава - 2.14 $" << endl;
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
						cout << "Бажаєте ще щось? \n 1-так; 2-ні" << endl; cin >> choise;
						if (choise == 2) { break; }
					}
					else
					{
						cout << "Виберіть щось із меню!!! (1-4)" << endl;
					}
				}

				while (true)
				{
					cout << "\tДесерти" << endl;
					cout << "1. Тістечко з джемом - 6.78 $" << endl;
					cout << "2. Шматочок торта - 5.98 $" << endl;
					cout << "3. Бісквіт - 6.25 $" << endl;
					cout << "4. Морозиво - 7.43 $" << endl;
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
						cout << "Бажаєте ще щось? \n 1-так; 2-ні" << endl; cin >> choise;
						if (choise == 2) { break; }
					}
					else
					{
						cout << "Виберіть щось із меню!!! (1-4)" << endl;
					}
				}
				i++;
				count_people--;
			} while (count_people != 0);
			cout << "До оплати = " << all_price << " $" << endl;
			break;
		}
	}*/


/*ЗАДАНИЕ 4
Есть пустое поле игры «Морской бой».
Вывести в консоль номера полей игры:
A0 B0 C0 D0 E0 F0 G0 H0 I0 J0
A1 B1 C1 D1 E1 F1 G1 H1 I1 J1
…..
A9 B9 C9 D9 E9 F9 G9 H9 I9 J9*/
	/*cout << "Завдання №4" << endl;
	cout << "Морський бій (поле)" << endl;  //10x10
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