#include "svl/svl.h"
#include <iostream>
using namespace std;

struct _t {
	Vec v;
//	float f;
};

#if 1
main ()
{
	struct _t *tt;

	tt = (struct _t*) calloc (1, sizeof (struct _t));  // malloc won't work!!

	cout << sizeof (struct _t) << "; " <<  tt->v.Elts() << endl;

	Vec vv;
	vv.SetSize (10);

	tt->v = vv;

	for (int i = 0; i < tt->v.Elts(); i++) {
		tt->v[i] = i;
	}

	cout << tt->v << endl;
}
#else
main ()
{
	struct _t tt;

	tt.v.SetSize (10);

	for (int i = 0; i < tt.v.Elts(); i++) {
		tt.v[i] = i;
	}

	cout << tt.v << endl;
}
#endif