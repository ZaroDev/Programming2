#include <iostream>

using namespace std;

void add5(int* num)
{
	*num += 5;
}
void sumArray(int array[], size_t n, int *sum)
{
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		a = array[i];
		a += a;
	}
	*sum = a;
}
int main()
{
	//Ex 1
	int num = 5;
	add5(&num);
	cout << num << endl;
	//Ex 2
	int array[3] = { 1, 2, 3 };
	int sum = 0;

	sumArray(array, 3, &sum);

	cout << sum << endl;
	return 0;
}