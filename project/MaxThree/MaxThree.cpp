#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double a, b, c, x;
	cin >> a >> b >> c;
	double m[3] = { a, b, c };
    x = m[0];
    for (int i = 1; i <= 10; i++)
    {
        if (x < m[i])
        {
            x = m[i];
        }
    }
    cout << x;
}