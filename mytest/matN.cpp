// two matrices: Q(4x4), p(4x1)
// find out whether transpose(4x1) * 4x4 * 4x1 gives 1x1 [yes]
// general (4x4)-1 ... [yes]

// transform Mat4 --> general Mat (4x4) [yes]
#include "svl/svl.h"
#include <iostream>
using namespace std;

main()
{
	Mat m (4,4, 1.,0.,0.,0., 0.,4.,0.,0., 0.,0.,4.,0., 0.,0.,0.,-4.);
	cout << m << endl;
	
	Mat4 mtrans = HTrans4 (Vec3 (1,2,3));
	m = mtrans;
	cout << m << endl;

	Mat p(4,1, 1.,2.,3., 1.);
	cout << trans(p)*m*p << endl;
}