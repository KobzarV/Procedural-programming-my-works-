#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

struct book {
    char name[50];  // ����� �����
    char author[35];  // ����� �����
    char publication[25];  // ����������� �����
    char genre[30];  // ���� �����
};

book Fill_book()  // ������� ���������� ��'���� ������ �����������
{
    cout << endl;
    book temp;
    cout << "������ ����� ����� - ";
    cin.getline(temp.name, 25);
    cout << "������ ������ ����� - ";
    cin.getline(temp.author, 20);
    cout << "������ ����������� ����� - ";
    cin.getline(temp.publication, 25);
    cout << "������ ���� ����� - ";
    cin.getline(temp.genre, 20);
    return temp;
}

void Show_all_books(book x[], int size)  // ������� ������ ��� ���� �� �����
{
    for (int i = 0; i < size; i++)
    {
        cout << "\n\t����� " << i + 1 << endl;
        cout << "����� - " << x[i].name << endl;
        cout << "����� - " << x[i].author << endl;
        cout << "����������� - " << x[i].publication << endl;
        cout << "���� - " << x[i].genre << endl;
        cout << endl;
    }
}

/*void Show_all_books(book x[], int size) {
    cout << "�\t" << setiosflags(ios::left)  << setw(25) << "�����" << setw(25) << "�����" << setw(25) << "�����������" << setw(25) << "����" << endl;
    cout << "================================================================================" << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << "\t" << setiosflags(ios::left)<<setw(25) << x[i].name << setw(25) << x[i].author << setw(25) << x[i].publication << setw(25) << x[i].genre << "\n";
    }
    cout << "================================================================================" << endl;
}*/

void Show_book(book x, int index)  // ������� ������ ���� ����� �� �����
{
    cout << "\n\t����� " << index + 1 << endl;
    cout << "����� - " << x.name << endl;
    cout << "����� - " << x.author << endl;
    cout << "����������� - " << x.publication << endl;
    cout << "���� - " << x.genre << endl;
    cout << endl;
}

book Edit_book(book x[], int index)    // ������� ������������ �����
{
    int choise;
    cout << "������� ��, �� ������ ������ � ��������� ��� �����:" << endl;
    cout << "1 - ������ ����� �����;" << endl;
    cout << "2 - ������ ������ �����;" << endl;
    cout << "3 - ������ ����������� �����;" << endl;
    cout << "4 - ������ ���� �����;" << endl;
    cout << "5 - ������ ��� ���������� �����;" << endl;
    cin >> choise;
    cin.ignore();
    switch (choise)
    {
    case 1:
        cout << "������ ���� ����� �����" << endl;
        cin.getline(x[index].name, 25);
        break;
    case 2:
        cout << "������ ������ ������ �����" << endl;
        cin.getline(x[index].author, 20);
        break;
    case 3:
        cout << "������ ���� ����������� �����" << endl;
        cin.getline(x[index].publication, 25);
        break;
    case 4:
        cout << "������ ����� ���� �����" << endl;
        cin.getline(x[index].genre, 20);
        break;
    case 5:
        x[index] = Fill_book();
        break;
    default:
        cout << "���������� ���������� ��������" << endl;
        break;
    }
    return x[index];
}

void Search_author(book x [], int size, char* key)  // ������� ������ �� �������
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
    if (0 == count) { cout << "������ ������ � ������� ����.\n��������� ������ ������ ������." << endl; }
    else {
        cout << "ʳ������ ���� �� ����� ������� - " << count << endl;
        for (int i = 0; i < size; i++)
        {
            if (strcmp(x[i].author, key) == 0)
            {
                Show_book(x[i], i);
            }
        }
    }
}

void Search_name_book(book x[], int size, char* key)  // ������� ������ �� ������ �����
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
        cout << "����� � ����� ����� ���� � �������.\n��������� ������ ���� �����." << endl;
    }
    else
    {
        Show_book(x[i], i);
    }
}

bool from_a_to_z(int a, int b) // ������� ��� ���������� �� �������� (�� a(a) �� �(z))
{
    return a < b;
}

bool from_z_to_a(int a, int b)  // ������� ��� ���������� �� �������� �������� (�� �(z) �� �(a))
{
    return a > b;
}

void Sort_by_name(book x[], int size, bool (*Fnc_how_sort)(int, int))  // ������� ���������� �� ������ �����
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
    //Show_all_books(x, size);   //����� ������ �������� � ������� ��� ���������� �����
}

void Sort_by_author(book x[], int size, bool (*Fnc_how_sort)(int, int))  // ������� ���������� �� ������� �����
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
    //Show_all_books(x, size);   //����� ������ �������� � ������� ��� ���������� �����
}

void Sort_by_public(book x[], int size, bool (*Fnc_how_sort)(int, int))  // ������� ���������� �� ������������
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
    //Show_all_books(x, size);   //����� ������ �������� � ������� ��� ���������� �����
}

void Sort_Func(book x [], int size, void (*Fnc_sort)(book [], int, bool (*Fnc_how_sort)(int, int)))
{
    int how_sort;
    while (true)
    {
        cout << "\n������� ����� ����������:\n1 - �� �������� (� - z)\n2 - � ����������� �������� (z - a)" << endl;
        cin >> how_sort;
        if (how_sort == 1) { Fnc_sort(x, size, from_a_to_z); break; }
        else if (how_sort == 2) { Fnc_sort(x, size, from_z_to_a); break; }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*������������ ��������� �����������.
�������� ��������� ������ (��������, �����, ������������, ����).
�������� ������ �� 5 ����. ���������� ��� ���������� ��������� �����������:
+ ������������� �����;
+ ������ ���� ����;
+ ����� ���� �� ������;
+ ����� ����� �� ��������;
+ ���������� ������� �� �������� ����;
+ ���������� ������� �� ������;
+ ���������� ������� �� ������������. */
    
    const int n = 5;
    int choise, book_num, how_sort;
    char user_author[35], user_book_name [50];
    cout << "\n\t���������" << endl;
    // ������ �������� �� ��'����
    book library[n] = { "�����","����� ʳ��","Doubleday","�����","���� ������ � �'����� ��������","����� ������","������-�������","������", "������ ����","����� ʳ��","���","����","������ ����","������� ������","����� ���","�����" ,"������� ������","������ ����� Գ��������","�������","�����" };
    /*for (int i = 0; i < 5; i++)
    {
        library[i] = Fill_book();  // ���������� ��� �������� ���������� ��� �����
    }*/
    do
    {
        cout << "\n\t����" << endl;
        cout << "1) ������� �� ����� �� �����" << endl;
        cout << "2) ����������� �����" << endl;
        cout << "3) ����� ����� �� �������" << endl;
        cout << "4) ����� ����� �� ������" << endl;
        cout << "5) ���������� ���� �� ������" << endl;
        cout << "6) ���������� ���� �� �������" << endl;
        cout << "7) ���������� ���� �� ������������" << endl;
        cout << "8) Exit" << endl;
        cout << "������� ����� ���� - ";
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

                    cout << "������� ����� �����, ��� ������� ����������� - ";
                    cin >> book_num;
                    book_num--;
                    if (book_num >= 0 && book_num < 5) { break; }
                }
                library[book_num] = Edit_book(library, book_num);
                break;
            case 3:
                cout << "������ ������ - ";
                cin.ignore();
                cin.getline(user_author, 35);
                Search_author(library, n, user_author);
                break;
            case 4:
                cout << "������ ����� ����� - ";
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