#include <stdio.h>	/* Include printf function */
#include "/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws2/ex5.h"
#include "/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws2/ex6.h"
//Copies the string pointed to, by src to dest.
#include <assert.h> //assert

#include "./string.h"

void TestStrcpy(void);
void TestStrncpy(void);
void TestStrcasecmp(void);
void TestStrchar(void);
void TestStrdup(void);
void TestStrcat(void);
void TestStrncat(void);
void TestStrstr(void);
void TestStrspn(void);
void TestStrtok(void);

int main()
{
    //TestStrcpy();
    //TestStrncpy();
    //TestStrchar();
    //TestStrdup();
    //TestStrcasecmp();
    //TestStrncat();
    TestStrstr();
    return (0);
}

void TestStrcpy(void)
{
    char str1_src[] = "Hello World!";
    char str1_dest[50];
    char str2_src[] = "Hello Geeks!";
    char str2_dest[50]; 
   
    strcpy(str1_dest, str1_src);
    strcpy(str2_dest, str2_src);

   

    if(strcmp(str1_src, str1_dest) == 0)
    {
        printf("Test 1 strcpy PASSED: src:\"%s\" was copied to dest:\"%s \n", str1_src, str1_dest);
    }
    else{
        printf("Test case 1 strcpy FAILED!!!");
    }

    if(strcmp(str2_src, str2_dest) == 0)
    {
        printf("Test 2 strcpy PASSED: src:\"%s\" is copied to dest:\"%s \n", str2_src, str2_dest);
    }
    else{
        printf("Test case 2 strcpy FAILED!!!");
    }

}

void TestStrncpy(void)
{
    char str3_src[] = "Hello World!";
    char str3_dest[50];
    char str4_src[] = "Google buy Bob";
    char str4_dest[50];

    strncpy(str3_dest, str3_src, 5);
    strncpy(str4_dest, str4_src, 20);


    if(strlen(str3_dest) == 5)
    {
        printf("Test case 1 strncpy PASSED: copied 5 character from src: \"%s\"to dest:\"%s\"\n", str3_src, str3_dest);
    }
    else
    {
        printf("Test case 1 strncpy FALIED!!!");
    }

    if(strlen(str4_dest) == 14)
    {
        printf("Test case 2 strncpy PASSED: copied 14 character fron \"%s\" to dest:\"%s\"\n", str4_src, str4_dest);
    }
    else
    {
        printf("Test case 2 strncpy FALIED!!!");
    }
}

void TestStrcasecmp(void)
{
    char str_case1[] = "Hello World";
    char str_case2[] = "hELLO wORLD";
    char str_case3[] = "string";
    char str_case4[] = "STRING";
    char str_case5[] = "abc";
    char str_case6[] = "ab";

    if(strcasecmp(str_case1, str_case2) == 0)
    {
        printf("Test case 1 strcasecmp PASSED:\"%s is equel to \"%s\"\n", str_case1, str_case2);
    }
    else
    {
        printf("Test case 1 strcasecmp FAILED!!!\n");
    }

    if(strcasecmp(str_case3, str_case4) == 0)
    {
        printf("Test case 2 strcasecmp PASSED:\"%s is equel to \"%s\"\n", str_case3, str_case4);
    }
    else
    {
        printf("Test case 2 strcasecmp FAILED!!!\n");
    }

    if(strcasecmp(str_case5, str_case6) == 'c')
    {
        printf("Test case 3 strcasecmp PASSED:\"%s is equel to \"%s\"\n", str_case5, str_case6);
    }
    else
    {
        printf("Test case 3 strcasecmp FAILED!!!\n");
    }
}

void TestStrchar(void)
{
    const char str1[] = "http://www.google.com";
    const char ch1 = 'g';
    char *ret1 = strchr(str1, ch1);

    const char str2[] = "Bob";
    const char ch2 = 'z';
    char *ret2 = strchr(str2, ch2);

    if(ret1 != NULL)
    {
        printf("Test case 1 strchr PASSED:'%c' does occurre in \"%s\"\n", *ret1, str1);
    }
    else{
        printf("Test case 1 FAILED!!!\n");
    }

     if(ret2 == NULL)
    {
        printf("Test case 2 strchr PASSED:'%c' does not occurre in \"%s\"\n", ch2, str2);
    }
    else{
        printf("Test case 1 FAILED!!!\n");
    }

}

void TestStrdup(void)
{
    char* str1_dup = "Hi guys!";
    char* str2_dup = strdup(str1_dup);
    char* str3_dup = "Google";
    char* str4_dup = strdup(str3_dup);

    assert(str2_dup != NULL);
    assert(str4_dup != NULL);

    if(strcmp(str1_dup, str2_dup) == 0)
    {
        printf("Test case 1 strdup PASSED:\"%s\" is idintical string to \"%s\"\n", str1_dup, str2_dup);
    }
    else
    {
        printf("Test case 1 strdup FAILED!!!\n");
    }

    if(strcmp(str3_dup, str4_dup) == 0)
    {
        printf("Test case 2 strdup PASSED:\"%s\" is idintical string to \"%s\"\n", str4_dup, str3_dup);
    }
    else
    {
        printf("Test case 2 strdup FAILED!!!\n");
    }
    free(str2_dup);
    free(str4_dup);
    str2_dup = NULL;
    str4_dup = NULL;  
}

