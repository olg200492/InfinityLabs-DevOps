#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strtok
#include <stdarg.h> // va_list
#include "./phase_tow.h"


/*
INPUT int item
    PRINT item
*/
void Print(int item)
{
    printf("'%d'\n", item);
}

/*INPUT char *filename
    SET chain_t arr[5]
    SET char buffer[51]
    SET int flag = 0
    SET char file_name[21]
    SET exitstatus_t status
    SET FILE *fp    
    SET int i = 0
    INIT arr with 5 objects
    CALL strcpy WITH (file_name, filename)
    CALL fopen(file_name, "w") RETURN VALUE set in fp
    IF fp equel to NULL
        PRINT error msg
        RETURN  FAILURE
    WHILE g_flag EQUEL to 0
        PRINT msg enter string
        CALL scanf SET in buffer
    FOR i = 0;i < 5; i++
        IF arr[i].Comperision(arr[i].str, buffer EQUEL TO 0
                SET status = arr[i].opt(file_name,buffer)               
                IF status EQUEL TO FAILURE
                    PRINT error msg
                    SET g_flag = 1
                CALL break
*/
int g_flag = 0;
int Logger(char *filename)
{
    STF arr[5];
    char buffer[51];
    int flag = 0;
    char file_name[21];
    exitstatus_t status;
    FILE *fp;
    
    int i = 0;
    
    arr[0].string = "-remove";
    arr[0].cmp = Comparison1;
    arr[0].opt = OperationFuncRemove;

    arr[1].string = "-count";
    arr[1].cmp = Comparison1;
    arr[1].opt = OperationFuncCountLine;

    arr[2].string = "-exit";
    arr[2].cmp = Comparison1;
    arr[2].opt = OperationFuncExit;    

    arr[3].string = "<";
    arr[3].cmp = Comparison1;
    arr[3].opt = OperationFuncPrintTop;    


    arr[4].string = "";
    arr[4].cmp = Comparison1;
    arr[4].opt = OperationFuncPrintToFile;

    strcpy(file_name, filename);

    fp = fopen(file_name, "a");

    if (NULL == fp)
    {
        printf("Error in opening file %s\n", file_name);
        exit(0);
    }

    while (0 == g_flag)
    {
        printf("Enter input:(50 charcter limit)\n");
        scanf(" %[^\n]", buffer);
       
        for(i = 0;i < 5; i++)
        {
            
            if (arr[i].cmp(arr[i].string, buffer) == 0)
            {
                status = arr[i].opt(fp,file_name,buffer);
               
                if(status == EXIT)
                {
                    g_flag = 1;
                }
                break;
            }
        }
    }   
 

}
/* 
    INPUT char string1[], char string2[]
        IF string1 equel to string2 OR string1 equel to "" OR ( string1 equel to "<" AND string2[0] equel '<')
            RETURN 0
        RETURN 1
*/
int Comparison1(char* string, char* string2)
{
    if(strcmp(string, string2) == 0 || strcmp(string, "") == 0 ||  (strcmp(string, "<") == 0) && string2[0] == '<')
    {
        return (0);
    }
    return (1);
}

/*
    INPUT char file_name[], char buffer[]
        CALL remove function with file_name
        OUTPUT from remove function 
            IF NOT 0
                PRINT error msg
                exit(0)
        PRINT msg ask to enter new file name or enter '-exit' to stop progrem
            IF file_name EQUEL to '-exit'
                SET g_flag TO 1
*/
exitstatus_t OperationFuncRemove(FILE *fp, char* FileNeme, char* string)
{
    int status1 = remove(FileNeme);
    
    if(status1 != 0)
    {        
        printf("Error in removing file %s\n", FileNeme);
        exit(0);
    }
    printf("File %s removed succesfully,enter new file name(20 chracters max) or '-exit' for ending the progrem.\n", FileNeme);
    scanf("%s", FileNeme);
    if(strcmp(FileNeme, "-exit") == 0)
    {
        g_flag = 1;
    }

    return (REMOVE);
}

