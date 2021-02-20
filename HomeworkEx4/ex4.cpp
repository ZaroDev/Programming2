#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void absSwap(int* arr1, int sizeArr1, int* arr2, int sizeArr2)
{
	if (sizeArr1 >= sizeArr2)//Cheking if the array can be stored
	{
		for (int i = 0; i < sizeArr1; i++)
		{
			arr1[i] = abs(arr2[i]);
			cout << arr1[i] << endl;
		}
	}
	else return;
}
int main()
{
	int* arr1 = (int*)calloc(20, sizeof(int));
	int* arr2 = (int*)malloc(20 * sizeof(int));

	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
		{
			arr2[i] = -rand();
		}
		else
		{
			arr2[i] = rand();
		}
	}
	absSwap(arr1, 20, arr2, 20);

	free(arr1);
	free(arr2);
	
	return 0;
}