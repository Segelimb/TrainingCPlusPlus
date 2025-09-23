#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    double a, b, c;
    std::cout << "Введите 1-е число: ";
    std::cin >> a;
    std::cout << "Введите 2-е число: ";
    std::cin >> b;
    c = a + b;
    std::cout << "Сумма = " << c << "\n";
}