#include <stdio.h> // printf
#include <assert.h> //assertג
#include "ex6.h"	

int main()
{
    char leftStr[] = "abc";
    char rightStr[] = "abcd";
      
    int res = StrCmp(leftStr, rightStr);
    
    assert(res);
    printf("Strings are unequal\n");         


    return (0);
}