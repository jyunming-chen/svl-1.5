#include "svl/svl.h"
#include <iostream>

using namespace std;
main()
{

	Vec3 v(1,2,3), v2;
	
	norm (v);

	cout << v << endl;

	normalise (v);
	cout << v << endl;

	Mat3 m(1,2,0,4,5,6,7,8,9);
	
	
	cout << adj(m) << endl;
//	printf ("%x %x\n", v.Ref(), v2.Ref());
}