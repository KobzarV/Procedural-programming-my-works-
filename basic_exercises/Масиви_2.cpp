#include <iostream>
#include <Windows.h>
#include <random>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

/*??????? 1
???????? ?????????, ?????????? ??????????????? ????????
?????? ??????? ???????? 10 ????????? ? 2 ??????? ????????
5 ????????? ??????. ???????? ??????????????? ??????? ?????
????????????? ? ???????????? ?????????.*/
	cout << "???????? ?1" << endl;
	int const n1 = 10, n2 = 5;
	int mas[n1], mas1[n2], mas2[n2];
	srand(time(0));
	cout << "???????? ?????" << endl;
	for (int i = 0; i < n1; i++)
	{
		mas[i] = -5 + rand() % 11;
		cout << mas[i] << " ";
	}
	cout << "\n?????? ?????" << endl;
	for (int i = 0; i < n2; i++)
	{
		mas1[i] = mas[i];
		cout << mas1[i] << " ";
	}
	cout << "\n?????? ?????" << endl;
	for (int i = 0; i < n2; i++)
	{
		mas2[i] = mas[i+n2];
		cout << mas2[i] << " ";
	}



/*??????? 2
???????? ?????????, ??????? ????????? ????????????
????? ???? ???????? ? ????????? ??????? ? ?????? ??????.
???????? ???????? ????? ????????????? ? ????????????
?????????*/
	/*cout << "???????? ?2" << endl;
	int const n = 10;
	int mas[n], mas1[n], mas2[n];
	srand(time(0));
	cout << "?????? ?????" << endl;
	for (int i = 0; i < n; i++)
	{
		mas1[i] = -5 + rand() % 11;
		mas2[i] = -5 + rand() % 11;
		cout << mas1[i] << " ";
	}
	cout << "\n?????? ?????" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mas2[i] << " ";
		mas[i] = mas1[i] + mas2[i];
	}
	cout << "\n????? ??????????? ?????????" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}*/



/*??????? 3
???????????? ?????? ?????? ? ????? ???????? ? ???????? ?? ?????? (?????? ????). ???????? ?????????, ???????
?????????:
+ ??????? (?? ??????) ??????????? ?????;
+ ????? ?????, ??????????? ????????????? ?? ??????;
+ ?????????? ???? ? ?? ???????? (????????, ?????????),
????? ????? ??????? (? ????) ????????? 100 ????????.*/
	/*cout << "???????? ?3" << endl;
	int const n = 7;
	int mas[n], count = 0;
	float sum = 0, midle;
	string mas_days[7] = { "?????????", "³??????", "??????","???????","?'??????","??????","??????" };
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		i++;
		cout << "??????? ???????? ? " << i-- << " ???? = ";
		cin >> mas[i];
		sum += mas[i];
		if (mas[i] >= 100) { count += 1; }
	}
	cout << endl;
	midle = sum / n;
	cout << "?????? ????????? ?? 7 ???? = " << sum << endl;
	cout << "??????? ????????? ???? ?? ??????? = " << midle << endl;
	cout << "ʳ??????? ????, ???? ???? ????????? ?????? 100 $ = " << count << endl;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] >= 100)
		{
			cout << mas_days[i] << " = " << mas[i]<<" $\n";
		}
	}*/



/*??????? 4
???????? ?????? ????? ????? (???? ??????? ?? ?????????
? ????) ?? ??? ?????? ???? ? ??????????? ???????? ?? ?????? ????? ?? ?????????? ????? ? ????. ??? ?????? ????????
?????????????, ? ??? ????? ? ????? ?? ???????? ? ????.
???????? ?????????, ??????? ?? ??????? ????????????
(????? ??????) ??????? ? ??????? ?????? ?????????? ?????,
??????? ?? ????? ??????????, ??? ???????, ??? ? ???? ?????????? ?????, ?????????? ????? ?? ????? 50% ?? ???????????
????? ? ??? ??????, ???? ??????????? ????? ? ???? ?????
?????????? ?? ????? 500$.*/
	/*cout << "???????? ?4" << endl;
	const int n = 12;
	int month[n], percent[n], number;
	float USD_EUR[n], EUR[n], USD[n];
	srand(time(0));
	cout << "?????????? ???????? ?? ????? ??????" << endl;
	for (int i = 0; i < n; i++)
	{
		percent[i] = rand() % 26;
		USD_EUR[i] = (65 + rand() % 36)/100.0;
		EUR[i] = 100 + rand() % 901;
		EUR[i] += (percent[i] * EUR[i]) / 100;
		cout << percent[i] << "; ";
	}
	cout << "\nC??? ?? ???????? (? ????)" << endl;
	for (int i = 0; i < n; i++) { cout << EUR[i] << "; "; }
	cout << "\n???? ????? ?? ????? ?????? (EUR->USD)" << endl;
	for (int i = 0; i < n; i++) { cout << USD_EUR[i] << "; "; }
	cout << "\nC??? ?? ???????? (? ???????)" << endl;
	for (int i = 0; i < n; i++)
	{
		USD[i] = EUR[i] * USD_EUR[i];
		cout << USD[i] << "; ";
	}
	while (true)
	{
		cout << "\n??????? ????? ?????? = "; cin >> number;
		if (number > 0 && number <= 12)
		{
			if (USD[number-1] >= 500)
			{
				cout << "????????? ????? ? ????? ?????? = " << USD[number-1] / 2 << " $" << endl;
				break;
			}
			else
			{
				cout << "? ????? ?????? ?? ????? ??????? ?????. ???????? ????? ??????." << endl;
			}
		}
		else{ cout << "???????? ????? ??????!!! (1-12)" << endl; }
	}*/
}
