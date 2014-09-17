#include "svl/svlnamespace.h"

using namespace svl;

main ()
{
	Vec2 a(1,1);
	Vec2 b(2,2);
	a += b;

	norm (a);  // this is ok (only use inline functions

	HTrans3 (a);  // this is more involved (with library functions). 
	              // I have built svl:: library, somehow still failed...
}
