#include "svl/svl.h"
#include <iostream>
using namespace std;

main ()
{
	// mQuat <-> 3x3
	Quat p(1,1,1,1);
	normalise(p);

	Mat3  m = Rot3 (p);
	cout << m << endl;

	Vec3 qbar, pbar;
	qbar = Vec3(4,1,-2);
	pbar = Vec3 (1,1,1);
	Vec3 b = qbar - m*pbar;

	cout << b << endl;

	cout << "q1: " << m*Vec3(3,0,0) + b << endl;
	cout << "q2: " << m*Vec3(0,3,0) + b << endl;
	cout << "q3: " << m*Vec3(0,0,3) + b << endl;


#if 0
	Quat p(1,0,0,1);
	normalise(p);
//	cout << p << endl;

	Quat q(0,0,1,1);
	normalise(q);
//	cout << q << endl;

	// axis -> mQuat
	Vec3 axis(0,0,1);
	Quat rr (axis, 1.57);
//	cout << rr << endl;

	// mQuat <-> 3x3
	Mat3  m = Rot3 (p);
	cout << m << endl;
	Quat pp(m);
	cout << pp << endl;

	//	r = p * q;
	Quat r = p*q;
	cout << r << endl;

	// slerp
	for (int i = 0; i <= 10; i++) {
		Quat r = slerp (p, q, i/10.);
		cout << "[" << i << "]:" << r << " len: " << len(r) << endl;
	}
#endif
}
