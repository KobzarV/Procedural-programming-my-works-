#include <iostream>
#include <Windows.h>
#include <io.h>

using namespace std;

/*Привести простой пример кода для поиска файла в директории*/

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//пошук першого файлу у папці, де знаходиться сама програма
	struct _finddata_t myfileinfo;
	long done = _findfirst("*.cpp", &myfileinfo);
	cout << myfileinfo.name;
	return 0;

	//пошук першого файлу у папці, до якої вказано шлях
	struct _finddata_t fileinfo;
	char str[240] = "D:\\FileRead\\*.txt";
	long done = _findfirst(str, &fileinfo);
	cout << fileinfo.name;
	return 0;

	//вивід на ектран всіх файліз з таким розширенням, яку знаходяться у папці за цим шляхом
	struct _finddata_t fileinfo;
	char str[200] = "D:\\FileRead\\*.txt";
	long done = _findfirst(str, &fileinfo);
	while (done != -1) {
		cout << fileinfo.name << "\n";
		done = _findnext(done, &fileinfo);
	}
	return 0;

	//взаємодія із користувачем
	struct _finddata_t fileinfo;
	char path[300];
	char mask[50];

	// Запитаємо шлях
	cout << "Введіть повний шлях (for example, D:):\n";
	cin >> path;
	// Запитаємо маску файлів
	cout << "Введіть маску (for example, *.* or *.txt):";
	cin >> mask;
	// З’єднаємо два рядки: шлях і маску
	strcat_s(path, mask);
	long done = _findfirst(path, &fileinfo);
	while (done != -1) {
		cout << fileinfo.name << "\n";
		done = _findnext(done, &fileinfo);
	}
	return 0;
}
