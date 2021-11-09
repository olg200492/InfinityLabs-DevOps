#include <stdio.h>	
#include <stdlib.h>
#include "ex2.h"	

int main()
{
    int arr1[] = { 0, 1, 2, 3};
    int *arr2 = NULL;
    int i = 0;

    arr2 = CopyAnIntegerArray(arr1);
    if(arr2 != NULL)
    {
        int size_of_arr2 = sizeof(arr2) / sizeof(arr2[0]);
        printf("%d\n", size_of_arr2);
        
        for(i = 0; i < size_of_arr2; i++)
        {
            printf("arr2[%d] = %d ,", i, arr2[i]);
        }

        free(arr2);
        arr2 = NULL;
    }
    return (0);
}