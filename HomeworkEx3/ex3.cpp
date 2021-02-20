#include <iostream>
using namespace std;


void reverse(int* array, int sizeArray)
{
	int* a = array;
	sizeArray--;
	int aux = 0;
	for (int i = 9; i > -1; i--) 
	{
		aux = *(a + i);
		cout << aux << endl;
	}

}
int main()
{
	int array[10] = {};
	int aux = 0;

	cout << "Please introduce 10 integers (use the enter between every each time)" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> aux;
		array[i] = aux;
	}
	cout << endl;
	reverse(array, 10);

	return 0;
}