#include <stdio.h>	/* Include printf function */
#include "/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws2/ex5.h"
#include "/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws2/ex6.h"
//Copies the string pointed to, by src to dest.
#include "string.h"


int main()
{
    /* strcpy test case: */
    char str1_src[] = "Hello World!";
    char* str1_dest;
    char str2_src[] = "Hello Geeks!";
    char* str2_dest = "Hi Guyes"; 
   
    strcpy(str1_src, str1_dest);
    strcpy(str2_src, str2_dest);

    printf("Test 1: strcmp\n\n");

    if(strcmp(str1_src, str1_dest) == 0)
    {
        printf("\"%s\" is copied to \"%s \n", str1_src, str1_dest);
    }
    else{
        printf("\"%s\" did not copied to \"%s \n", str1_src, str1_dest);
    }

    if(strcmp(str2_src, str2_dest) == 0)
    {
        printf("\"%s\" is copied to \"%s \n", str2_src, str2_dest);
    }
    else{
        printf("\"%s\" did not copied to \"%s \n", str2_src, str2_dest);
    }

   
    /*******************************************************************************************/

    /* strncpy test case: */

    char str3_src[] = "Hello World!";
    char* str3_dest;
    char str4_src[] = "";
    char* str4_dest;

    strncpy(str3_dest, str3_src, 5);
    strncpy(str4_dest, str4_src, 6);

    printf("Test 2: strncmp\n\n");

    if(strlen(str3_dest) == 5)
    {
        printf("strncpy copied 5 character to destion");
    }
    else
    {
        printf("strncpy did not success,only copied %d character : \"%s\"\n", strlen(str3_dest), str3_dest);
    }

    if(strlen(str4_dest) == 1)
    {
        printf("strncpy copied 5 character to destion");
    }
    else
    {
        printf("strncpy did not success,only copied %d character : \"%s\"\n", strlen(str3_dest), str3_dest);
    }

    /* strcasecmp test case/

    
    /*******************************************************************************************/
    printf("Test 3: strcasecmp\n\n");
    

    char str_case1[] = "Hello World!";
    char str_case2[] = "hELLO wORLD!";
    char str_case3[] = "string";
    char str_case4[] = "STRING";
    char str_case5[] = "string";
    char str_case6[] = "STRING";

    if(strcasecmp(str_case1, str_case2) == 0)
    {
        printf("\"%s is equel to \"%s\"\n");
    }
    else
    {
        printf("\"%s is not equel to \"%s\"\n");
    }

    if(strcasecmp(str_case3, str_case4) == 0)
    {
        printf("\"%s is equel to \"%s\"\n");
    }
    else
    {
        printf("\"%s is not equel to \"%s\"\n");
    }

    if(strcasecmp(str_case5, str_case6) == 0)
    {
        printf("\"%s is equel to \"%s\"\n");
    }
    else
    {
        printf("\"%s is not equel to \"%s\"\n");
    }

    /* ******************************************************* */
    
    //strchar rest case
    const char str1[] = "http://www.google.com";
    const char ch1 = 'g';
    char *ret1 = strchar(str1, ch1);

    const char str2[] = "Bob";
    const char ch2 = 'z';
    char *ret2 = strchar(str1, ch1);

    if(ret1 != NULL)
    {
        printf("%c first ouccorns in %s start in %s\n", ch1, str1, ret1);
    }
    else{
        printf("%c does not ouccor in %s s\n", str1);
    }

     if(ret2 != NULL)
    {
        printf("%c first ouccorns in %s start in %s\n", ch2, str2, ret2);
    }
    else{
        printf("%c  does not ouccorns in %s\n", str2);
    }


     /* ******************************************************* */
     /*strdup test case */

     char* str1_dup = "Hi guys!";
     char* str2_dup = strdup(str1_dup);

     if(strcmp(str1_dup, str2_dup) == 0)
     {
        printf("\"%s\" is idintical string to \"%s\"\n", str1_dup, str2_dup);
     }






    

    return (0);
}