/*****************************************************
 * QUIZ*.C                                       *

 * tests for stack.c funtions                         *

 *****************************************************/ 
#include <stdio.h>

int FindMissingNumber(int arr[], int size);
int main()
{

    int arr[] = { 0, 1, 2, 5};
    printf("%d\n", FindMissingNumber(arr, 4));
    return (0);
}

int FindMissingNumber(int arr[], int size)
{
    int i = 0;
    int new_size = size + 1;
    int temp[new_size];

    for (i = 0; i < size; i++)
    {
        temp[arr[i]] = 1;
    }

    for (i = 0; i < size; i++)
    {
       if (temp[i] == 0)
       {
           return i;
       }
    }

    return -1;

}
