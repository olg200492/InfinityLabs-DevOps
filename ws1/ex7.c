#include "ex7.h"	/* swap*/

/*swaps the value of 2 variables*/
void swap(int *varibale1, int *varibale2)
{
    int tmp = *varibale1;
    *varibale1 = *varibale2;
    *varibale2 = tmp;
}
