#include "vector2.h"

_def_vop(_vadd, +);
_def_vop(_vsub, -);
_def_vop(_vmul, *);
_def_vop(_vdiv, /);

_def_aop(_vsum, 0, +=);
_def_aop(_vproduct, 1, *=);
