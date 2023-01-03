#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

/*ЗАДАНИЕ 1
Вывести на экран один куплет любимого стихотворения
или песни, с указанием автора или исполнителя. Используйте
escape-последовательности для форматирования*/


	/*cout << "Завдання 1\n\n";
	cout << "Автор - Т.Г. Шевченко\nТвір - \"Садок вишневий коло хати\"\n"<<endl;
	cout << "Садок вишневий коло хати,\n";
	cout << "Хрущі над вишнями гудуть.\n";
	cout << "Плугатарі з плугами йдуть,\n";
	cout << "Співають, ідучи, дівчата,\n";
	cout << "А матері вечерять ждуть.\n\n";*/


/*ЗАДАНИЕ 2
Вывести на экран стих «Every hunter wants…» таким образом, 
чтобы каждый «цвет» начинался с новой строки и
соответствующим количеством табуляций.*/

	/*cout << "Завдання 2\n\n";  //Every hunter wants to know where does pheasant sit
	SetConsoleTextAttribute(hConsole, 11);
	cout << "Every" << endl;
	SetConsoleTextAttribute(hConsole, 8);
	cout << "\tHunter" << endl;
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\t\tWants" << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "\t\t\tTo know" << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "\t\t\t\tWhere" << endl;
	SetConsoleTextAttribute(hConsole, 4);
	cout << "\t\t\t\t\tDoes pheasant" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\t\t\t\t\t\t\tSit" << "\n\n";*/


/*ЗАДАНИЕ 3
Напишите объявление о продаже чего-нибудь и выведите его 
на экран, в том виде как оно должно было бы быть
напечатано.  Например:
Продам щенков.
Порода: ротвейлер.
…
Тел.: 222-22-22
222   | 222 |
22    | 22 |
22    | 22 |
и т.д.*/

	/*cout << "Завдання 3\n\n";
	cout << "\t\t\tПродається авто! (Б/У)"<< endl;
	cout << "\t\t\tМарка - Lada 2110"<<endl;
	cout << "\t\t\tРік випуску - 2006"<<endl;
	cout << "\t\t\tКоробка передач - механіка"<<endl;
	cout << "\t\t\tТип палива - Газ/бензин"<<endl;
	cout << "\t\t\tТелефон - (067)406-23-32"<<endl;
	cout << "\t\t\t(096)\t|256-12-09|\n";
	cout << "\t\t\t(098)\t|652-21-98|\n";
	cout << "\t\t\t(068)\t|912-76-00|\n";
	cout << "\t\t\t(096)\t|098-44-19|\n";*/
}
