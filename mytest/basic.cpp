#include <svl/SVL.h>
#include <iostream>
using namespace std;

// scope and life span

main()
{
	Vec3 v = Vec3 (1.,2.,3.);

	// element access
	for (int i = 0; i < v.Elts(); i++) 
		cout << "v[" << i << "]= " << v[i] << endl;

	Vec3 w = Vec3 (2., -1., 3.);
	cout << "dot: " << dot(v,w) << endl;

	Mat2 m (1.0, 2.0, 3.0, 4.0);  
	cout << m << endl;
	
	
	// generic vector/matrix
	Vec vv (4, 1., 2., 3., 4.);             // (elts, data)
	Mat mm (2, 3, 1., 2., 3., 2., 4., 6.);  // (rows, cols, data)   ... row major
	cout << vv << endl << mm << endl;


	vv.SetSize (2);  // resize to make 2x1 vector
	vv = mm*v;
	cout << vv << endl;

	// transpose
	Mat mmt = trans (mm);
	cout << "[RxC]: " << mmt.Rows() << "x" << mmt.Cols() << endl;
	cout << mmt << endl;
}
