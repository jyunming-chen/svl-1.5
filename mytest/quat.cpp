#include <svl/svl.h>
#include <iostream>
using namespace std;

void main (int argc, char **argv)
{
	Quat q(0,0,1,0);
	
	// Quaternion in SVL [q, q0]
	q = norm(q);
//	cout << q << endl;
#if 0
	Mat3 m = Rot3(q);
	cout << m << endl;
#endif
	
	Vec3 x(1,1,1);
	Quat xp;
	xp = q*Quat(1,1,1,0)*conjugate(q);

	cout << xp << endl;
}

