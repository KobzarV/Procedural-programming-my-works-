#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

struct book {
    char name[50];  // назва книги
    char author[35];  // автор книги
    char publication[25];  // видавництво книги
    char genre[30];  // жанр книги
};

book Fill_book()  // функція заповнення об'єкта даними користувача
{
    cout << endl;
    book temp;
    cout << "Введіть назву книги - ";
    cin.getline(temp.name, 25);
    cout << "Введіть автора книги - ";
    cin.getline(temp.author, 20);
    cout << "Введіть видавництво книги - ";
    cin.getline(temp.publication, 25);
    cout << "Введіть жанр книги - ";
    cin.getline(temp.genre, 20);
    return temp;
}

void Show_all_books(book x[], int size)  // функція виводу всіх книг на екран
{
    for (int i = 0; i < size; i++)
    {
        cout << "\n\tКнига " << i + 1 << endl;
        cout << "Назва - " << x[i].name << endl;
        cout << "Автор - " << x[i].author << endl;
        cout << "Видавництво - " << x[i].publication << endl;
        cout << "Жанр - " << x[i].genre << endl;
        cout << endl;
    }
}

/*void Show_all_books(book x[], int size) {
    cout << "№\t" << setiosflags(ios::left)  << setw(25) << "Назва" << setw(25) << "Автор" << setw(25) << "Видавництво" << setw(25) << "Жанр" << endl;
    cout << "================================================================================" << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << "\t" << setiosflags(ios::left)<<setw(25) << x[i].name << setw(25) << x[i].author << setw(25) << x[i].publication << setw(25) << x[i].genre << "\n";
    }
    cout << "================================================================================" << endl;
}*/

void Show_book(book x, int index)  // функція виводу однієї книги на екран
{
    cout << "\n\tКнига " << index + 1 << endl;
    cout << "Назва - " << x.name << endl;
    cout << "Автор - " << x.author << endl;
    cout << "Видавництво - " << x.publication << endl;
    cout << "Жанр - " << x.genre << endl;
    cout << endl;
}

book Edit_book(book x[], int index)    // функція редактування книги
{
    int choise;
    cout << "Виберіть те, що бажаєте змінити в інформіції про книгу:" << endl;
    cout << "1 - Змінити назву книги;" << endl;
    cout << "2 - Змінити автора книги;" << endl;
    cout << "3 - Змінити видавництво книги;" << endl;
    cout << "4 - Змінити жанр книги;" << endl;
    cout << "5 - Змінити всю інформацію книги;" << endl;
    cin >> choise;
    cin.ignore();
    switch (choise)
    {
    case 1:
        cout << "Введіть нову назву книги" << endl;
        cin.getline(x[index].name, 25);
        break;
    case 2:
        cout << "Введіть нового автора книги" << endl;
        cin.getline(x[index].author, 20);
        break;
    case 3:
        cout << "Введіть нове видавництво книги" << endl;
        cin.getline(x[index].publication, 25);
        break;
    case 4:
        cout << "Введіть новий жанр книги" << endl;
        cin.getline(x[index].genre, 20);
        break;
    case 5:
        x[index] = Fill_book();
        break;
    default:
        cout << "Інформація залишається незмінною" << endl;
        break;
    }
    return x[index];
}

void Search_author(book x [], int size, char* key)  // функція пошуку за автором
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(x[i].author, key) == 0)
        {
            count++;
        }
    }
    cout << endl;
    if (0 == count) { cout << "Такого автора в каталозі немає.\nСпробуйте ввести іншого автора." << endl; }
    else {
        cout << "Кількість збігів за даним запитом - " << count << endl;
        for (int i = 0; i < size; i++)
        {
            if (strcmp(x[i].author, key) == 0)
            {
                Show_book(x[i], i);
            }
        }
    }
}

void Search_name_book(book x[], int size, char* key)  // функція пошуку за назвою книги
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(x[i].name, key) == 0)
        {
            break;
        }
    }
    if (i == size) 
    { 
        cout << "Книги з такою назвоє немає в каталозі.\nСпробуйте ввести іншу назву." << endl;
    }
    else
    {
        Show_book(x[i], i);
    }
}

bool from_a_to_z(int a, int b) // функція для сортування за алфавітом (від a(a) до я(z))
{
    return a < b;
}

bool from_z_to_a(int a, int b)  // функція для сортування за зворотнім алфавітом (від я(z) до а(a))
{
    return a > b;
}

