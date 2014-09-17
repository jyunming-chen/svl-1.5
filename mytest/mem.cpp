#include "svl/SVL.h"
#include <iostream>
using namespace std;

Vec3 subtest ()
{
	Vec3 a(1,1,1);
	Vec3 b(2,2,2);
	Vec3 c;

	c = 2*a + (-1.5)*b;
	return c;
	//cout << "combination: " << c << endl;
}

main()
{
	Vec3 v;
	for (int i = 0; i < 10000000; i++) 
		v = subtest();	
	cout << "combination: " << v << endl;
	
	int a;
	cin >> a;
}