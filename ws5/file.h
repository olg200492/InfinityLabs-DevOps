#ifndef __FILE_H__
#define __FILE_H__
#include <stdio.h>
//print int varible of struct print_me
void Print(int);



//takes a file name and flags, adds user input to file from end/biginning. Can also remove file / count words / exit itself
int Logger();

void CheckFileFuncValue(int status);

//typedef enum op_t {remove, count, exit, append_beiginning, write} op_t;
typedef enum status_t { passed, failed} status_t;

typedef status_t (*Operation)(char file_name[], char buffer[]);

typedef struct chain{

    char *str;
    int (*Comperision)(char *str1, char *str2);
    Operation opt;
    

}chain;



int Comperision(char string1[], char string2[]);

status_t OperationRemove(char file_name[], char buffer[]);

status_t OperationCount(char file_name[], char buffer[]);

status_t OperationExit(char file_name[], char buffer[]);

status_t OperationAppend(char file_name[], char buffer[]);

status_t OperationWrite(char file_name[], char buffer[]);

#endif
