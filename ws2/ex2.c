#include <stdio.h>
#include "ex2.h"

//Function recives an integer array 1 and empty array and copies values from array1 to array2
void CopyAnIntegerArray(int *array1, int *array2, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
        {
            array2[i] = array1[i];
        }

}