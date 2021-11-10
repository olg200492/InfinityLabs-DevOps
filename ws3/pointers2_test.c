#include <stdio.h>	/* printf */
#include <string.h> /*strcmp */
#include "pointers2.h"	

int main()
{
   // IsPali test case:
    char str1[] = "abba";
    char str2[] = "aba";
    char str3[] = "121";
    char str4[] = "akl";
    char str5[] = "1k";
   
    
    printf("Test 1: %s is a plindrom and IsPali should return 1: %d\n", str1, IsPali(str1));
    printf("Test 2: %s is a plindrom and IsPali should return 1: %d\n", str2, IsPali(str2));
    printf("Test 3: %s is a plindrom and IsPali should return 1: %d\n", str3, IsPali(str3));
    printf("Test 4: %s is not a plindrom and IsPali should return 0: %d\n", str4, IsPali(str4));
    printf("Test 5: %s is not a plindrom and IsPali should return 0: %d\n", str5, IsPali(str5));

    /*******************************************************************************************/

    // Boom7 test case:
    int start1 = 0, end1 = 7;
    int start2 = 14, end2 = 21;
    int start3 = 0, end3 = 0;
    int start4 = 10, end4 = -6;
    
    printf("Test 6:\n");
    printf("Range 0 - 7 should print:\n0, 1, 2, 3, 4, 5, 6, BOOM\n");
    Boom7(start1, start1);

    printf("Test 7:\n");
    printf("Range 14 - 21 should print:\nBOOM, 15, 16, 17, 18, 19, 20, BOOM\n");
    Boom7(start2, start2);

    printf("Test 8:\n");
    printf("Range 0 - 0 should print:\n0\n");
    Boom7(start3, start3);

    printf("Test 9:\n");
    printf("Range (-10) - 0 should print:\n Error:Invalit input\n");
    Boom7(start4, start4);

    /*******************************************************************************************/

    /* test case for DelSpace */
    char string1BeforeDelSpace[] = " and ";
    char string1AfterDelSpace[] = "and";
    char string2BeforeDelSpace[] = "andI buy Milk";
    char string2AfterDelSpace[] = "andIbuyMilk";
    char string3BeforeDelSpace[] = " Can I think about this?  ";
    char string3AfterDelSpace[] = "CanIthinkaboutthis?";
    char string4BeforeDelSpace[] = "";
    char string4AfterDelSpace[] = "";

    DelSpace(string1BeforeDelSpace);
    DelSpace(string2BeforeDelSpace);
    DelSpace(string3BeforeDelSpace);
    DelSpace(string4BeforeDelSpace);

    printf("Test 10:\n");
    
    if(strcmp(string1BeforeDelSpace, string1AfterDelSpace) == 0)
    {
        printf("\"%s\" is equel to \"%s\"\n", string1BeforeDelSpace, string1AfterDelSpace);
    }
    else
    {
        printf("\"%s\" is not equel to \"%s\"\n", string1BeforeDelSpace, string1AfterDelSpace);
    }

    printf("Test 11:\n");
    
    if(strcmp(string2BeforeDelSpace, string2AfterDelSpace) == 0)
    {
        printf("\"%s\" is equel to \"%s\"\n", string2BeforeDelSpace, string2AfterDelSpace);
    }
    else
    {
        printf("\"%s\" is not equel to \"%s\"\n", string2BeforeDelSpace, string2AfterDelSpace);
    }


    printf("Test 12:\n");

    if(strcmp(string3BeforeDelSpace, string3AfterDelSpace) == 0)
    {
        printf("\"%s\" is equel to \"%s\"\n", string3BeforeDelSpace, string3AfterDelSpace);
    }
    else
    {
        printf("\"%s\" is not equel to \"%s\"\n", string3BeforeDelSpace, string3AfterDelSpace);
    }

    printf("Test 13:\n");
   
    if(strcmp(string4BeforeDelSpace, string4AfterDelSpace) == 0)
    {
        printf("\"%s\" is equel to \"%s\"\n", string4BeforeDelSpace, string4AfterDelSpace);
    }
    else
    {
        printf("\"%s\" is not equel to \"%s\"\n", string4BeforeDelSpace, string4AfterDelSpace);
    }

    return (0);
}