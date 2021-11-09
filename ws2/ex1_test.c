#include <stdio.h>	/* Include printf function */
#include "ex1.h"	/* swap */

int main()
{
    int a = 1;
    int b = 2;
    int c = 2;

    printf("Before swap: a = %d, b = %d.\n", a, b);
    Swaps(&a, &b);
    printf("After swap: a = %d, b = %d.\n", a, b);
    return (0);
}