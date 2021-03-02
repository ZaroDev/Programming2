/*
3. Implement the class Vec3 that represents a 3D vector or position in the space.

a. I will contain three public float data members x, y, and z.

b. Write three constructors:
i. One without parameters that will initialize all of its members to 0.

ii. Another with three parameters to initialize its x, y, and z components.

iii. A copy constructor that accepts another object of the type Vec3.

c. Implement a method length() that returns the module or magnitude of the vector
(you can use the function sqrtf from the math.h library).

d. Implement the method inverse() that returns a new object Vec3 which has exactly
the same magnitude than the current object but in the opposite direction.

e. Write the function dot(...) outside the class that takes two objects of the type
Vec3 as parameters and returns the dot product of the two vectors. Remember
that the dot product, or scalar product, is computed as the sum of the
component-wise multiplication between the two vectors:
dot(a, b) = a.x * b.x + a.y * b.y + a.z * b.z

f. Write a main program to test the methods of this class
*/

#include <math.h>
#include <iostream>
using namespace std;

class Vec3
{
public:
	Vec3(){}
	Vec3(float x0, float y0, float z0) : x(x0), y(y0), z(z0){}
	Vec3(const Vec3 &vec) : x(vec.x), y(vec.y), z(vec.z){}
	
	float length()
	{
		return sqrtf(pow(this->x, 2) + pow(this->z, 2) + pow(this->z, 2));
	}
	Vec3 inverse()
	{
		Vec3 inv;
		inv.x = -this->x;
		inv.y = -this->y;
		inv.z = -this->z;

		return inv;
	}
	

	float x;
	float y;
	float z;

private:

};

float dot(Vec3 a, Vec3 b)
{
	float dot;
	dot = a.x * b.x + a.y * b.y + a.z * b.z;
	return dot;
}
int main()
{
	Vec3 vec1(3.0f, 4.0f, 5.0f);
	Vec3 vec2(50.0f, 3.0f, 4.0f);
	Vec3 vec3(vec1);
	Vec3 vec4 = vec2.inverse();

	cout << "Dot product " << dot(vec1, vec2) << endl;
	cout << vec2.x << " " << vec2.y << " " << vec2.z << " The inverse " << vec4.x << " " << vec4.y << " " << vec4.z << endl;
	cout << vec2.length() << endl;


	return 0;

}