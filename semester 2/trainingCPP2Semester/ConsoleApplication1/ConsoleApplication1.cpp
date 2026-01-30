#include <iostream>
using namespace std;

int sumArray(int array[], int size)
{
	size--;
	if (size == 0) return array[size];
	else sumArray(array, size - 1);
}

int main()
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = sumArray(array, 10);
	cout << sum;
}
