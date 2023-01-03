#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*ЗАДАНИЕ 1
Пользователь вводит с клавиатуры символ. Определить,
какой это символ: Буква, цифра, знак препинания или другое*/

	/*cout << "Задача №1" << endl;
	char symvol;
	cout << "Введи символ - "; 
	cin >> symvol;
	if (isalpha(symvol))
	{
		cout << "Введений символ - буква!" << endl;
	}
	else if (isdigit(symvol))
	{
		cout << "Введений символ - число!" << endl;
	}
	else if (ispunct(symvol))
	{
		cout << "Введений символ - знак пунктуації!" << endl;
	}
	else
	{
		cout << "Це незрозумілий символ!" << endl;
	}*/


/*ЗАДАНИЕ 2
Написать программу подсчета стоимости разговора для
разных мобильных операторов. Пользователь вводит 
длительность разговора и выбирает с какого на какой оператор
он звонит. Вывести стоимость на экран.*/

	/*cout << "Задача №2" << endl;
	float min, kievstar, vodafone, life;
	int my_operator, your_operator;
	kievstar = 1.07;
	vodafone = 1.55;
	life = 1.69;
	cout << "Київстар - " << kievstar << " (грн/хв)" << endl;
	cout << "Vodafone - " << vodafone << " (грн/хв)" << endl;
	cout << "Life - " << life << " (грн/хв)" << endl;
	while (true)
	{
		cout << "\nВибери свого оператора : " << endl;
		cout << "1. Київстар\n2. Vodafone\n3. Life" << endl;
		cin >> my_operator;
		cout << "Вибери оператора, до якого телефонуєш : " << endl;
		cout << "1. Київстар\n2. Vodafone\n3. Life" << endl;
		cin >> your_operator;
		cout << "Введіть кіськість хвилин розмови : "; cin >> min;
		if (my_operator == your_operator)
		{
			cout << "Дзвінки через того самого оператора - безкоштовні!" << endl;
			break;
		}
		if (my_operator <= 3 && your_operator <= 3)
		{
			switch (my_operator)
			{
			case 1:
				if (your_operator == 2 || your_operator == 3)
				{
					cout << "Вартість розмови = " << kievstar * min << endl;
				}
				break;
			case 2:
				if (your_operator == 1 || your_operator == 3)
				{
					cout << "Вартість розмови = " << vodafone * min << endl;
				}
				break;
			case 3:
				if (your_operator == 1 || your_operator == 2)
				{
					cout << "Вартість розмови = " << life * min << endl;
				}
				break;
			}
			break;
		}
		else { cout << "Некоректний вибір операторів!" << endl; }
	}*/


/*ЗАДАНИЕ 3
Вася работает программистом и получает 50$ за каждые
100 строк кода. За каждое третье опоздание на работу Васю
штрафуют на 20$. Реализовать меню:
+ пользователь вводит желаемый доход Васи и количество
опозданий, посчитать, сколько строк кода ему надо написать;
+ пользователь вводит количество строк кода, написанное
Васей и желаемый объем зарплаты. Посчитать, сколько
раз Вася может опоздать;
+ пользователь вводит количество строк кода и количество
опозданий, определить, сколько денег заплатят Васе и
заплатят ли вообще*/


	/*cout << "Задача №3" << endl;
	int str_of_code=0, lates=0, money_want=0, choise, lates_money = 0;
	cout << "Вася отримує 50$ за 100 рядків коду, за кожне 3 запізнення його штрафують на 20$." << endl;
	float money, str1 = 0.5;
	while (true)
	{
		cout << "\n\t\t Menu (Програміст Вася)" << endl;
		cout << "1) Вводиться : бажаний дохід та кількість запізень; Виводиться : кількість рядків коду." << endl;
		cout << "2) Вводиться : бажаний дохід та кількість рядків коду; Виводиться : кількість допустимих запізнень." << endl;
		cout << "3) Вводиться : кількість рядків коду та кількість запізень; Виводиться : зарплата(якщо взагалі буде)." << endl;
		cout << "4) Вихід." << endl;
		cin >> choise;
		if (choise > 0 && choise <= 3)
		{
			switch(choise)
			{
			case 1:
				cout << "Бажаний дохід Васі = "; cin >> money_want;
				cout << "Кількість запізнень = "; cin >> lates;
				str_of_code = money_want * str1;
				if (lates >= 3)
				{
					lates_money = (lates / 3) * 20;   // + 40 кода закожне запізненн
					str_of_code += lates_money / str1;
				}
				cout << "Щоб отримати бажану суму потрібно - " << str_of_code << " рядків коду." << endl;
				break;
			case 2:
				cout << "Бажаний дохід Васі = "; cin >> money_want;
				cout << "Кількість рядків коду = "; cin >> str_of_code;
				money = str_of_code * str1;
				if (money_want <= money) 
				{
					lates = (money - money_want) / 20 * 3;
					cout << "Кількість запізнень допустимих для Васі - " << lates + 2;
				}
				else { cout << "Васі не можна запізнюватися!!!" << endl; }
				break;
			case 3:
				cout << "Кількість рядків коду = "; cin >> str_of_code;
				cout << "Кількість запізнень = "; cin >> lates;
				money = str_of_code * str1;
				if (lates >= 3)
				{
					lates_money = (lates / 3) * 20;
					if (lates_money >= money) { cout << "Вася нічого не отримає!!!" << endl; }
					else{ cout << "Вася отримає " << money-lates_money << "$" << endl; }
				}
				else
				{
					cout << "Вася отримає " << money << "$" << endl;
				}
				break;
			}
		}
		else if (choise == 4) { break; }
		else { cout << "Виберіть один з пунктів меню (1-3)!!!" << endl; }
	}*/
}