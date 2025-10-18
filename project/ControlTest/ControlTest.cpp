#include <iostream>
using namespace std;
int main()
{
    float x = -6.7;
    float y = x / 2;
    if (x >= -10)
    {
        x = x + 1;
        y = x + 2;
    }
    else
        x = x - 1;
    cout << y;
    cout << x << y;
}