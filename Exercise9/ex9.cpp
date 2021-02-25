/*
1. Implement the class Pixel with 3 members r, g, and b (red, green, and blue) which will
contain values from 0 to 255. Each member has associated a method to consult its
value.
The class must contain a method called mix, that, given another Pixel (received as a
parameter) returns a new Pixel whose color is the average value of the members r, g,
and b. For instance, if the first Pixel’s values are (100, 0, 300), and the second one’s are
(0, 50, 100), the resulting Pixel will have values (50, 25, 150).
So, with that class ready, the next program:
int main()
{
Pixel black;
Pixel blue(0, 0, 255);
Pixel red(255, 0, 0);
Pixel mixed = red.mix(blue);
cout << black.red() << " " << black.green() << " " << black.blue() << endl;
cout << mixed.red() << " " << mixed.green() << " " << mixed.blue() << endl;
}
Should produce the following output:
0 0 0
127 0 127*/

#include <iostream>
using namespace std;

class  Pixel
{
public:
	Pixel() : r(0), g(0), b(0) {}
	Pixel(unsigned int r0, unsigned int g0, unsigned int b0) : r(r0), g(g0), b(b0) {}
	
	unsigned int r;
	unsigned int g;
	unsigned int b;
	Pixel mix(Pixel a)
	{
		Pixel aux;
		aux.r = (a.r + r) / 2;
		aux.g = (a.g + g) / 2;
		aux.b = (a.b + b) / 2;

		return aux;
	}
	unsigned int red()
	{
		return r;
	}
	unsigned int blue()
	{
		return b;
	}
	unsigned int green()
	{
		return g;
	}
private:

};


int main()
{
	Pixel black;
	Pixel blue(0, 0, 255);
	Pixel red(255, 0, 0);
	Pixel mixed = red.mix(blue);
	cout << black.red() << " " << black.green() << " " << black.blue() << endl;
	cout << mixed.red() << " " << mixed.green() << " " << mixed.blue() << endl;

	return 0;
}
