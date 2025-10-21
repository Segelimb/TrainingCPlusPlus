#include <iostream>

long long factorial(unsigned int a)
{
	long long result = 1;
	for (int i = 1; i <= a; i++)
	{
		result = result * i;
	}
	return result;
}

int main()
{
    std::cout << factorial(10);
}
