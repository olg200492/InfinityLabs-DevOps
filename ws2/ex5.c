#include <stdio.h>
#include "ex2.h"

//Function recives an integer array 1 and empty array and copies values from array1 to array2
size_t StrLen(const char *s)
{
    int size = 0;
    int i = 0;

    while(s[i])
    {
        size++;
    }

    return (size);
}