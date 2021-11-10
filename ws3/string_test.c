#include <stdio.h>	/* Include printf function */
#include "string.h"	

int main()
{
    /* strcpy test case: */
    char str1Src[] = "Hello World!";
    char* str1Dest;
    char str2Src[] = "";
    char* str2Dest;
   
    strcpy(str1Dest, str1Src);
    strcpy(str2Dest, str2Src);

    printf("Test 1:\n %s is the same as: %s\n", str1Src, str1Dest);
    printf("Test 2:\n %s is the same as: %s\n", str2Src, str2Dest);
    /*******************************************************************************************/

    
    /*******************************************************************************************/

    /* test case for DelSpace */
    

    return (0);
}