void Sort_by_name(book x[], int size, bool (*Fnc_how_sort)(int, int))  // функція сортування за назвою книги
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (Fnc_how_sort(strcmp(x[i].name, x[j].name), 0))
            {
                swap(x[i], x[j]);
            }
        }
    }
    //Show_all_books(x, size);   //можна одразу виводити у функції вже відсортовані книги
}

void Sort_by_author(book x[], int size, bool (*Fnc_how_sort)(int, int))  // функція сортування за автором книги
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (Fnc_how_sort(strcmp(x[i].author, x[j].author), 0))
            {
                swap(x[i], x[j]);
            }
        }
    }
    //Show_all_books(x, size);   //можна одразу виводити у функції вже відсортовані книги
}

void Sort_by_public(book x[], int size, bool (*Fnc_how_sort)(int, int))  // функція сортування за видавництвом
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (Fnc_how_sort(strcmp(x[i].publication, x[j].publication), 0))
            {
                swap(x[i], x[j]);
            }
        }
    }
    //Show_all_books(x, size);   //можна одразу виводити у функції вже відсортовані книги
}

void Sort_Func(book x [], int size, void (*Fnc_sort)(book [], int, bool (*Fnc_how_sort)(int, int)))
{
    int how_sort;
    while (true)
    {
        cout << "\nВиберіть спосіб сортування:\n1 - за алфавітом (а - z)\n2 - у зворотньому напрямку (z - a)" << endl;
        cin >> how_sort;
        if (how_sort == 1) { Fnc_sort(x, size, from_a_to_z); break; }
        else if (how_sort == 2) { Fnc_sort(x, size, from_z_to_a); break; }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*Разработайте программу «Библиотека».
Создайте структуру «Книга» (название, автор, издательство, жанр).
Создайте массив из 5 книг. Реализуйте для библиотеки следующие возможности:
+ Редактировать книгу;
+ Печать всех книг;
+ Поиск книг по автору;
+ Поиск книги по названию;
+ Сортировка массива по названию книг;
+ Сортировка массива по автору;
+ Сортировка массива по издательству. */
    
    const int n = 5;
    int choise, book_num, how_sort;
    char user_author[35], user_book_name [50];
    cout << "\n\tБібліотека" << endl;
    // одразу заповнені всі об'єкти
    book library[n] = { "Сяйво","Стівен Кінг","Doubleday","Роман","Гаррі Поттер і в'язень Азкабану","Джоан Роулінг","Азбука-Аттикус","Фентезі", "Зелена миля","Стівен Кінг","АСТ","Жахи","Голодні ігри","Сюзанна Коллінз","Країна мрій","Роман" ,"Великий Гетсби","Френсіс Скотт Фіцжеральд","Велмайт","Роман" };
    /*for (int i = 0; i < 5; i++)
    {
        library[i] = Fill_book();  // користувач сам заповнює інформацію про книги
    }*/
    do
    {
        cout << "\n\tМеню" << endl;
        cout << "1) Вивести на екран всі книги" << endl;
        cout << "2) Редактувати книгу" << endl;
        cout << "3) Пошук книги за автором" << endl;
        cout << "4) Пошук книги за назвою" << endl;
        cout << "5) Сортування книг за назвою" << endl;
        cout << "6) Сортування книг за автором" << endl;
        cout << "7) Сортування книг за видавництвом" << endl;
        cout << "8) Exit" << endl;
        cout << "Виберіть пункт меню - ";
        cin >> choise;
        cout << endl;
        if (choise < 1 && choise > 8) { continue; }
        else 
        {
            switch (choise)
            {
            case 1:
                Show_all_books(library, n);
                break;
            case 2:
                while (true) {

                    cout << "Введыть номер книги, яку потрібно редактувати - ";
                    cin >> book_num;
                    book_num--;
                    if (book_num >= 0 && book_num < 5) { break; }
                }
                library[book_num] = Edit_book(library, book_num);
                break;
            case 3:
                cout << "Введіть автора - ";
                cin.ignore();
                cin.getline(user_author, 35);
                Search_author(library, n, user_author);
                break;
            case 4:
                cout << "Введіть назву книги - ";
                cin.ignore();
                cin.getline(user_book_name, 50);
                Search_name_book(library, n, user_book_name);
                break;
            case 5:
                Sort_Func(library, n, Sort_by_name);
                break;
            case 6:
                Sort_Func(library, n, Sort_by_author);
                break;
            case 7:
                Sort_Func(library, n, Sort_by_public);
                break;
            }
        }
    } while (choise != 8);
}
