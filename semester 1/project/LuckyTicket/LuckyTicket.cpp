#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите шестизначный номер автобусного билета: ";
    int NumberTicket;
    int number1, number2, number3, number4, number5, number6;
    cin >> NumberTicket;
    if (NumberTicket < 0 || NumberTicket > 999999)
        cout << "Нет";
    else
    {
        number1 = NumberTicket / 100000;
        number2 = (NumberTicket / 10000) % 10;
        number3 = (NumberTicket / 1000) % 10;
        number4 = (NumberTicket / 100) % 10;
        number5 = (NumberTicket / 10) % 10;
        number6 = (NumberTicket / 1) % 10;
        if (number1 + number2 + number3 == number4 + number5 + number6)
            cout << "Да";
        else
            cout << "Нет";
    }
}