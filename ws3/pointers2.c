#include <stdio.h>
#include <ctype.h> // isalpha
#include <assert.h> //assert
#include <string.h> //strlen
#include <stdlib.h> //malloc
#include "pointers2.h"

//return 1 for palindrome - 0 if not, for given string. palindrom is a non white space string which reads the same backward as forward
/*
1. check if str is array of char 
2. Initilize index i = 0
3. Itirate i to strlen(str)\2
    3.1 Compare str[i] equal str[i-1]
        if not return 0
    3.2 Advance i in 1
4. return 1
*/
int IsPali(char* str)
{
    int i = 0;
    int StrLen = strlen(str);

    for( i = 0; i < StrLen / 2; i++)
    {
        if(str[i] != str[StrLen-i-1])
        {
            return (0);
        }
    }
    return (1);
}
//print all numbers in the range "start" - "end". print "BOOM" instead of numbers that devine by 7 with no reminder.
/*
1.Check if start <= end
2.Itirate from start to end 
    set flag to false
    2.1 check if number contains 7 if True prints 'BOOM' and breaks
    2.2 check if number modulo 7 equal 0 if true prints 'BOOM' and breaks
    2.3 prints number
*/
void Boom7(int start, int end)
{   
    
    assert(start <= end);
    int flag = 0;
    int TempNumber = 0;
    
    int digit_number = 0;
    for( ; start <= end; start++)
    {
        flag = 0;
        TempNumber = 0;

        if(start % 7 == 0 && start != 0)
        {
            flag = 1;
            
        }
        else
        {
            TempNumber = start;
            while(TempNumber > 0 && flag == 0)
            {
                digit_number = TempNumber % 10;
                TempNumber = TempNumber / 10;
                if(digit_number == 7)
                {
                    flag = 1;
                }
            }
        }   

        if( flag == 0)
        {
            printf("%d\n", start);
        }
        else
        {
            printf("BOOM\n");
        }
    }

}
//delete all the duplicate space-chars of a given string. Delete space-cahrs in the end/begginning of the strings if exists.
void DelSpace(char* str)
{
    int i = 0, j = 0;
    int StrLen = strlen(str);

    for(i = 0; i < StrLen; i++)
    {
        if(str[i] == 10 || str[i] == 11)
        {
            str[j] = ' ';
            j++;
            while( str[i] == 10 || str[i] == 11)
            {
                i++;
            }
        }
        else
        {
            str[j] = str[i];
            j++;
        }
    }

}

