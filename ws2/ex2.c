#include <stdio.h>
#include "ex2.h"

//Function recives an integer array and returns a copied array
int* CopyAnIntegerArray(int *array)
{
    int *arr = (int *) malloc(sizeof(array));
    int array_size = sizeof(array) / sizeof(array[0]);
    int i = 0;

    if( arr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    for(i = 0; i < array_size; i++)
        {
            arr[i] = array[i];
        }

    return arr;

}