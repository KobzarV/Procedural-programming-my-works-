#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


/*ЗАДАНИЕ 1
Написать программу, реализующую процедуры заказа и
расчета его суммы в мини — пиццерии. В меню пиццерии
предусмотрено 4 вида пиццы и три вида напитков.
Пользователю выводится меню (вначале пиццы, потом
напитки), содержащее код и название. Пользователь вводит
код желаемого продукта, после чего вводит количество единиц
данного продукта.
В пиццерии предусмотрены два вида скидок:
■ если общая сумма заказа более 50$, то размер скидки составляет 20% от суммы заказа;
■ каждая пятая пицца — в подарок;
■ для напитков с ценой более 2$, если количество в 
заказе более трех, то скидка 15% (только на напитки, а не на весь заказ).
Вывести пользователю «чек» для оплаты в виде: название —
количество — цена. Итого к оплате.*/

	/*cout << "Задача №1" << endl;
	cout << "Піцерія" << endl;
	int pizza_ID, drink_ID, pizza5_free, pizza_count = 0, drink_count = 0, check=0;
	float pizza_price, pizza_price1, pizza_price2, pizza_price3, pizza_price4;
	float drink_price, drink_price1, drink_price2, drink_price3;
	float check_price_pizza=0, check_price_drink=0, final_check=0;
	float procent_all = 0.2, procent_drink = 0.15;

	pizza_price1 = 5.95;
	pizza_price2 = 7.15;
	pizza_price3 = 8.50;
	pizza_price4 = 9.99;
	drink_price1 = 1.84;
	drink_price2 = 2.07;
	drink_price3 = 2.44;

	while (true)
	{
		check = 0;
		cout << "\tМеню\n\tПіца" << endl;
		cout << "1. Гавайська - $ " << pizza_price1 << endl;
		cout << "2. Салямі - $ " << pizza_price2 << endl;
		cout << "3. Чотири сира - $ " << pizza_price3 << endl;
		cout << "4. BBQ - $ " << pizza_price4 << endl;
		cout << "Виберіть код піци (1-4): "; cin >> pizza_ID;
		cout << "Введіть кількість піц: "; cin >> pizza_count;

		cout << "\tНапої" << endl;
		cout << "1. Фруктовий фреш (0,5 л.) - $ " << drink_price1 << endl;
		cout << "2. Апельсиновий сік (0,75 л.) - $ " << drink_price2 << endl;
		cout << "3. Coca Cola (0,75 л.) - $ " << drink_price3 << endl;
		cout << "Виберіть код напою (1-3): "; cin >> drink_ID;
		cout << "Введіть кількість напоїв: "; cin >> drink_count;

		switch (pizza_ID)
		{
		case 1:
			pizza_price = pizza_price1;
			break;
		case 2:
			pizza_price = pizza_price2;
			break;
		case 3:
			pizza_price = pizza_price3;
			break;
		case 4:
			pizza_price = pizza_price4;
			break;
		default:
			cout << "Зробіть замовлення знову і введіть код товару правильно (1-4)!!!" << endl;
			check = 1;
		}

		switch (drink_ID)
		{
		case 1:
			drink_price = drink_price1;
			break;
		case 2:
			drink_price = drink_price2;
			break;
		case 3:
			drink_price = drink_price3;
			break;
		default:
			cout << "Зробіть замовлення знову і введіть код товару правильно (1-3)!!!" << endl;
			check = 1;
		}

		if (check == 0) { break; }
	}
		cout << "\tРахунок" << endl;
		if (pizza_count >= 5)
		{
			cout << "Вітаємо! Ви отримує кожну 5-ту піцу в подарунок!" << endl;
			pizza5_free = pizza_count / 5;
			pizza_count -= pizza5_free;
		}
		check_price_pizza = pizza_price * pizza_count;

		if (drink_price > 2 && drink_count >= 3)
		{
			cout << "Ви взяли більше 3-х напоїв дорожчиш за 2$! Знижка на напої - 15 %" << endl;
			drink_price = drink_price * (1. - procent_drink);
		}
		check_price_drink = drink_price * drink_count;

		final_check = check_price_drink + check_price_pizza;
		if (final_check >= 50)
		{
			cout << "Ви взяли товару на суму більше 50 $. Вам нараховано знижку - 20 %" << endl;
			final_check = final_check * (1. - procent_all);
		}
		cout << "Продукт\tкод\tштук\tціна" << endl;
		cout << "Піца:\t" << pizza_ID << "\t" << pizza_count << "\t" << check_price_pizza << " $" << endl;
		cout << "Напої:\t" << drink_ID << "\t" << drink_count << "\t" << check_price_drink << " $" << endl;
		cout << "До оплати - " << final_check << " $" << endl;
		cout << "Смачного!" << endl;*/


/*ЗАДАНИЕ 2
Зарплата менеджера составляет 200$ + процент от продаж,
продажи до 500$ — 3%, от 500 до 1000 — 5%, свыше 1000 —
8%. Пользователь вводит с клавиатуры уровень продаж
для трех менеджеров. Определить их зарплату, определить
лучшего менеджера, начислить ему премию 200$, вывести
итоги на экран.
Примечание: уровень продаж у всех трех менеджеров
разный.*/


		/*cout << "Задача №2" << endl;
		float manager_1, manager_2, manager_3;
		float salary_1, salary_2, salary_3;
		float percent_1, percent_2, percent_3;
		int premia = 200;

		percent_1 = 0.03; percent_2 = 0.05; percent_3 = 0.08;
		salary_1 = salary_2 = salary_3 = 200;
		cout << "Введіть рівень продажів 1 менеджера - "; cin >> manager_1;
		cout << "Введіть рівень продажів 2 менеджера - "; cin >> manager_2;
		cout << "Введіть рівень продажів 3 менеджера - "; cin >> manager_3;
		// manager 1
		if (manager_1 < 500) 
		{
			salary_1 += manager_1 * percent_1;
		}
		else if (manager_1 >= 500 && manager_1 < 1000)
		{
			salary_1 += manager_1 * percent_2;
		}
		else
		{
			salary_1 += manager_1 * percent_3;
		}
		// manager 2
		if (manager_2 < 500)
		{
			salary_2 += manager_2 * percent_1;
		}
		else if (manager_2 >= 500 && manager_2 < 1000)
		{
			salary_2 += manager_2 * percent_2;
		}
		else
		{
			salary_2 += manager_2 * percent_3;
		}
		// manager 3
		if (manager_3 < 500)
		{
			salary_3 += manager_3 * percent_1;
		}
		else if (manager_3 >= 500 && manager_3 < 1000)
		{
			salary_3 += manager_3 * percent_2;
		}
		else
		{
			salary_3 += manager_3 * percent_3;
		}
		//Перевіримо найпродуктивнішого
		if (manager_1 >= manager_2 && manager_1 >= manager_3)
		{
			salary_1 += premia;
			cout << "Найкращий менеджер перший"<<endl;
		}
		else if (manager_2 > manager_1 && manager_2 >= manager_3)
		{
			salary_2 += premia;
			cout << "Найкращий менеджер другий"<<endl;
		}
		else
		{
			salary_3 += premia;
			cout << "Найкращий менеджер третій"<<endl;
		}
		cout << "Зарплата 1 менеджера - " << salary_1 << endl;
		cout << "Зарплата 2 менеджера - " << salary_2 << endl;
		cout << "Зарплата 3 менеджера - " << salary_3 << endl;*/
}