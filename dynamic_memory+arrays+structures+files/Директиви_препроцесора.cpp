#include <iostream>
#define IsGreater(x,y) ((x)>(y))
#define IsEven(x) ((x)%2==0)
#define Pow(x,y) double r=x;for(int i = 1; i<y; i++){r*=x;} cout<<r;

using namespace std;

void add(float x, float y)
{
    cout << x << " + " << y << " = " << x + y << endl;
}

void subtract(float x, float y)
{
    cout << x << " - " << y << " = " << x - y << endl;
}

void multiply(float x, float y)
{
    cout << x << " * " << y << " = " << x * y << endl;
}

void divide(float x, float y)
{
    cout << x << " / " << y << " = " << x / y << endl;
}

void is_even(int x)
{
    if (IsEven(x)) { cout << x <<" is even"<<endl; }
    else { cout << x << " is NOT even" << endl; }
}

int main()
{

    /*1) Написать программу - калькулятор с использованием массива указателей на функции без использования if и switch.
    Арифметические операции, которые должен уметь выполнять этот калькулятор : +, -, *, /  */
    /*cout << "Task #1" << endl;
    float a, b;
    cout << "Enter operand 1:\n";
    cin >> a;
    cout << "Enter operand 2:\n";
    cin >> b;
    void (*operation[4])(float, float) = { add, subtract, multiply, divide };
    unsigned index;
    cout << "Enter number of operation:\n";
    cout << "0 - addition(+)\n1 - substraction(-)\n2 - multiplication(*)\n3 - divide(/)" << endl;
    cin >> index;
    operation[index](a, b);*/

    /*2) С помощью директивы #define написать следующие макросы :
    Нахождение большего из двух чисел;
    Проверка числа на четность.*/
    /*cout << "Task #2" << endl;
    int x, y;
    x = 3 * 5 - 2;
    y = 12 + 3 * 9;*/

    /*cout << "Enter X - ";   // Можна ввести свої числа
    cin >> x;
    cout << "Enter Y - ";
    cin >> y;*/
    /*
    // Перевірка чи парне число
    cout << "X = ";
    is_even(x);
    cout << "Y = ";
    is_even(y);
    // Перевірка яке число більше
    if (IsGreater(x, y)) { cout << "X(" << x << ") > Y(" << y << ")" << endl; }
    else if (IsGreater(y, x)) { cout << "Y(" << y << ") > X(" << x << ")" << endl; }
    else { cout << "X(" << x << ") = Y(" << y << ")" << endl; }*/

    //Дополнительное задание : Написать макрос для возведения числа в степень.
    cout << "\nAdditional task" << endl;
    double a, b;
    cout << "Enter A - ";
    cin >> a;
    cout << "Enter B - ";
    cin >> b;
    cout << "A ^ B = "; Pow(a, b);
}