#include <iostream>
using namespace std;

int main()
{
	int vec[3] = { 1, 2, 3 };
	int* ptr = vec;
	int a = *ptr;

	//Ex using [] operator
	a = ptr[0];

	cout << "Ex using [] operator " << a << endl;

	//Ex using * and + operator
	a = *(ptr + 0);

	cout << "Ex using * and + operator "<< a << endl;

	//Ex using ++ operator
	a = *ptr++;
	
	cout <<"Ex using ++ operator "<< a << endl;



	return 0;
}