#include <stdio.h>	/* Include printf function */
#include "ex4.h"	/* Include HelloWorld function declaration */

/*Prints "Hello World!" by using hex numbers array*/
void PrintHelloWorld()
{
    char hello_world[] = {0x22, 0x48, 0x65, 0x6C, 0x6C, 0x6F, 0x20, 0x57, 0x6F, 0x72, 0x6C, 0x64, 0x21, 0x22};
    printf("%s", hello_world);
    
}