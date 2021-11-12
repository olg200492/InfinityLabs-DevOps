#include <stdio.h>	/* Include printf function */
#include "/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws2/ex5.h"
#include "/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws2/ex6.h"
//Copies the string pointed to, by src to dest.
#include "string.h"

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
    TestStrchar();
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

    printf("Test 1: strcpy\n\n");

    if(strcmp(str1_src, str1_dest) == 0)
    {
        printf("src:\"%s\" is copied to dest:\"%s \n", str1_src, str1_dest);
    }
    else{
        printf("serc:\"%s\" did not copied to dest\"%s\" \n", str1_src, str1_dest);
    }

    if(strcmp(str2_src, str2_dest) == 0)
    {
        printf("src:\"%s\" is copied to dest:\"%s \n", str2_src, str2_dest);
    }
    else{
        printf("src:\"%s\" did not copied to dest\"%s\" \n", str2_src, str2_dest);
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

    printf("Test 2: strncpy\n\n");

    if(strlen(str3_dest) == 5)
    {
        printf("strncpy copied 5 character from src: \"%s\"to dest:\"%s\"\n", str3_src, str3_dest);
    }
    else
    {
        printf("strncpy did not success,only copied %lu character : \"%s\"\n", strlen(str3_dest), str3_dest);
    }

    if(strlen(str4_dest) == 14)
    {
        printf("strncpy copied 14 character fron \"%s\" to dest:\"%s\"\n", str4_src, str4_dest);
    }
    else
    {
        printf("strncpy did not success,only copied %lu  character : \"%s\"\n", strlen(str4_dest), str4_dest);
    }
}

void TestStrcasecmp(void)
{
    printf("Test 3: strcasecmp\n\n");
    

    char str_case1[] = "Hello World!";
    char str_case2[] = "hELLO wORLD!";
    char str_case3[] = "string";
    char str_case4[] = "STRING";
    char str_case5[] = "abc";
    char str_case6[] = "ab";

    if(strcasecmp(str_case1, str_case2) == 0)
    {
        printf("\"%s is equel to \"%s\"\n", str_case1, str_case2);
    }
    else
    {
        printf("\"%s is not equel to \"%s\"\n", str_case1, str_case2);
    }

    if(strcasecmp(str_case3, str_case4) == 0)
    {
        printf("\"%s is equel to \"%s\"\n", str_case3, str_case4);
    }
    else
    {
        printf("\"%s is not equel to \"%s\"\n", str_case3, str_case4);
    }

    if(strcasecmp(str_case5, str_case6) == 'c')
    {
        printf("\"%s is equel to \"%s\"\n", str_case5, str_case6);
    }
    else
    {
        printf("\"%s is not equel to \"%s\"\n", str_case5, str_case6);
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
    char* str3_dup = "";
    char* str4_dup = strdup(str3_dup);

    if(strcmp(str1_dup, str2_dup) == 0)
    {
        printf("\"%s\" is idintical string to \"%s\"\n", str1_dup, str2_dup);
    }
    else
    {
        printf("\"%s\" is not idintical string to \"%s\"\n", str1_dup, str2_dup);
    }

    if(strcmp(str3_dup, str4_dup) == 0)
    {
        printf("\"%s\" is idintical string to \"%s\"\n", str1_dup, str2_dup);
    }
    else
    {
        printf("\"%s\" is not idintical string to \"%s\"\n", str1_dup, str2_dup);
    }
    free(str2_dup);
    free(str4_dup);
    str2_dup = NULL;
    str4_dup = NULL;  
}

void TestStrcat(void)
{

    char dest[50] = "This is an";
    char src[50] = " example";

    printf("Befor strcat:\n");
    printf("%s\n",dest);
    strcat(dest, src);
    printf("After strcat:\n");
    printf("%s\n",dest);
}

void TestStrncat(void)
{
    char dest1[25] = "This is an example";
    char src1[50] = " to show working of strncat() this is not added";

    printf("Befor strncat:\n");
    printf("%s\n",dest1);
    strcat(dest1, src1);
    printf("After strncat:\n");
    printf("%s\n",dest1);
}

void TestStrstr(void)
{
    const char haystack1[] = "TutorialsPoint";
    const char needle1[] = "Point";

    const char haystack2[] = "Google Buy Bob";
    const char needle2[] = "Hi";
    
    
    char *ret1 = strstr(haystack1, needle1);
    char *ret2 = strstr(haystack2, needle2);

    if (ret2 != NULL)
    {
        printf("strstr did found needle = \"%s\" in haystack = \"%s\"\n\n", needle1, haystack1);
    }
    else
    {
        printf("strstr did not found needle = \"%s\" in haystack = \"%s\"\n\n", needle1, haystack1);
    }

    if (ret2 != NULL)
    {
        printf("strstr did found needle = \"%s\" in haystack = \"%s\"\n\n", needle1, haystack1);
    }
    else
    {
        printf("strstr did not found needle = \"%s\" in haystack = \"%s\"\n\n", needle1, haystack1);
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

