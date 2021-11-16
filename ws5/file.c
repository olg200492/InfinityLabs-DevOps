#include <stdio.h>
#include <string.h> //strtok
#include "file.h"


typedef enum op {remove, count, exit, append_beiginning, write} op;

typedef struct chain{

    char *str;
    void (*Comperision)(char *str);
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
    arr[0].str = "-remove";
    arr[0].Comperision = Comperision;
    arr[0].Operation = Operation;

}

int Comperision(char string[])
{
    

    if(strcmp(string,"-remove") == 0)
    {
        return (0);
    }

    if(strcmp(string,"-count") == 0)
    {
        return (1);        
    }

    if(strcmp(string,"-exit") == 0)
    {
        return (2);        
    }

    if(strcmp(string[0],"<") == 0)
    {
        return (3);        
    }

    return (-1);

}

op Operation(int op)
{
    
}