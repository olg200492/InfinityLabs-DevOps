#include <stdio.h>
#include <string.h> //strlen fun
#include <assert.h> //asser func
#include "ex5.h"	

int main()
{
    char str[]= "geeks";
    char str2[]= "";

    char *str1 = "how long is this?";
	size_t this_long;
  
    printf("Olga Lapovsky test case:\n\n");
    if(strlen(str) == 5)
    {
        printf("Test case 1 for StrLen PASSED: \"%s\" string length is 5.\n", str);
    }
    else
    {
        printf("Test case 1 for StrLen FAILED!!! \n"); 
    }

    if(strlen(str2) == 0)
    {
        printf("Test case 2 for StrLen PASSED: \"%s\" string length is 0.\n", str2);
    }
    else
    {
        printf("Test case 2 for StrLen FAILED!!! \n"); 
    }

    assert(StrLen(str) == 5);

    printf("/******************************************/\n");
    printf("Arye Lev Zelkind test case:\n\n\n");

    printf("This is a test for StrLen function on the string:\n\t\t%s\n\n",str1);
	
	this_long = StrLen(str1);
	
	printf("After using the StrLen function on:\n\t\t%s \nThe calculated value is: %lu\n", str1, this_long );
	assert(this_long == 17);//aports program if test failed
	
	printf("StrLen test successfull!\n");

    return (0);
}