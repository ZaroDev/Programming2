#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle(int h0, int w0) : h(h0), w(w0) {}

private:
	int h;
	int w;
	friend void Transpose(Rectangle& r);
};
void Transpose(Rectangle& r)
{
	int aux = 0;
	aux = r.h;
	r.h = r.w;
	r.w = aux;
	cout << r.h << r.w << endl;
}


int main()
{
	Rectangle* r = new Rectangle(3, 2);

	Transpose(*r);

	

	return 0;
}
