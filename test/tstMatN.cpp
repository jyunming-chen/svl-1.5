#include "svl/svl.h"
#include <iostream>
using namespace std;

//
// testing general matrix routine in svl
// transpose, multiplication, inverse
//
main()
{
	Vec3 a(1,1,1);
#if 1
	Mat m(2,3,1.,2.,3.,1.,0.,-1.);

	cout << m << endl;

	Mat mt = trans(m);
	cout << mt << endl;

#if 1
	Vec tt (2, 1.,2.);
	tt = mt*tt;   // if you do this, tt changes from 2x1 to 3x1
	cout << tt << endl;
#else
	Vec3 ttt;
	Vec2 tt(1.,2.); 
	ttt = mt*tt;  // this does not compile; at compile time, there is no assurance that Mat and Vec2 are compatible.
#endif

	Mat mmt = m*mt;
	cout << mmt << endl;

	Mat minv = inv (mmt);
	cout << minv << endl;
#endif
}
