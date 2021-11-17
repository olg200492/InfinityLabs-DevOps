#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strtok
#include <stdarg.h> // va_list
#include <errno.h> //errno
#include "helper.h"
#include "file.h"

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
  



*/

int g_flag = 0;
extern int errno ;
int Logger(char *filename)
{
    chain_t arr[5];
    char buffer[51];
    int flag = 0;
    char file_name[21];
    exitstatus_t status;
    FILE *fp;
    
    int i = 0;
    
    arr[0].str = "-remove";
    arr[0].Comperision = Comperision;
    arr[0].opt = OperationRemove;

    arr[1].str = "-count";
    arr[1].Comperision = Comperision;
    arr[1].opt = OperationCount;

    arr[2].str = "-exit";
    arr[2].Comperision = Comperision;
    arr[2].opt = OperationExit;    

    arr[3].str = "<";
    arr[3].Comperision = Comperision;
    arr[3].opt = OperationAppend;    


    arr[4].str = "";
    arr[4].Comperision = Comperision;
    arr[4].opt = OperationWrite;

    //printf("Enter name of file:(20 charcter limit\n");
    //scanf("%s", file_name);
    strcpy(file_name, filename);
    
    fp = fopen(file_name, "w");

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
            
            if (arr[i].Comperision(arr[i].str, buffer) == 0)
            {
                status = arr[i].opt(file_name,buffer);
               
                if(status == FAILURE)
                {
                    printf("Error in operatin function\n");
                    g_flag = 1;
                }
                break;
            }
        }
    }   
 

}

int Comperision(char string1[], char string2[])
{
    if(strcmp(string1, string2) == 0 || strcmp(string1, "") == 0 ||  (strcmp(string1, "<") == 0) && string2[0] == '<')
    {
        return (0);
    }
    return (1);
}

exitstatus_t OperationRemove(char file_name[], char buffer[])
{
    int status1 = remove(file_name);
    
    if(status1 != 0)
    {        
        printf("Error in removing file %s,value of errno: %d\n", file_name, errno);
        exit(0);
    }
    printf("File %s removed succesfully,enter new file name(20 chracters max) or '-exit' for ending the progrem.\n", file_name);
    scanf("%s", file_name);
    if(strcmp(file_name, "-exit") == 0)
    {
        g_flag = 1;
    }

    
}

exitstatus_t OperationCount(char file_name[], char buffer[])
{
   char c;
   int count = 0;
   int status1;

   FILE* fp = fopen(file_name, "r");   
   if (NULL == fp)
    {
        printf("Error in opening file %s in OperationCount line 148\n", file_name);
        return (FAILURE);
    }

    for (c = getc(fp); c != EOF; c = getc(fp))
    {
        if (c == '\n')
        {
            count = count + 1;
        } 
    }        
    printf("Number of lines in file '%s' is:%d\n", file_name, count);
   
    status1 = fclose(fp);
    if( EOF == status1)
    {
        printf("Error in closing file %s\n", file_name);
        return (FAILURE);
    }
    return (SUCCESS);
}

exitstatus_t OperationExit(char file_name[], char buffer[])
{
    
   g_flag = 1;
}



exitstatus_t OperationWrite(char file_name[], char buffer[])
{   
    int status1;
    int i = 0;
    FILE *fp = fopen(file_name, "a");
    if (NULL == fp)
    {
        printf("Error in opening file %s\n", file_name);
        return (FAILURE);
    }
    fwrite(buffer, sizeof(char), strlen(buffer), fp);
    fwrite("\n", sizeof(char), 1, fp);
    status1 = fclose(fp);
    if( EOF == status1)
    {
        printf("Error in closing file %s\n", file_name);
        return (FAILURE);
    }
        return (SUCCESS); 
    
}

exitstatus_t OperationAppend(char file_name[], char buffer[])
{
    char temp[1000];
    char c;
    int i = 0;
    int status;
   
    FILE* fp = fopen(file_name, "r");
    if (NULL == fp)
    {
        printf("Error in opening file %s\n in OperationAppend line 210", file_name);
        return (FAILURE);
    }
    for(c =  fgetc(fp); c != EOF; c = fgetc(fp),i++)
    {
        temp[i] = c;
    }

    temp[i] = '\0';
    
    status = fclose(fp);
    if( EOF == status)
    {
        printf("Error in closing file %s OperationAppend in line 223\n", file_name);
        return (FAILURE);
    }
    fp = fopen(file_name, "w");
    if (fp == NULL)
    {
        printf("Error in opening file %s OperationAppend in line 228\n", file_name);
        return (FAILURE);
    }
    for(i = 1 ; i < strlen(buffer); i++ ) 
    {
        c = buffer[i];
        fputc(c, fp);     
    }
    fputs("\n",fp);
    fputs(temp,fp);
   
    status = fclose(fp);
    if( EOF == status)
    {
        printf("Error in closing file %s OperationAppend in line 242\n", file_name);
        return (FAILURE);
    }

    return (SUCCESS);
}
