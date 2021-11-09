#include "ex1.h"	/* swap*/

/*swaps the value of 2 variables*/
void Swaps(int *varibale1, int *varibale2)
{
    *varibale1 = *varibale1 ^ *varibale2;
    *varibale2 = *varibale1 ^ *varibale2;
    *varibale1 = *varibale1 ^ *varibale2;
}
