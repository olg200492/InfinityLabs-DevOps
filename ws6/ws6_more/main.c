#include <stdio.h> //printf
//#include "a.c"
#include "g.h"

void main()
{
    printf("g_s = %d\n",g_s);
    Foo();
    printf("g_s = %d\n",g_s);
}