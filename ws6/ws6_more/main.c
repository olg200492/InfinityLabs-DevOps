#include <stdio.h> 
#include "g.h"


int g_s = 3;
int main()
{
    
    printf("g_s = %d\n",g_s);
    Foo();
    printf("g_s = %d\n",g_s);

    return (0);
}


