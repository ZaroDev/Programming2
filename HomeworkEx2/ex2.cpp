#include <iostream>

using namespace std;

void sum(int val1, int val2, int* result)
{
	*result = val1 + val2;
}
int main()
{
	int val1 = 0;
	int val2 = 0;
	int result = 0;

	cout << "Please introduce two values" << endl;
	cin >> val1 >> val2;

	sum(val1, val2, &result);

	cout << "The sum is " << result << endl;

	return 0;
}