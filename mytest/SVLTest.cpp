#include <iostream>


#include "svl/SVL.h"

using namespace std;

main ()
{
	Vec3 x;

	x = Vec3 (vl_one);
	cout << "x is: " << x << endl;
	cout << "len(x): " << len(x) << endl;

	Mat3 m;
	m = Rot3 (-1*Vec3 (vl_z), vl_halfPi);
	cout << "Rot.x: " << m*x << endl;
}
