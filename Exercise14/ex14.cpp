#include <iostream>
using namespace std;

class Box
{
public:
	Box();
	~Box();
	void Print()
	{
		cout << this->x << this->y << this->z << endl;
	}
	friend void OpenBox(Box *box);
private:
	int x, y, z;
	string Name;
};

Box::Box()
{
	Name = "Hello";
}

Box::~Box()
{
}
void OpenBox(Box *box)
{
	cout << box->Name << endl;
}

int main()
{
	Box *box = new Box;
	box->Print();
	OpenBox(box);
	delete box;
	return 0;
}