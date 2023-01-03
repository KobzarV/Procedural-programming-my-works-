#include <iostream>
#include <random>
#include <Windows.h>

using namespace std;

char win = '-';
char Player1[50], Player2[50];
char cells[9] = { '1','2','3','4','5','6','7','8','9' };

void print_field() {
    system("cls");  // очищає поле (для зручності)
    
    cout << "Ситуація на даний момент:\n" << endl;
    cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << endl;
    cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << endl;
    cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << "\n" << endl;
}

void make_move(int num) {
    if (num == 1) cout << Player1;
    else cout << Player2;
    int player_move;
    cout << ", виберіть номер комірки, зробіть свій хід - ";
    cin >> player_move;
    while (player_move > 9 || player_move < 1 || cells[player_move - 1] == 'O' || cells[player_move - 1] == 'X')
    {
        cout << "Введіть номер в діапазоні ( 1-9 ) або вільну ( --- ) комірку, щоб зробити хід:";
        cin >> player_move;
    }
    cout << "\n";
    if (num == 1) cells[player_move - 1] = 'X';
    else cells[player_move - 1] = 'O';
}

char win_check()
{
    for (int i = 0; i < 3; i++)
    {
        if (cells[i * 3] == cells[i * 3 + 1] && cells[i * 3 + 1] == cells[i * 3 + 2])
            return cells[i];   //0-1-2, 3-4-5, 6-7-8
        else if (cells[i] == cells[i + 3] && cells[i + 3] == cells[i + 6])
            return cells[i];  //0-3-6, 1-4-7 и 2-5-8
        else if ((cells[2] == cells[4] && cells[4] == cells[6]) || (cells[0] == cells[4] && cells[4] == cells[8]))
            return cells[i];   // 0-4-8 и 2-4-6
    }
    return '-';
}

void result() {
    if (win == 'X')
        cout << "Переміг гравець №1 - " << Player1 << endl;
    else if (win == 'O') cout << "Переміг гравець №2 - " << Player2 << endl;
    else if (win == '-') cout << "Нічия" << endl;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "\tХрестики-нулики" << endl;
    cout << "Імена гравців НЕ повинні бути однаковими" << endl;
    cout << "Введите имя первого игрока : "; cin >> Player1;
    cout << "Введите имя второго игрока: "; cin >> Player2;
    cout << "\n";

    print_field();

    for (int move = 1; move <= 9; move++) {
        if (move % 2 != 0) make_move(1);
        else make_move(2);
        print_field();
        if (move > 4)
        {
            win = win_check();
            if (win_check() != '-')
                break;
        }
    }

    result();
    system("pause");
    return 0;
}
