/*5. Define the class Module:
a. It will have the following (private) data members:
i. A field name with the name of the module.
ii. A field numIterations that indicates the number of iterations the module
will run.
b. It will have the following public methods:
i. A constructor with two parameters (to initialize name and numIterations).
ii. A method update with one parameter currentIteration. The method will
print the name of the module if the currentIteration is less than
numIterations.
Create also a main program that defines an array of a few modules. After that, the main
program will perform a loop of 10 iterations executing the update method of all modules
at each one.
Initialization approach 1: You could initialize the array of modules in different ways. We
could have the array contain each Module directly, for instance:
Module modules[3] = {
 Module("Input", 5),
 Module("Render", 7),
 Module("Logic", 10)
};
Initialization approach 2: Another approach would be having the array contain pointers
to modules, and create them using dynamic memory allocation. For instance:
Module modules[3];
modules[0] = new Module("Input", 5);
modules[1] = new Module("Render", 7);
modules[2] = new Module("Logic", 10);
Do not forget deleting all modules when the task is done.
The output of the program should be:
*/
#include <iostream>

using namespace std;


class Module
{
public:
	Module(){}
	Module(string name, int numIterations) : _name(name), _numIterations(numIterations) {}
	void update(int currentIteration)
	{
		if (this->_numIterations >= currentIteration)
		{
			cout << this->_name << endl;
		}
	}

private:
	string _name;
	int _numIterations;

};



int main()
{
	Module modules[3] = {
		Module("Input", 5),
		Module("Render", 7),
		Module("Logic", 10)
	};

	for (int i = 0; i < 10; i++)
	{
		cout << "--- Iteration " << i << endl;
		modules[0].update(i);
		modules[1].update(i);
		modules[2].update(i);
		cout << endl;
		
	}
	return 0;
}