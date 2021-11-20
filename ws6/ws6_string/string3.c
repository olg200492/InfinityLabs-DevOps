#include <stdlib.h> // malloc
#include "./string.h"


/*
    Returns a pointer to a null-terminated byte string, which is a duplicate of the string pointed to by str1. The returned pointer must be passed to free to avoid a memory leak. 
    1. set char * str = NULL
    2. allocate memory for str with malloc, size = strlen(str1)+1
    3. if str == null
        3.1. retun NULL
    4. char *temp = str;
    5. while *str1 != NULL
        5.1. *str = *str1
        5.2 str++ , str1++
    6. *str = '\0'
    7. return temp
*/
char * strdup( const char *str1 )
{
    char *str = (char*)malloc(strlen(str1)+1);
    if (str == NULL)
    {
       return (NULL);
    }
    
    char *temp = str;
    while (*str1 != '\0')
        {
            *str = *str1;
            str++;
            str1++;
        }
    *str = '\0';
    return (temp);       
    
}

//Function computes the length of the string str up to, but not including the terminating null character.

size_t strlen(const char *s)
{
    int size = 0;
    int i = 0;

    while(s[i])
    {
        i++;
        size++;
    }

    return (size);
}