#include "string.h"

char *strcpy(char *dest, const char *src)
{

}

//Copies up to n characters from the string pointed to, by src to dest.
char *strncpy(char *dest, const char *src, size_t n)
{
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    for ( ; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;

}

//Appends the string pointed to, by src to the end of the string pointed to by dest.
char *strcat(char *dest, const char *src)
{

}

//Appends the string pointed to, by src to the end of the string pointed to, by dest up to n characters long.
char *strncat(char *dest, const char *src, size_t n)
{

}

//Searches for the first occurrence of the character c (an unsigned char) in the string pointed to, by the argument str.
char *strchr(const char *str, int c)
{

}

//Calculates the length of the initial segment of str1 which consists entirely of characters in str2.
size_t strspn(const char *str1, const char *str2)
{

}

//Finds the first occurrence of the entire string needle (not including the terminating null character) which appears in the string haystack.
char *strstr(const char *haystack, const char *needle)
{

}

//Breaks string str into a series of tokens separated by delim.
char *strtok(char *str, const char *delim)
{

}

//compares string1 and string2 without sensitivity to case. All alphabetic characters in string1 and string2 are converted to lowercase before comparison.
int strcasecmp(const char *string1, const char *string2)
{

}

//Returns a pointer to a null-terminated byte string, which is a duplicate of the string pointed to by str1. The returned pointer must be passed to free to avoid a memory leak. 
char * strdup( const char *str1 )
{

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


//Function compares the string pointed to by str1 to the string pointed to by str2
int StrCmp(const char *str1, const char *str2)
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


