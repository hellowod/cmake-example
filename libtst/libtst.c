#include <stdio.h>
#include "libtst.h"

LIBTST_API void say(const char * name) {
    printf ("Hello %s!/n", name);
}