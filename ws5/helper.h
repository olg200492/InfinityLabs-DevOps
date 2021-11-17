#ifndef __HELPER_H__
#define __HELPER_H__
#include <stdio.h>



typedef enum  exitstatus_t { SUCCESS , FAILURE} exitstatus_t;

typedef exitstatus_t (*Operation)(char file_name[], char buffer[]);

typedef struct chain_t{

    char *str;
    int (*Comperision)(char *str1, char *str2);
    Operation opt;
    

}chain_t;


//compares string of struct to buffer if true the return 0 else return 1
int Comperision(char string1[], char string2[]);
//Deletes file from file system
exitstatus_t OperationRemove(char file_name[], char buffer[]);
//counts numbers of lines in file txt and prints
exitstatus_t OperationCount(char file_name[], char buffer[]);
//exit from progrem
exitstatus_t OperationExit(char file_name[], char buffer[]);
//appends buffer to the beggining of the file
exitstatus_t OperationAppend(char file_name[], char buffer[]);
//writes buffer to file
exitstatus_t OperationWrite(char file_name[], char buffer[]);

#endif
