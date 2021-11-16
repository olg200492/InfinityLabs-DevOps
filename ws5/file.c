#include <stdio.h>
#include <string.h> //strtok
#include <stdarg.h> // va_list
#include "file.h"


typedef enum op {remove, count, exit, append_beiginning, write} op;

typedef struct chain{

    char *str;
    void (*Comperision)(char *str1, char *str2);
    void (*Operation)(int op);
    

}chain;

/*
INPUT int item
    PRINT item
*/
void Print(int item)
{
    printf("'%d'\n", item);
}

/*INPUT file name as f
    SET FILE* fp
    SET char arr[100]
    SET status
    SET flag = 0
    WHILE flag == 0
        PRINT Enter an input (max char is 100)
        OBTAIN input from scanf SET in arr varibale
        PASS arr TO FindAction function
        GET output from  FindAction function SET as status
        CASE status OF
        CONDITION 1:



    CALL fopen with f mode w RETURNING FILE* SET fp
    IF fp == NULL THEN
        PRINT error
        EXIT
    ELSE



*/
int Logger(FILE *f, ...)
{
    chain arr[4];
    char file_name[21];
    char buffer[51];
    int flag = 0;

    arr[0].str = "-remove";
    arr[0].Comperision = Comperision;
    arr[0].Operation = Operation;

    arr[1].str = "-count";
    arr[1].Comperision = Comperision;
    arr[1].Operation = Operation;

    arr[2].str = "-exit";
    arr[2].Comperision = Comperision;
    arr[2].Operation = Operation;

    arr[3].str = "-exit";
    arr[3].Comperision = Comperision;
    arr[3].Operation = Operation;

    printf("Enter name of file:(20 charcter limit\n");
    scanf("%20s", file_name);

    while (0 == flag)
    {
        printf("Enter input:(50 charcter limit\n");
        scanf("%50s", buffer);
    }
    f = fopen()
 

}

int Comperision(char string1[], char string2)
{
    if(strcmp(string1, string2) == 0)
    {
        return (0);
    }
    return (1);
}

op Operation(int op)
{

    
}

int CheckBuffer(char buffer[], const chain arr[])
{
    int i = 0;
    int status;
    for (i = 0; i < 4; i++)
    {
        if(arr[i].Comperision(buffer, arr[i].str) == 0)
        {
            arr[i].Operation((arr[i].Comperision(buffer, arr[i].str))
        }
        
    }
}