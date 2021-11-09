#include <stdlib.h>
#include <stddef.h>
#include "ex3.c"
#include "ex4.h"	/* swap*/

/*swaps the value of 2 variables of size_t* */
void SwapsSize_tPointer(size_t **varibale1, size_t **varibale2)
{
      size_t *temp = *varibale1;
      *varibale1 = *varibale2;
      *varibale2 = temp;
}