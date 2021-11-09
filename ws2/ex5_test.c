#include<stdio.h>
#include <string.h>
#include <assert.h>
#include "ex5.h"	

int main()
{
    char str[]= "geeks";
  
    printf("Length of string in builtin strlen is: %ld\n", strlen(str));

    printf("Length of string in re-implement StrLen is: %ld\n", strlen(str));

    assert(strlen(str) == 5);

    return (0);
}