#include <stdio.h>	/* Include printf function */
#include <stddef.h>
#include "ex3.h"	/* swap */

int main()
{
    size_t a = 1;
    size_t b = 2;
    size_t *c = &a;
    size_t *d = &b;

    printf("Before swap: a = %lu, b = %lu.\n", a, b);
    SwapsSize_t(&a, &b);
    printf("After swap: a = %lu, b = %lu.\n", a, b);

    return (0);
}