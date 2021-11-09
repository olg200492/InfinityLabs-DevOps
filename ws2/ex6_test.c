#include <stdio.h>
#include <string.h>
#include "ex6.h"	

int main()
{
    char leftStr[] = "abc";
    char rightStr[] = "abcd";
      
    int res = strcmp(leftStr, rightStr);
      
    if (res==0)
        printf("Strings are equal");
    else 
        printf("Strings are unequal");
          
    printf("\nValue returned by strcmp() is:  %d\n" , res);

    return (0);
}