#include <iostream>

using namespace std;

void doubleNum(unsigned short* value)
{
	*value *= 2;
}

int main()
{
	unsigned short value;

	cout << "Introduce a number from 0 to 100: " << endl;
	cin >> value;

	doubleNum(&value);

	cout << value << endl;

	return 0;
}
/* Exercise 7 
	What does the following function:
void misteriousFunction(const int * value) {
 *value = 0;
}
It can't do nothing because the input value is a constant and constants can't be changed 
*/ 
