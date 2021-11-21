#include <stdio.h>	/* Include printf function */
#include <stdlib.h>

int main()
{   
   char str1[20];
   char *str2 = malloc(sizeof(*str2) * 20);
   char *str3 = "whatever";
   char str4[] = "whatever";

   printf("str1 = %s ,sizeof = %lu\n", str1, sizeof(str1));
   printf("str2 = %s ,sizeof = %lu\n", str2, sizeof(str2));
   printf("str3 = %s ,sizeof = %lu\n", str3, sizeof(str3));
   printf("str4 = %s ,sizeof = %lu\n", str4, sizeof(str4));
   
   return(0);
}