/*
    SET char c;
    SET int count = 0
    SET int status1
    OPEN file file_name to "w" mode
    IF fp == NULL
        PRINT error msg
        RETURN FAILURE
    ITIRATE on file c = getc(fp); c != EOF;
        IF c == '\n
            ADD 1 to count
    PRINT count to terminal
    CALL fclose on FILE* fp
    IF returned EOF
        PRINT error msg
        RETURN FAILURE
    RETURN SUCCESS
*/
exitstatus_t OperationFuncCountLine(FILE *fp, char* FileNeme, char* string)
{
   char c;
   int count = 0;
   int status1;

   fp = fopen(FileNeme, "r");   
   if (NULL == fp)
    {
        printf("Error in opening file %s in OperationCount line 148\n", FileNeme);
        return (EXIT);
    }

    for (c = getc(fp); c != EOF; c = getc(fp))
    {
        if (c == '\n')
        {
            count = count + 1;
        } 
    }        
    printf("Number of lines in file '%s' is:%d\n", FileNeme, count);
   
    status1 = fclose(fp);
    if( EOF == status1)
    {
        printf("Error in closing file %s\n", FileNeme);
        return (EXIT);
    }
    return (COUNTLINE);
}
/*
SET g_flag =to 1
*/
exitstatus_t OperationFuncExit(FILE *fp, char* FileNeme, char* string)
{
    g_flag = 1;
    return (EXIT);
}


/*INPUT char file_name[], char buffer[]
    SET status1, i to 0
    CALL fopen on file_name mode "a"
    IF fp EQUEL to NULL
        PRINT err msg
        RETURN FAILURE
    CALL fwrite WITH buffer, sizeof(char), strlen(buffer), fp
    CALL fwrite WITH "\n", sizeof(char), 1, fp
    CALL fclose on fp RETURN VALUE set in status1 varible
    IF status1 EQUEL to EOP
        PRINT error msg
        RETURN FAILURE
    RETURN SUCCESS
*/
exitstatus_t OperationFuncPrintToFile( FILE *fp, char* FileNeme ,char *string)
{   
    int status1;
    int i = 0;
    fp = fopen(FileNeme, "a");
    if (NULL == fp)
    {
        printf("Error in opening file %s\n", FileNeme);
        return (EXIT);
    }
    fwrite(string, sizeof(char), strlen(string), fp);
    fwrite("\n", sizeof(char), 1, fp);
    status1 = fclose(fp);
    if( EOF == status1)
    {
        printf("Error in closing file %s\n", FileNeme);
        return (EXIT);
    }
    return (WRITE);     
}
/*INPUT char file_name[], char buffer[]:
    SET char temp[1000]
    SET char c
    SET int i = 0
    SET int status
    CALL fopen on file_name with mode "r" RETURN VALUE set in fp 
    IF fp EQUEL to NULL
        PRINT error msg
        RETURN FAILURE
    FOR c =  fgetc(fp); c != EOF; c = fgetc(fp),i++
        SET temp[i] TO c
    SET temp[i] TO '\0'
    CALL fclose on fp RETURN VALUE set in status
    IF status equel to EOP
        PRINT error msg
        RETURN  FAILURE
    CALL fopen with file_name ,"w" mode RETURN VALUE set in fp
    IF fp equel to NULL
        PRINT error msg
        RETURN  FAILURE
    FOR i = 1 ; i < strlen(buffer); i++
        SET c equel to buffer[i]
        CALL fputc with (c, fp)
    CALL fputs with("\n",fp);
    CALL fputs with (temp,fp);
    CALL fclose on fp RETURN VALUE set in status
    IF status equel to EOP
        PRINT error msg
        RETURN  FAILURE
    RETURN SUCCESS
*/
exitstatus_t OperationFuncPrintTop(FILE *fp,char* FileNeme, char* string)
{
    char temp[1000];
    char c;
    int i = 0;
    int status;
   
    fp = fopen(FileNeme, "r");
    if (NULL == fp)
    {
        printf("Error in opening file %s\n in OperationAppend line 210", FileNeme);
        return (WRITE);
    }
    for(c =  fgetc(fp); c != EOF; c = fgetc(fp),i++)
    {
        temp[i] = c;
    }

    temp[i] = '\0';
    
    status = fclose(fp);
    if( EOF == status)
    {
        printf("Error in closing file %s OperationAppend in line 223\n", FileNeme);
        return (WRITE);
    }
    fp = fopen(FileNeme, "w");
    if (fp == NULL)
    {
        printf("Error in opening file %s OperationAppend in line 228\n", FileNeme);
        return (WRITE);
    }
    for(i = 1 ; i < strlen(string); i++ ) 
    {
        c = string[i];
        fputc(c, fp);     
    }
    fputs("\n",fp);
    fputs(temp,fp);
   
    status = fclose(fp);
    if( EOF == status)
    {
        printf("Error in closing file %s OperationAppend in line 242\n", FileNeme);
        return (WRITE);
    }

    return (APPEND);
}
