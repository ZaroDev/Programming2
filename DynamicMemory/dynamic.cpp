#include <iostream>
using namespace std;

int main()
{
	int* num = new int[4]();
	int *a = 0;
	a = num;
	for (int i = 0; i < 4; i++)
	{
		num[i] = i + 1;
		cout << *(a + i);
	}

	delete[] num;
	return 0;
}