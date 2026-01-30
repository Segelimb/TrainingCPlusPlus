#include <iostream>
#include "FactorialLib.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "");
    cout << "Программа нахождения факториала числа\n\n";
	unsigned int a;
	cout << "Введите число: ";
	cin >> a;
	cout << "Факториал числа " << a << " равен " << factorial(a) << endl;
}
