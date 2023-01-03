#include <iostream>
#include <Windows.h>
#include <io.h>

using namespace std;

/*�������� ������� ������ ���� ��� ������ ����� � ����������*/

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//����� ������� ����� � �����, �� ����������� ���� ��������
	/*struct _finddata_t myfileinfo;
	long done = _findfirst("*.cpp", &myfileinfo);
	cout << myfileinfo.name;
	return 0;*/

	//����� ������� ����� � �����, �� ��� ������� ����
	/*struct _finddata_t fileinfo;
	char str[240] = "D:\\FileRead\\*.txt";
	long done = _findfirst(str, &fileinfo);
	cout << fileinfo.name;
	return 0;*/

	//���� �� ������ ��� ����� � ����� �����������, ��� ����������� � ����� �� ��� ������
	struct _finddata_t fileinfo;
	char str[200] = "D:\\FileRead\\*.txt";
	long done = _findfirst(str, &fileinfo);
	while (done != -1) {
		cout << fileinfo.name << "\n";
		done = _findnext(done, &fileinfo);
	}
	return 0;

	//������� �� ������������
	/*struct _finddata_t fileinfo;
	char path[300];
	char mask[50];

	// �������� ����
	cout << "������ ������ ���� (for example, D:):\n";
	cin >> path;
	// �������� ����� �����
	cout << "������ ����� (for example, *.* or *.txt):";
	cin >> mask;
	// ǒ������ ��� �����: ���� � �����
	strcat_s(path, mask);
	long done = _findfirst(path, &fileinfo);
	while (done != -1) {
		cout << fileinfo.name << "\n";
		done = _findnext(done, &fileinfo);
	}
	return 0;*/
}