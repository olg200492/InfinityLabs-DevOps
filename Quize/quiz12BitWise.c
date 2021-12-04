/*****************************************************
 * QUIZ12.C                                           *
 * 
 * Write a function that counts the number of set bits
 * in a long, using a loop.The loop must be written 
 * such that the number of times that it executes 
 * must be exactly as the number of set bits.
 *                                                   *

 *****************************************************/ 
#include <stdio.h>


int main()
{
    int count = 0;
    int i = 0;
    long n = 00000000000000000000000000001011;
    while(n )
    {
        count++;
        n &= (n - 1);
        i++;
        printf("i = %d\n", i);
    }
    printf("%d\n", count);
    return (0);
}