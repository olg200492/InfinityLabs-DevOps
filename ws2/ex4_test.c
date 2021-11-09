#include <stdio.h>	/* Include printf function */
#include <stddef.h>
#include "ex4.h"	/* swap */

int main()
{
    size_t a = 1;
    size_t b = 2;
    size_t *c = &a;
    size_t *d = &b;    

    printf("Before swap: c = %p, d = %p.\n", c, d);
    SwapsSize_tPointer(&c, &d);
    printf("After swap: c = %p, d = %p.\n", c, d);

    return (0);
}