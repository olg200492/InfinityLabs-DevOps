/*****************************************************
 * QUIZ12.C                                           *
 * 
 * Write a function that recives a char.the function
 * can be called millions of times.and when the value 
 * is 0 it prints to scree the maximum number of 
 * occurrences of the same character in all previous
 * calls(from the beggining or from the last time
 * 0 was pressed)
 *                                                   *

 *****************************************************/ 
#include <stdio.h>

void MillionChars(char ch);
void SetArrayToZero(int *arr);
int main()
{
    MillionChars('a');
    MillionChars('a');
    MillionChars('\0');
    MillionChars('b');
    MillionChars('b');
    MillionChars('b');
    MillionChars('\0');
    MillionChars('d');
    MillionChars('d');
    MillionChars('d');
    MillionChars('d');
    MillionChars('d');
    return (0);
}

void MillionChars(char ch)
{
    static int number_of_calls;
    static int array_chars[127];
    static int max_occurence;
    static char max_char;
    if( number_of_calls >= 10)
    {
        printf("You reached 10 calls of function");
        printf("Max ouccurunces of char '%c' is:%d\n", max_char, max_occurence);
    }
    else
    {
        if (ch == '\0')
        {
            printf("Max ouccurunces of char '%c' is:%d\n", max_char, max_occurence);
            number_of_calls++;
            SetArrayToZero(array_chars);

        }
        else
        {
            array_chars[(int)ch]++;
            if (array_chars[(int)ch] > max_occurence)
            {
                max_occurence = array_chars[(int)ch];
                max_char = ch;
            }
            number_of_calls++;
        }
    }

    
    
}

void SetArrayToZero(int *arr)
{
    int i = 0;
    int size = sizeof(arr) / sizeof(int);

    for (i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}