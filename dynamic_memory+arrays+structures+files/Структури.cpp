#include <iostream>
#include <Windows.h>

using namespace std;

struct iron
{
    char firm[20];  //  фірма-виробник
    char model[35];  // модель
    char color[20];   // колір
    float temp_min;   // мінімальна температура
    float temp_max;   //  максимальна температура
    bool steam_supply;  // подача пару
    int power;  // потужність
};

struct animal 
{
    char name [12];  // назва
    char animal_class [15]; // клас
    char alias [10];   // кличка
};


iron fill_iron()
{
    cout << endl;
    iron temp;
    cout << "\n\tХарактеристики праски" << endl;
    cout << "Введіть фірму-виробника - ";
    cin >> temp.firm;
    cout << "Введіть модель - ";
    cin >> temp.model;
    cout << "Введіть колір - ";
    cin >> temp.color;
    cout << "Введіть мінімальну температуру - ";
    cin >> temp.temp_min;
    cout << "Введіть максимальну температуру - ";
    cin >> temp.temp_max;
    cout << "Подача пару\n(0 - немає; 1 - є)" << endl;
    cin >> temp.steam_supply;
    cout << "Введіть потужність - ";
    cin >> temp.power;
    cout << endl;
    return temp;
}

animal fill_animal()
{
    cout << endl;
    animal temp;
    cout << "\n\tОпис тварини" << endl;
    cout << "Введіть назву тварини - ";
    cin >> temp.name;
    cout << "Введіть клас - ";
    cin >> temp.animal_class;
    cout << "Введіть кличку тварини - ";
    cin >> temp.alias;
    cout << endl;
    return temp;
}

void Show_iron(iron x)
{
    cout << "\n\tХарактеристики праски" << endl;
    cout << "Фірма - " << x.firm << endl;
    cout << "Модель - " << x.model << endl;
    cout << "Колір - " << x.color << endl;
    cout << "Мінімальна температура - " << x.temp_min << endl;
    cout << "Максимальна температура - " << x.temp_max << endl;
    cout << "Подача пару - " << x.steam_supply << endl;
    cout << "Потужність - " << x.power << endl;
    cout << endl;
}

void Show_animal(animal x)
{
    cout << "\n\tОпис тварини" << endl;
    cout << "Назва виду - " << x.name << endl;
    cout << "Клас - " << x.animal_class << endl;
    cout << "Кличка - " << x.alias << endl;
    cout << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*1) Реализовать структуру «Утюг» (фирма, модель, цвет, минимальная температура,
        максимальная температура, подача пара(да / нет), мощность).
        Создайте экземпляр структуры и проиллюстрируйте работу с ним.*/
    cout << "Task #1" << endl;
    iron a;
    while (true)   // даємо змогу користувачу змінити введені дані про об'єкт
    {
        int choise;
        a = fill_iron();  // користувач пише свої дані
        //a = {"Samsung","Xeron","Black",50,300,1,100};  // одразу заповнюємо даними
        Show_iron(a);
        cout << "Бажаєте змінити інформацію?\n(1 - так; 0 - ні)" << endl;
        cin >> choise;
        if (choise == 0) { break; }
    }
    cout << endl;

    /*2) Разработать структуру, которая описывает животное (название, класс, кличка).
        Создать функции для работы с этой структурой :
    заполнение объекта; вывод на экран данных об объекте*/

    cout << "\nTask #2" << endl;
    animal obj;
    while (true)  // даємо змогу користувачу змінити введені дані про об'єкт
    {
        int choise;
        //obj = fill_animal();   // користувач може сам заповнити цей об'єкт своїми даними
        obj = {"Кіт","Кошачі","Мікі"};  // ми заповнили об'єкт одразу
        Show_animal(obj);
        cout << "Бажаєте змінити інформацію?\n(1 - так; 0 - ні)" << endl;
        cin >> choise;
        if (choise == 0) { break; }
    }
}
