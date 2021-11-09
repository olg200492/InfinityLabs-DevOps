#include <stdlib.h>
#include <stddef.h>
#include "ex3.h"	/* swap*/

/*swaps the value of 2 variables of type size_t or size_t* */
void SwapsSize_t(size_t *varibale1, size_t *varibale2)
{
    *varibale1 = *varibale1 ^ *varibale2;
    *varibale2 = *varibale1 ^ *varibale2;
    *varibale1 = *varibale1 ^ *varibale2;
}
