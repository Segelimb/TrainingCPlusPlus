#include <iostream>
using namespace std;
int main()
{
    double a, b, c, f,  x;
    cin >> a >> b >> c >> f;
    double m[4] = { a, b, c, f};
    x = m[0];
    for (int i = 1; i <= 3; i++)
    {
        if (x < m[i])
        {
            x = m[i];
        }
    }
    cout << x;
}
