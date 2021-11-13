#include <stdio.h>
#include <stdlib.h>
#include "./string.h"
void TestStrcpy()
{	
	
    const char str1[] = "hello word";
    char str2[] = "  well done";
    char str3[20];

    


    strcpy(str3,str1);
    printf("string surce -hello word- string 3 %s\n",str3);   
    
    strcpy(str3,str2);
    printf("string surce -  well done- string 3 %s\n",str3);   

}

void Testncopy()
{	
const char str1[] = "hello word im devops ingenir";
    
    char str3[6];
    char str4[2];
    char str5[12];


    
printf("string surce is %s\n", str1);

    strncpy(str3,str1,6);
    printf(" wew string With 6 letters  \"%s\"\n",str3);   
    
    strncpy(str4,str1,2);
    printf(" wew string With 2 letters  str4 = \"%s\" size = %lu\n",str4, strlen(str4));   

    strncpy(str5,str1,12);
    printf("wew string With 12 letters  \"%s\"\n",str5);   
}




void TestStrchr ()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'p';
   char *ret;


   char ch2 = 't';
   char ch3 = 'h';
   char ch4 = 'm';
   
   ret = strchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   
   ret = strchr(str, ch2);
   printf("String after |%c| is - |%s|\n", ch2, ret);
   ret = strchr(str, ch3);
   printf("String after |%c| is - |%s|\n", ch3, ret);
   
   ret = strchr(str, ch4);
   printf("String after |%c| is - |%s|\n", ch4, ret);
   
}


void Teststrdup()
{	
	char st1[] = "hello";
    char st3[] = "  world";
    
    
    char st4[] = "  !yay!  ";
    char *st2;
    char *st5;
    char *st6;

     st2 = strdup(st1);
     st5 = strdup(st3);
     st6 = strdup(st4);
    
    printf ("the surce string is %s ater %s\n", st1, st2);
    printf ("the surce string is %s ater %s\n", st3, st5);
    printf ("the surce string is %s ater %s\n", st4, st6);

    free(st2);
    free(st5);
    free(st6);


   
}

void Testcat()
{
	char st1[30] = "helo";
    char st2[] = "  word";
    char st3[] = "  gogel  ";
    
    printf ("s1 is-%s s2 is-%s  s3 is-%s \n\n", st1, st2, st3);
    printf ("s1 and s1 is-%s \n ",strcat(st1,st1));
    printf ("s1 and s3 is-%s\n",strcat(st1,st2));
    printf ("s1 and s4 is-%s\n",strcat(st1,st3));
   
}   

void Testncat()
{
    char st1[] = "helo ";
    char st2[] = "word im from tel aviv";
    
    printf("the s1 is \"%s\" \ns2 is \"%s\"\n", st1, st2);
    
    
    
    printf ("s1 + 4 Letters from s1 %s\n",strncat(st1,st2,4));
  
    char st3[] = "helo ";
    printf ("s1 + 7 Letters from s1 %s\n",strncat(st3,st2,7));
    
}   

void Teststrstr()
{
		 const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;
   const char needle2[10] = "ls";
   const char needle3[10] = "xz";
   const char needle4[10] = "T";
   
   
  printf("The main string is: %s\n\n", haystack);

   
   ret = strstr(haystack, needle);

   printf("The substring from %s is: %s\n",needle, ret);
   
   ret = strstr(haystack, needle2);

   printf("The substring from %s is: %s\n",needle2, ret);
   
   ret = strstr(haystack, needle3);

   printf("The substring from %s is: %s\n",needle3, ret);
 
   ret = strstr(haystack, needle4);

   printf("The substring from %s is: %s\n",needle4, ret);
   
}	
	
	
void testrspn()
{
	 int len;
   const char str1[] = "helo im from yafo 128 dira 20 mikod 982321";
   const char str2[] = "he";
   const char str3[] = "o";
   const char str4[] = "2";
   const char str5[] = "0123456789";
   
   printf("the main str is \"%s\"\n", str1);
  
   len = strspn(str1, str2);

   printf("the num of char --%s--  is %d\n", str2 ,len );
   
   len = strspn(str1, str3);

   printf("the num of char --%s--  is %d\n", str3 ,len );
   
   len = strspn(str1, str4);

   printf("the num of char --%s--  is %d\n", str4 ,len );
   
   len = strspn(str1, str5);

   printf("the num of char --%s--  is %d\n", str5 ,len );
   

}	

void Testcomper()
{	
	
  char *str1 = "hello";
  char *str2 = "hello";
  char *str3 = "hEllo";
  char *str4 = "XhEllo";


  
   printf("s1: %s minus: %s eqwal %d\n", str1, str2, strcasecmp(str1, str2));
   printf("s1: %s minus: %s eqwal %d\n", str1, str3, strcasecmp(str1, str3));
   printf("s1: %s minus: %s eqwal %d\n", str1, str4, strcasecmp(str1, str4));
   printf("s1: %s minus: %s eqwal %d\n", str3, str4, strcasecmp(str3, str4));
   	
}	
int main()
{
   //TestStrcpy();
   //TestStrchr();
   //Teststrdup();
   //Testcat();
   //Testncat();
   //Teststrstr();
   //testrspn();
    //Testncopy();
  Testcomper();
  
   
   
    
    return 0;
}

