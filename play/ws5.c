#include <stdio.h>	/* printf */
#include <stdlib.h>



int main() {
  

  char str1[20];
  char *str2 = malloc(sizeof(*str2) * 20);
  char *str3 = "Whatever";
  char str4[] = "whatever";
  str3[1];

  printf("str1 size is =:%lu %s\n", sizeof(str1));
  printf("str2 size is =:%lu\n", sizeof(str2));
  printf("str3 size is =:%lu string is:%s\n", sizeof(str3), str3);
  printf("str4 size is =:%lu string is:%s\n", sizeof(str4), str4);
  free(str2);
  str2 = NULL;
  return (0);
}

