#include <stdio.h>	/* printf */
#include <string.h> /*strcmp */
#include "pointers2.h"	

void TestIsPali(void);
void TestBoom7(void);
void TestDelSpace(void);
int main()
{
    //TestIsPali();
    //TestBoom7();
    TestDelSpace();
    return (0);
}

void TestIsPali(void)
{
    // IsPali test case:
    char str1[] = "abba";
    char str2[] = "aba";
    char str3[] = "121";
    char str4[] = "akl";
    char str5[] = "1k";
   
    if(IsPali(str1) == 1)
    {
        printf("Test case 1 IsPali PASSED: \"%s\" is a palindrom\n", str1);
    }
    else
    {
        printf("Test case 1 IsPali FAILED!!!: \"%s\" is a palindrom, returned value is: %d\n", str1, IsPali(str1));
    }

    if(IsPali(str2) == 1)
    {
        printf("Test case 2 IsPali PASSED: \"%s\" is a palindrom\n", str2);
    }
    else
    {
        printf("Test case 2 IsPali FAILED!!!: \"%s\" is a palindrom, returned value is: %d\n", str2, IsPali(str2));
    }

    if(IsPali(str3) == 1)
    {
        printf("Test case 3 IsPali PASSED: \"%s\" is a palindrom\n", str3);
    }
    else
    {
        printf("Test case 3 IsPali FAILED!!!: \"%s\" is a palindrom, returned value is: %d\n", str3, IsPali(str3));
    }

    if(IsPali(str4) == 0)
    {
        printf("Test case 4 IsPali PASSED: \"%s\" is not a palindrom\n", str4);
    }
    else
    {
        printf("Test case 4 IsPali FAILED!!!: \"%s\" is not a palindrom, returned value is: %d\n", str4, IsPali(str4));
    }
    
    if(IsPali(str5) == 0)
    {
        printf("Test case 5 IsPali PASSED: \"%s\" is not a palindrom\n", str5);
    }
    else
    {
        printf("Test case 5 IsPali FAILED!!!: \"%s\" is not a palindrom, returned value is: %d\n", str5, IsPali(str5));
    }
    
    
}

void TestBoom7(void)
{
     // Boom7 test case:
    int start1 = 0, end1 = 7;
    int start2 = 14, end2 = 21;
    int start3 = 0, end3 = 0;
    int start4 = 10, end4 = -6;
    
    printf("Test case 1 Bomm7:\n");
    printf("Range 0 - 7 should print:\n0 1 2 3 4 5 6 BOOM\n\n");
    Boom7(start1, end1);

    printf("Test case 2 Bomm7:\n");
    printf("Range 14 - 21 should print:\nBOOM 15 16 BOOOM 18 19 20 BOOM\n\n");
    Boom7(start2, end2);

    printf("Test case 2 Bomm7:\n");
    printf("Range 0 - 0 should print:\n0\n\n");
    Boom7(start3, end3);

    printf("Test case 3 Bomm7:\n");
    printf("Range 10 - (-6) should print:\nError:Invalit inputs\n\n");
    Boom7(start4, end4);
}

void TestDelSpace(void)
{
    char string1BeforeDelSpace[] = " and ";
    char string1AfterDelSpace[] = "and";
    char string2BeforeDelSpace[] = "andI buy Milk";
    char string2AfterDelSpace[] = "andI buy Milk";
    char string3BeforeDelSpace[] = " Can I think about    this?  ";
    char string3AfterDelSpace[] = "Can I think about this?";
    char string4BeforeDelSpace[] = "";
    char string4AfterDelSpace[] = "";

    printf("Before DelSpace, string is: \"%s\"\n", string1BeforeDelSpace);
    DelSpace(string1BeforeDelSpace);
    if(strcmp(string1BeforeDelSpace, string1AfterDelSpace) == 0)
    {
        printf("Test case 1 DelSpace PASSED: outcome is \"%s\"\n\n", string1AfterDelSpace);
    }
    else
    {
        printf("Test case 1 DelSpace FAILED!!!: outcome is\"%s\"\n\n", string1AfterDelSpace);
    }

    
    printf("Before DelSpace, string is: \"%s\"\n", string2BeforeDelSpace);
    DelSpace(string2BeforeDelSpace);
    if(strcmp(string2BeforeDelSpace, string2AfterDelSpace) == 0)
    {
        printf("Test case 2 DelSpace PASSED: outcome is \"%s\"\n\n", string2AfterDelSpace);
    }
    else
    {
        printf("Test case 2 DelSpace FAILED!!!: outcome is \"%s\"\n\n", string2AfterDelSpace);
    }


    
    printf("Before DelSpace, string is: \"%s\"\n", string3BeforeDelSpace);
    DelSpace(string3BeforeDelSpace);
    if(strcmp(string3BeforeDelSpace, string3AfterDelSpace) == 0)
    {
        printf("Test case 3 DelSpace PASSED: outcome is \"%s\"\n\n", string3AfterDelSpace);
    }
    else
    {
        printf("Test case 3 DelSpace FAILED!!!: outcome is \"%s\"\n\n", string3AfterDelSpace);
    }

    
    printf("Before DelSpace, string is: \"%s\"\n", string4BeforeDelSpace);
    DelSpace(string4BeforeDelSpace);
    if(strcmp(string4BeforeDelSpace, string4AfterDelSpace) == 0)
    {
        printf("Test case 4 DelSpace PASSED: outcome is \"%s\"\n\n", string4AfterDelSpace);
    }
    else
    {
        printf("Test case 4 DelSpace FAILED!!!: outcome is \"%s\"\n\n", string4AfterDelSpace);
    }

    
}