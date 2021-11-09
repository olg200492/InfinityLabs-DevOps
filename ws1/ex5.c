#include <stdio.h>	/* Include printf function */
#include "ex5.h"	/* Include Power10ByN function declaration */

/*Returns the power of 10 by N*/
float Power10ByN(int n)
{
    float result = 1.0;
    float base = 10.0;
    int i = 0;
    
    if (n < 0)
    {
        n *= -1;
        base = (float)1.0/10.0;
    }
    
    for (i = 0; i < n; i++)
    {
        result *= base;
    }
    
    return result;
    
}