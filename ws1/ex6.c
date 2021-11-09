#include "ex6.h"	/* FlipNumber*/

/*Recieves an number and reverse its digits*/
int ReverseNumber(int n)
{
    int reversed_number = 0;
    
    while (n) 
    {
        reversed_number *= 10;
	    reversed_number += n % 10;
        n /= 10;
    }
    return (reversed_number);
}