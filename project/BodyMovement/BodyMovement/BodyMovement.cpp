#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double x_zero, v_zero, t, a, x;
	cin >> x_zero >> v_zero >> t >> a;
	x = x_zero + v_zero * t + ((a * t * t) / (2));
	cout << "При x0 = " << x_zero << " v0 = " << v_zero << " t = " << t << " a = " << a << " тело находится в позиции " << x;
}