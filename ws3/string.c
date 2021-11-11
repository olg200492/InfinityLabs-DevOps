#include "string.h"

/*
    Pasudo Code strcpy:
    1. set i = 0, j = 0;
    2. while src[i] is not NULL will iterate
        2.1 dest[j] = src[i]
        2.2 i++
        2.3 j++
    3. set dest[j] = '\0'
    4. return dest
*/
char *strcpy(char *dest, const char *src)
{
    int i = 0, j = 0;
    while (src[i] != '\0')
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

/*
    Pasudo Code strncpy:
    1. set i = 0
    2. for i<n and src[i] != '\0'
        2.1 set dest[i] = src[i]
    3. while i <n
        3.1 dest[i] = '\0'
        3.2 i++
    4. return dest
*/
char *strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
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


