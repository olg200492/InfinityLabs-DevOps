#include <stdlib.h> // malloc
#include "./string.h"


int ToLower(char a);
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
    2. for i < n and src[i] != '\0'
        2.1 set dest[i] = src[i]
    3. while i <n
        3.1 dest[i] = '\0'
        3.2 i++
    4. return dest
*/
char *strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;

    for (i = 0; i < n &&  src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    return (dest);

}

/*Appends the string pointed to, by src to the end of the string pointed to by dest.
    1. set char *temp = dest +str(dest)
    2. while *src != '\0
        2.1 *temp = *src
        2.2 temp++;
        2.3 src++;
    3. *temp = '\0'
    4. return dest
*/
char *strcat(char *dest, const char *src)
{
    char *temp = dest + (strlen(dest));
    int size = strlen(src);
    int i = 0;
    while (i < size)
    {
        *temp = *src;
        temp++;
        src++;
        i++;
    }
    *temp = '\0';
    return (dest);
}

/*Appends the string pointed to, by src to the end of the string pointed to, by dest up to n characters long.
    1. set char *temp = dest +strlen(dest)
    2. while *src != '\0' AND n > o
        2.1 *temp = *src
        2.2 temp++
        2.3 src++
        2.4 n--
    3. *temp = '\0'
    4. return dest
*/
char *strncat(char *dest, const char *src, size_t n)
{
    char *temp = dest + strlen(dest);
    while (*src != '\0' && n>0)
    {
        *temp = *src;
        temp++;
        src++;
        n--;
    }
    *temp = '\0';
    return (dest);

}

//Searches for the first occurrence of the character c (an unsigned char) in the string pointed to, by the argument str.
/*
    1. set char temp - src
    2. while *temp != NULL
        2.1 if temp == c
            2.1.1 return temp
        2.2 ++temp
    3. return NULL
*/
char *strchr(const char *str, int c)
{
    char *temp = (char *)str;
    while (*temp != '\0')
    {
        if (*temp == c)
        {
            return temp;
        }
        ++temp;
    }
    return (NULL);
}

/*Calculates the length of the initial segment of str1 which consists entirely of characters in str2.
    1. set size_t size = 0
    2. while *str1 != '\0'
        2.1 if strchr(str2, *str1)
            2.1.2 size++
        2.2 str1++
    3. retur size_t

*/
size_t strspn(const char *str1, const char *str2)
{   
    size_t size = 0;
    while (*str1 != '\0')
    {
        if (strchr(str2, *str1) != NULL)
        {
            size++;
        }
        str1++;
    }
    return (size);
}

/*Finds the first occurrence of the entire string needle (not including the terminating null character) which appears in the string haystack.
    1. set int i = 0, j = o ,TempIndex
    2. set const char * TempPointer = NULL

    3. for i < strlen(haystack)
        3.1 if haystack[i] == needle[j]
            3.1.1 TempPointer = &haystack[i]
            3.1.2 TempIndex = i
            3.1.3 while haystack[i] == needle[j]
                3.1.3.1 i++
                3.1.3.2 j++
            3.1.4 if j == strlen(neddle)
                3.1.4.1 return (TempPointer)
            3.1.4 i = TempIndex
            3.1.5 j = 0
    4. return (NULL)
*/
char *strstr(const char *haystack, const char *needle)
{
    int i = 0;
    int j = 0;
    int TempIndex = 0;
    char * TempPointer = NULL;


    for ( i = 0; i < strlen(haystack); i++)
    {
        if (haystack[i] == needle[j])
        {
            TempPointer = (char *)&haystack[i];
            TempIndex = i;
            while (haystack[i] == needle[j] && needle[j] != '\0')
            {
                i++;
                j++;
            }
            if (j == (strlen(needle)))
            {
                return (TempPointer);
            }
            i = TempIndex;
            j = 0;
        }
    }
    return (NULL);

}

/*Breaks string str into a series of tokens separated by delim.
    1. if str != null
        1.2 set static varibles:
            static char *string = str
            static int index = 0
            
    Itirate on delim[i]:
        if delim[i] in string

*/
char *strtok(char *str, const char *delim)
{
    
    static char *string;
    static int index;
    static int size;
    static char *EndString;
    int i = 0;
    char *PointerDelim = NULL;
    char *Token = NULL;
    char *TempToken = NULL;
    if(str != NULL)
    {
        string = str;
        index = 0;
        size = strlen(str);
        EndString = str + size;
    }
    if (string  == EndString)
    {
        return (NULL);
    }
    for ( i = 0; i < strlen(delim); i++)
    {
        PointerDelim = strchr(string, delim[i]);
        if (PointerDelim != NULL)
        {
            break;
        }
    }
    if(PointerDelim == NULL)
    {
        if(*string != '\0' && index != 0)
        {
            PointerDelim = string + (size - index);
        }
        else
        {
            return (NULL);
        }
        
    }
    Token = (char *)malloc(sizeof(char) * (PointerDelim - string + 1));
    if(Token == NULL)
    {
        printf("ERROR allocation memory in malloc.\n");
        exit(0);
    }
    else
    {
        TempToken = Token;
        while(string != PointerDelim)
        {
            *Token = *string;
            Token++;
            string++;
            index++;
        }
        if( string != EndString)
        {
            *string = '\0';
            string++;
            index++;
        }
        
        *Token = '\0';
        return (TempToken);
    }
    
    

}

/*compares string1 and string2 without sensitivity to case. All alphabetic characters in string1 and string2 are converted to lowercase before comparison.
    1. while *string != NULL AND (ToLower(*string1)- ToLower(*string2)) == 0 
        1.1 string1++;
        1.2 string2++;
    2. return (ToLower(*string1) - ToLower(*string2))
*/
int strcasecmp(const char *string1, const char *string2)
{
    while ((ToLower(*string1)- ToLower(*string2)) == 0 && *string1 != '\0')
    {   
        string1++;
        string2++;
    
    }
    
    return (ToLower(*string1) - ToLower(*string2)); 

}







