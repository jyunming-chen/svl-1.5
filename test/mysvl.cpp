// call by reference
#include <iostream>
using namespace std;

class Vec3 
{
	double v[3];
	int k[2];
public:
	Vec3 () { cout << "default constructor" << endl;}
	Vec3(double x, double y, double z) { 
	    cout << "first constructor" << endl;
		v[0] = x, v[1] = y, v[2] = z;
	};
	
	Vec3 Sum2 (Vec3 a, Vec3 b);
	void Sum1 (Vec3 a, Vec3 b, Vec3 &sum);
	Vec3 Sum3 (Vec3 &a, const Vec3 &b);
#if 1
	void print(void) {
		cout << "[" << v[0] << ", " << v[1] << ", " << v[2] << "]" << endl;
	};
#endif
};

void Vec3::Sum1 (Vec3 a, Vec3 b, Vec3 &sum) // sum = a + b;
{
	for (int i = 0; i < 3; i++) {
		sum.v[i] = a.v[i] + b.v[i];
	}
}

Vec3 Vec3::Sum2 (Vec3 a, Vec3 b)  // return = a + b;
{
	return a;
}

Vec3 Vec3::Sum3 (Vec3 &a, const Vec3 &b)  // a = a + b
{
	for (int i = 0; i < 3; i++) {
		a.v[i] = a.v[i] + b.v[i];
	}
	return a;
}

void myfunc (Vec3 a) 
{
	cout << "in myfunc..." << endl;
	a.print();
	Vec3 b(2,2,2);
	a.Sum3(a,b);
}

void main (int argc, char** argv)
{
	Vec3 a = Vec3 (1,1,1);
	Vec3 b (2,2,2);
	Vec3 sum;

	a.Sum1 (a, b, sum);
	sum.print();

	myfunc (sum);
	a.print();
}
