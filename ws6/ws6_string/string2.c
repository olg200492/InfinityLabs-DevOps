#include <stdlib.h> // malloc
#include "./string.h"

//Function compares the string pointed to by str1 to the string pointed to by str2
int strcmp(const char *str1, const char *str2)
{
    while( *str1 && *str2 )
    {
        if(*str1 > *str2)
        {
            return (*str1 - *str2);
        }
        if(*str1 < *str2)
        {
            return (*str1 - *str2);
        }

        str1++;
        str2++;
    }

    if( *str1 =='\0' && *str2 == '\0' )
    {
        return (0);
    }
    else if(*str1)
    {
        return (*str1);
    }

    return (*str1 - *str2);    
}

int ToLower(char a)
{
    if (a >= 'A' && a <= 'Z')
    {
        return (a + 32);
    }
    
    return (a);
}
