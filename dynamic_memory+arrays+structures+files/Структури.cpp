#include <iostream>
#include <Windows.h>

using namespace std;

struct iron
{
    char firm[20];  //  �����-��������
    char model[35];  // ������
    char color[20];   // ����
    float temp_min;   // �������� �����������
    float temp_max;   //  ����������� �����������
    bool steam_supply;  // ������ ����
    int power;  // ���������
};

struct animal 
{
    char name [12];  // �����
    char animal_class [15]; // ����
    char alias [10];   // ������
};


iron fill_iron()
{
    cout << endl;
    iron temp;
    cout << "\n\t�������������� ������" << endl;
    cout << "������ �����-��������� - ";
    cin >> temp.firm;
    cout << "������ ������ - ";
    cin >> temp.model;
    cout << "������ ���� - ";
    cin >> temp.color;
    cout << "������ �������� ����������� - ";
    cin >> temp.temp_min;
    cout << "������ ����������� ����������� - ";
    cin >> temp.temp_max;
    cout << "������ ����\n(0 - ����; 1 - �)" << endl;
    cin >> temp.steam_supply;
    cout << "������ ��������� - ";
    cin >> temp.power;
    cout << endl;
    return temp;
}

animal fill_animal()
{
    cout << endl;
    animal temp;
    cout << "\n\t���� �������" << endl;
    cout << "������ ����� ������� - ";
    cin >> temp.name;
    cout << "������ ���� - ";
    cin >> temp.animal_class;
    cout << "������ ������ ������� - ";
    cin >> temp.alias;
    cout << endl;
    return temp;
}

void Show_iron(iron x)
{
    cout << "\n\t�������������� ������" << endl;
    cout << "Գ��� - " << x.firm << endl;
    cout << "������ - " << x.model << endl;
    cout << "���� - " << x.color << endl;
    cout << "̳������� ����������� - " << x.temp_min << endl;
    cout << "����������� ����������� - " << x.temp_max << endl;
    cout << "������ ���� - " << x.steam_supply << endl;
    cout << "��������� - " << x.power << endl;
    cout << endl;
}

void Show_animal(animal x)
{
    cout << "\n\t���� �������" << endl;
    cout << "����� ���� - " << x.name << endl;
    cout << "���� - " << x.animal_class << endl;
    cout << "������ - " << x.alias << endl;
    cout << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*1) ����������� ��������� ����� (�����, ������, ����, ����������� �����������,
        ������������ �����������, ������ ����(�� / ���), ��������).
        �������� ��������� ��������� � ���������������� ������ � ���.*/
    cout << "Task #1" << endl;
    iron a;
    while (true)   // ���� ����� ����������� ������ ������ ��� ��� ��'���
    {
        int choise;
        a = fill_iron();  // ���������� ���� ��� ���
        //a = {"Samsung","Xeron","Black",50,300,1,100};  // ������ ���������� ������
        Show_iron(a);
        cout << "������ ������ ����������?\n(1 - ���; 0 - �)" << endl;
        cin >> choise;
        if (choise == 0) { break; }
    }
    cout << endl;

    /*2) ����������� ���������, ������� ��������� �������� (��������, �����, ������).
        ������� ������� ��� ������ � ���� ���������� :
    ���������� �������; ����� �� ����� ������ �� �������*/

    cout << "\nTask #2" << endl;
    animal obj;
    while (true)  // ���� ����� ����������� ������ ������ ��� ��� ��'���
    {
        int choise;
        //obj = fill_animal();   // ���������� ���� ��� ��������� ��� ��'��� ����� ������
        obj = {"ʳ�","������","̳�"};  // �� ��������� ��'��� ������
        Show_animal(obj);
        cout << "������ ������ ����������?\n(1 - ���; 0 - �)" << endl;
        cin >> choise;
        if (choise == 0) { break; }
    }
}