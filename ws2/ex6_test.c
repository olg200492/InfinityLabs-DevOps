#include <stdio.h> // printf
#include <assert.h> //assertג
#include "ex6.h"	

int main()
{
    char leftStr1[] = "abc";
    char rightStr1[] = "abc";
      
    int res1 = StrCmp(leftStr1, rightStr1);

    char leftStr2[] = "ABC";
    char rightStr2[] = "abc";
      
    int res2 = StrCmp(leftStr2, rightStr2);

    char leftStr3[] = "Google";
    char rightStr3[] = "GooglE";
      
    int res3 = StrCmp(leftStr3, rightStr3);

    //Variables for StrCmp Arye Tests
	char *str2 = "is this the same?";
	char *str3 = "th thameis is se?";
	
	int str_delta;
    
    printf("Olga Lapovsky test case:\n\n");
    if(res1 == 0)
    {
        printf("Test case 1 for StrCmp PASSED: \"%s\" string is equel to \"%s\".\n", leftStr1, rightStr1);
    }
    else
    {
        printf("Test case 1 for StrCmp FAILED!!! \n"); 
    }

    if(res2 == -32)
    {
        printf("Test case 2 for StrCmp PASSED: \"%s\" string is more then to \"%s\".\n", leftStr2, rightStr2);
    }
    else
    {
        printf("Test case 2 for StrCmp FAILED!!! \n"); 
    }

    if(res3 == 32)
    {
        printf("Test case 3 for StrCmp PASSED: \"%s\" string is less then to \"%s\".\n", leftStr3, rightStr3);
    }
    else
    {
        printf("Test case 3 for StrCmp FAILED!!! \n"); 
    }
    

    /*
    Arye Lev Zelkind test case

    */ 
    printf("/******************************************/\n");
    printf("Arye Lev Zelkind test case:\n\n\n");
    str_delta = StrCmp(str2, str3);
	assert(str_delta == -11);
		
	printf("calculated value for StrCmp(str2, str3) is: %d \n", str_delta);
	
	printf("StrCmp test successfull!\n\nnow testing StrCmp, will compare str 3 and str 2\nstr3 = %s\nstr2 = %s\n", str3, str2);
	
	str_delta = StrCmp(str3, str2);
	assert(str_delta == 11);
	
	printf("calculated value for StrCmp(str2, str3) is: %d \n", str_delta);
	
	printf("StrCmp test successfull!\n\nnow testing StrCmp, will compare str 2 and str 2\nstr2 = %s\nstr2 = %s\n", str2, str2);
	
	str_delta = StrCmp(str2, str2);
	assert(str_delta == 0);
	printf("calculated value for StrCmp(str2, str3) is: %d \n", str_delta);
	
	printf("StrCmp test successfull! GOOD JOB!!\n");       


    return (0);
}