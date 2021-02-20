#include <iostream>
using namespace std;

int main()
{
	int array[10] = {};
	int* ptr = array;

	for (int i = 0; i < 10; i++)
	{
		array[i] = (int)ptr;
		ptr++;
		cout << array[i] << endl;
	}

	return 0;
}