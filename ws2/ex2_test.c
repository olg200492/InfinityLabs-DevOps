#include <stdio.h>	
#include <stdlib.h>
#include "ex2.h"	

int main()
{
    int arr1[] = { 8, 1, 2, 3};
    int arr2[4] = { 0, 0, 0, 0};
    int i = 0;

    CopyAnIntegerArray(arr1, arr2, 4);

    for(i = 0; i < 4; i++)
    {
        printf("arr2[%d] = %d ", i, arr2[i]);
    }
    printf("\n");
    return (0);
}