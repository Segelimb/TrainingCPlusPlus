#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    double a, b, c;
    cout << "Введите 1-е число:";
    cin >> a;
    cout << "Введите 2-е число:";
    cin >> b;
    c = a + b;
    std::cout << "Сумма = " << c;
}
