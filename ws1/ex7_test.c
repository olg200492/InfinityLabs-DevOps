#include <stdio.h>	/* Include printf function */
#include "ex7.c"	/* swap */

int main()
{
    int a = 1;
    int b = 2;
    int c = 2;

    printf("Before swap: a = %d, b = %d.\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d.\n", a, b);
    return (0);
}