#include <iostream>
using namespace std;

int main()
{
	int num = 3;

	cout <<"The memory adress of num: "<<&num << endl;

	int* ptr = &num;

	cout <<"The memory adress of the pointer"<< ptr << endl;

	int ptrValue = *ptr;
	cout << "The value of what is pointing to " << ptrValue << endl;

	*ptr = 42;

	cout << "The value of the pointer value changed " << *ptr << endl; 

	return 0;
}