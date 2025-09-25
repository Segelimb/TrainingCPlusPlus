#include <iostream>
using namespace std; //позволяет не писать std и использовать endl вместо \n
int main()
{
    setlocale(LC_ALL, "");
    int year;
    cin >> year;
    if (year < 0)
        cout << "Неверный номер года";
    else
    {
        if ((year % 400) == 0)
            cout << "Год " << year << " является високосным";
        else if ((year % 4) == 0 && (year % 100) != 0)
            cout << "Год " << year << " является високосным";
        else 
            cout << "Год " << year << " не является високосным";
    }
}