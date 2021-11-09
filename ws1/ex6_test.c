#include <stdio.h>	/* Include printf function */
#include "ex6.h" /* Includes reverseNumber function*/

int main()
{
    int res1 = ReverseNumber(12340);
    int res2 = ReverseNumber(123456789);
    int res3 = ReverseNumber(-6789);
    printf("%d\n", res1);
    printf("%d\n", res2);
    printf("%d\n", res3);
    return (0);
}