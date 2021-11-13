#include <stdio.h>
#include <string.h>
#include "pointers2.h"

int main()
{


///////////////////////////////////////////////////////////////////////       IsPali

    char str1[] = "asddsa";
    char str2[] = "asddsa!";
    char str3[] = "asddsaWE";
    char str4[] = "!Asddsa!";
    char str5[] = "A3S44S3A";
    char str6[] = "asddsa!";
    char str7[] = "2343 2";
    char str8[] = "!Asd dsA!";

    printf("the ans for %s should be 1 but is %d\n", str1 ,IsPali(str1));
    printf("the ans for %s should be 0 but is %d\n", str2 ,IsPali(str2));
    printf("the ans for %s should be 0 but is %d\n", str3 ,IsPali(str3));
    printf("the ans for %s should be 1 but is %d\n", str4 ,IsPali(str4));
    printf("the ans for %s should be 1 but is %d\n", str5 ,IsPali(str5));
    printf("the ans for %s should be 0 but is %d\n", str6 ,IsPali(str6));
    printf("the ans for %s should be 0 but is %d\n", str7 ,IsPali(str7));
    printf("the ans for %s should be 1 but is %d\n", str8 ,IsPali(str8));
    
  ///////////////////////////////////////////////////////////////////      7 boom 
     
    //printf("from -5 to 57:\n");
    //Boom7(-5, 57);  
    //printf("from 52 to 20:\n");
    //Boom7(52, 20);  
    //printf("from -6 to -30:\n");   
    //Boom7(-6, -30);  
    //printf("from 50 to 300:\n");
    //Boom7(50, 300);
    //printf("from 10000 to 10200:\n");     
    //Boom7(10000, 10200);  

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    char st9[] = "helo  word    agen";
    char st10[] = "  spaea   first   and  ";
    char st11[] = "!  also be  skwize   #";
    
    char st9b[] = "helo word agen";
    char st10b[] = "spaea first and";
    char st11b[] = "! also be skwize #";
    
    DelSpace (st9);
    DelSpace (st10);
    DelSpace (st11);


    
    printf("Comparison of the string before the function and after giving %d\n", strcmp(st9, st9b));
    printf("Comparison of the string before the function and after giving %d\n", strcmp(st10, st10b));
    printf("Comparison of the string before the function and after giving %d\n", strcmp(st11, st11b));

    
    return 0;
}

