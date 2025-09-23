#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	cout << "Программа, которая определяет координату Х тела в момент времени\n";
	double x_zero, v_zero, t, a, x;
	cout << "Введите начальную координату x: ";
	cin >> x_zero;
	cout << "Введите начальную скорость: ";
	cin >> v_zero;
	cout << "Введите время: ";
	cin >> t;
	cout << "Введите ускорение: ";
	cin >> a;
	x = x_zero + v_zero * t + ((a * t * t) / (2));
	cout << x;
}
