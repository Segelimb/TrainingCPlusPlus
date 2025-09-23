#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
int m[10] = { -1,21,13,14,5,66,7,89,91,0 };
    int a, i_max = 0;
    a = m[0];
    for (int i = 1; i <= 10; i++)
    {
        if (a < m[i])
        {
            a = m[i];
            i_max = i;
        }
    }
    cout << "Максимальное число - " << a << ", индекс элемента - " << i_max;
}