void TestStrcat(void)
{

    char dest1[50] = "abc";
    char src1[50] = "def";

    char dest2[50] = "";
    char src2[50] = "Hello";

    char dest3[50] = "Google!";
    char src3[50] = "";

    printf("Before strcat:\n");
    printf("dest1[] = \"%s\", src1[] = \"%s\"\n", dest1, src1);
    strcat(dest1, src1);
    printf("After strcat:\n");

    if(strlen(dest1) == 6)
    {
        printf("Test case 1 PASSED: dest1[] = \"%s\"\n\n", dest1);
    }
    else{
        printf("Test case 1 strcat FAILED!!!.\n\n");
    }

    printf("Before strcat:\n");
    printf("dest2[] = \"%s\", src2[] = \"%s\"\n", dest2, src2);
    strcat(dest2, src2);
    printf("After strcat:\n");

    if(strlen(dest2) == 5)
    {
        printf("Test case 2 PASSED: dest2[] = \"%s\"\n\n", dest2);
    }
    else{
        printf("Test case 2 strcat FAILED!!!.\n\n");
    }

    printf("Before strcat:\n");
    printf("dest3[] = \"%s\", src3[] = \"%s\"\n", dest3, src3);
    strcat(dest3, src3);
    printf("After strcat:\n");

    if(strlen(dest3) == 7)
    {
        printf("Test case 3 PASSED: dest3[] = \"%s\"\n\n", dest3);
    }
    else{
        printf("Test case 3 strcat FAILED!!!.\n\n");
    }

    
}

void TestStrncat(void)
{
    char dest1[25] = "abc";
    char src1[50] = "defg";

    char dest2[25] = "123";
    char src2[50] = "4567";

    printf("Before strncat:\n");
    printf("dest1[] = \"%s\", src1[] = \"%s\"\n", dest1, src1);
    strncat(dest1, src1, 3);
    printf("After strncat:\n");

    if(strlen(dest1) == 6)
    {
        printf("Test case 1 PASSED: dest1[] + 3 byets from strc1[] = \"%s\"\n\n", dest1);
    }
    else
    {
        printf("Test case 1 FAILED!!!\n");
    }

    printf("Before strncat:\n");
    printf("dest2[] = \"%s\", src2[] = \"%s\"\n", dest2, src2);
    strncat(dest2, src2, 10);
    printf("After strncat:\n");

    if(strlen(dest2) == 7)
    {
        printf("Test case 2 PASSED: dest2[] + 10 byets from strc2[] = \"%s\"\n\n", dest2);
    }
    else
    {
        printf("Test case 2 FAILED!!!\n");
    }
}

void TestStrstr(void)
{
    const char haystack1[] = "TutorialsPointIsGreat";
    const char needle1[] = "Point";

    const char haystack2[] = "Google Buy Bob";
    const char needle2[] = "Hi";
    
    
    char *ret1 = strstr(haystack1, needle1);
    char *ret2 = strstr(haystack2, needle2);

    if (ret1 == NULL)
    {
        printf("Test case 1 satrstr  FAILED!!!: should return pointer to needle = \"%s\" in haystack = \"%s\"\n", needle1, haystack1);
        
    }
    else
    {
        printf("Test case 1 strstr PASSED: did found needle = \"%s\" in haystack = \"%s\", returned: \"%s\"\n\n", needle1, haystack1, ret1);
    }

    if (ret2 == NULL)
    {
        printf("Test case 2 strstr PASSED: did not found needle = \"%s\" in haystack = \"%s\"\n\n", needle2, haystack2);
    }
    else
    {
        printf("Test case 2 satrstr  FAILED!!!\n");
    }


}

void TestStrspn(void)
{
    char *str1 = "eee";
    char *str2 = "geek";
    char *str3 = "abcd";
    char *str4 = "";
    char *str5 = "ggeeeekk";
    
    size_t len1 = strspn(str1, str2);
    size_t len2 = strspn(str2, str2);
    size_t len3 = strspn(str3, str2);
    size_t len4 = strspn(str4, str2);
    size_t len5 = strspn(str5, str2);

    if (len1 == 3)
    {
        printf("in \"%s\" there is %lu segment consist entirely of characther from \"%s\"\n", str1, len1, str2);
    }
    else
    {
        printf("returned invalid output for strspn(%s , %s)\n", str1, str2);
    }

    if (len2 == 4)
    {
        printf("in \"%s\" there is %lu segment consist entirely of characther from \"%s\"\n", str2, len2, str2);
    }
    else
    {
        printf("returned invalid output for strspn(%s , %s)\n", str2, str2);
    }

    if (len3 == 0)
    {
        printf("in \"%s\" there is %lu segment consist entirely of characther from \"%s\"\n", str3, len3, str2);
    }
    else
    {
        printf("returned invalid output for strspn(%s , %s)\n", str3, str2);
    }

    if (len4 == 0)
    {
        printf("in \"%s\" there is %lu segment consist entirely of characther from \"%s\"\n", str4, len4, str2);
    }
    else
    {
        printf("returned invalid output for strspn(%s , %s)\n", str4, str2);
    }

    if (len5 == 8)
    {
        printf("in \"%s\" there is %lu segment consist entirely of characther from \"%s\"\n", str5, len5, str2);
    }
    else
    {
        printf("returned invalid output for strspn(%s , %s)\n", str5, str2);
    }


}

void TestStrtok(void)
{
    char str[] = "This is - www.tutorialspoint.com - website";
    char delim[] = "-";

  
    char *token = strtok(str, delim);
   
    printf("Before tokanize the string is %s and token is: %s\n\n", str, delim);
    while ( token != NULL ) 
    {
        printf( " %s\n", token );    
        token = strtok(NULL, delim);
   }
}

