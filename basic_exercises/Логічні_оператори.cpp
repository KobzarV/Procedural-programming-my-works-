#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

/*??????? 1
???????????? ?????? ? ?????????? ????? ????????????
?????. ???????? ?????????, ??????? ??????????, ???????? ??
????????? ????? ? ?????????? (?????????? ????????? ????????????
 ?????, ? ???????? ????? ?????? 3 ???? ????? ?????
?????? ???? ????). ???? ???????????? ???? ?? ????????????
????? ? ????????? ?? ??????.*/

	/*cout << "???????? ?1" << endl;
	int num = 0,n1,n2,n3,n4,n5,n6;
	cout << "??????? ???? ??????????? ????? :" << endl;
	cin >> num;
	if (num < 100000 && num > 999999)
	{
		cout << "Error! ??????? ??????????? ?????!" << endl;
	}
	//123456
	n6 = num % 10;  //6
	num = num / 10;
	n5 = num % 10;  //5
	num = num / 10;
	n4 = num % 10;  //4
	num = num / 10;
	n3 = num % 10;  //3
	num = num / 10;
	n2 = num % 10;  //2
	num = num / 10;
	n1 = num % 10;  //1
	if (n1 + n2 + n3 == n4 + n5 + n6) { cout << "????? ???????!" << endl; }
	else { cout << "????? ?? ???????." << endl; }*/


/*??????? 2
???????????? ?????? ?????????????? ?????. ??????????
???????? ? ???? ????? 1 ? 2 ?????, ? ????? 3 ? 4 ?????. ????
???????????? ?????? ?? ?????????????? ????? ? ???????
????????? ?? ??????.*/

	/*cout << "???????? ?2" << endl;
	int number, num1, num2, num3, num4;
	cout << "??????? ???? 4-?????? ????? :" << endl;
	cin >> number;
	if (number < 1000 && number > 9999)
	{
		cout << "Error! ??????? 4-?????? ?????!" << endl;
	}
	num4 = number % 10;
	number = number / 10;
	num3 = number % 10;
	number = number / 10;
	num2 = number % 10;
	number = number / 10;
	num1 = number % 10;
	int numb = (num2 * 1000) + (num1 * 100) + (num4 * 10) + num3;
	cout << numb << endl;*/

/*??????? 3
???????????? ?????? ? ?????????? 7 ????? ?????. ????????
?????????, ??????? ?????????? ???????????? ?? ???? 7 ?????.*/

	/*cout << "???????? ?3" << endl;
	int n_1, n_2, n_3, n_4, n_5, n_6, n_7;
	cout << "????? 7 ????? ????? :" << endl;
	cin >> n_1 >> n_2 >> n_3 >> n_4 >> n_5 >> n_6 >> n_7;
	if (n_1 >= n_2 && n_1 >= n_3 && n_1 >= n_4 && n_1 >= n_5 && n_1 >= n_6 && n_1 >= n_7)
	{
		cout << "????????? ????? - " << n_1 << endl;
	}
	 else if (n_2 > n_1 && n_2 >= n_3 && n_2 >= n_4 && n_2 >= n_5 && n_2 >= n_6 && n_2 >= n_7)
	{
		cout << "????????? ????? - " << n_2 << endl;
	}
	 else if (n_3 > n_1 && n_3 > n_2 && n_3 >= n_4 && n_3 >= n_5 && n_3 >= n_6 && n_3 >= n_7)
	{
		cout << "????????? ????? - " << n_3 << endl;
	}
	else if (n_4 > n_1 && n_4 > n_2 && n_4 > n_3 && n_4 >= n_5 && n_4 >= n_6 && n_4 >= n_7)
	{
		cout << "????????? ????? - " << n_4 << endl;
	}
	else if (n_5 > n_1 && n_5 > n_2 && n_5 > n_3 && n_5 > n_4 && n_5 >= n_6 && n_5 >= n_7)
	{
		cout << "????????? ????? - " << n_5 << endl;
	}
	else if (n_6 > n_1 && n_6 > n_2 && n_6 > n_3 && n_6 > n_4 && n_6 > n_5 && n_6 >= n_7)
	{
		cout << "????????? ????? - " << n_6 << endl;
	}
	else if (n_7 > n_1 && n_7 > n_2 && n_7 > n_3 && n_7 > n_4 && n_7 > n_5 && n_7 > n_6)
	{
		cout << "????????? ????? - " << n_7 << endl;
	}*/

/*??????? 4
???????? ??????? ?????? ????????? ? ?????? ?? ?????? ?
? ????? ? ????? ????? ?. ??????? ???? ??? ??????? ? ???????? ? 300 ??????. 
??????????? ??????? ?? 1 ?? ? ???????????
?? ???? ????? ? ???????? ?????????:
+ ?? 500 ?? ? 1 ??????/??;
+ ?? 1000 ?? ? 4 ??????/??;
+ ?? 1500 ?? ? 7 ??????/??;
+ ?? 2000 ?? ? 9 ??????/??;
+ ????? 2000 ?? ? ??????? ?? ?????????.
???????????? ?????? ?????????? ????? ???????? ? ? ?,
? ?????????? ????? ???????? ? ? ?, ? ????? ??? ?????. 
????????? ?????? ?????????? ????? ??????????? ??????????
??????? ?????????? ??? ?????????? ???????? ? ?????? ?,
????? ???????? ?? ?????? ? ? ????? ?. ? ?????? 
????????????? ?????????? ????? ?? ?????????? ? ????????? ??????
??????? ????????? ? ????????????? ?????? ?? ??????????
????????.*/

	/*cout << "???????? ?4" << endl;
	int fuel = 300, add_fuel = 0, minus_fuel = 0,minus_fuel2, dist_A_B = 0, dist_B_C = 0;
	int kg = 0, limit_kg1 = 500, limit_kg2 = 1000, limit_kg3 = 1500, limit_kg4 = 2000;
	int l_km = 0, l_km1 = 1, l_km2 = 4, l_km3 = 7, l_km4 = 9;
	cout << "??????? ???????? ??? ?????? ? ?? ?????? ? - ";
	cin >> dist_A_B;
	cout << "??????? ???????? ??? ?????? B ?? ?????? C - ";
	cin >> dist_B_C;
	cout << "??????? ???? ??????? - ";
	cin >> kg;
	if (kg <= limit_kg1) { l_km = l_km1; }
	else if (kg > limit_kg1 && kg <= limit_kg2) { l_km = l_km2; }
	else if (kg > limit_kg2 && kg<=limit_kg3) { l_km = l_km3; }
	else if (kg > limit_kg3 && kg<=limit_kg4) { l_km = l_km4; }
	else { cout << "˳??? ?? ????????!" << endl; }
	minus_fuel = l_km * dist_A_B;
	if (minus_fuel > fuel) { cout << "˳??? ?? ???????? ?????? ?!" << endl; }
	else
	{
		fuel -= minus_fuel;
		minus_fuel2 = l_km * dist_B_C;
		if (minus_fuel2 > 300) 
		{ 
			cout << "˳??? ?? ???????? ?????? C! ??? ?? ???????? ?? ????????? ??????, ??? ????????" << endl;
		}
		else if (minus_fuel2 > fuel)
		{
			add_fuel = minus_fuel2 - fuel;
			cout << "??????????? ? ?????? ? ???????? ??????? - " << add_fuel << " ??????" << endl;
		}
		else { cout << "?????????? ?? ????????."; }
	}*/
}