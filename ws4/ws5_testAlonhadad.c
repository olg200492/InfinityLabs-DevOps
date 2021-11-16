#include <stdio.h>
#include "arraypointers.h"

void TestMtxSum();
void TestLucky();
void TestDTypeNames();
void TestPrintEnv(char **envp);

int main(int argc, char **argv, char **envp)
{
    //TestMtxSum();
    //TestLucky();
    //TestDTypeNames();
    TestPrintEnv(envp);
    
}
///// testing DTypeNames function
void TestDTypeNames()
{
    printf("--------------------Testring DTypeNames------------------------\n");
    printf("output sholud be: \n");
    printf("char: \n");
    printf("array: \n");
    printf("pointer: \n");
    printf("structure: \n");
    printf("union: \n");
    printf("enum: \n");
    printf("void: \n");
    printf("short int: \n");
    printf("unsigned short int: \n");
    printf("unsigned int: \n");
    printf("int: \n");
    printf("long int: \n");
    printf("unsigned long int: \n");
    printf("long long int: \n");
    printf("unsigned long long int: \n");
    printf("signed char: \n");
    printf("unsigned char: \n");
    printf("float: \n");
    printf("double: \n");
    printf("long double: \n\n\n");
    printf("your result:\n");
    DTypeNames();

}
////// testing lucky
void TestLucky()
{
    printf("--------------------Testring Lucky------------------------\n");
    int n = 3;
    int result = 0;
    result = Lucky(n);
    if (result == 3)
    {
        printf("Succes\n");
    }
    else
    {
        printf("%d",result);
        printf("oh no number %d survived \n",result);
    }

    n = 9;
    result = 0;
    result = Lucky(n);
    if (result == 3)
    {
        printf("Succes\n");
    }
    else
    {
        printf("%d",result);
        printf("oh no number %d survived \n",result);
    }
}
///// testing print env
void TestPrintEnv(char **envp)
{
    printf("--------------------Testring PrintEnv------------------------\n");
    printf("should be: \n");
    char **env = envp;
    for (env = envp; *env != 0; env++)
    {
        char *thisEnv = *env;
        printf("%s\n", thisEnv);    
    }
    printf("\n\n");
    printf("your result:\n\n");
    PrintEnv();
}

////// testing mtxsum
void TestMtxSum()
{
    printf("--------------------Testring MtxSum------------------------\n");
    int rows = 3, cols = 2;
    const int array[][2] = {{1,2},{4,6},{8,10}};
    int arr_result[3] = { 0 };
    int arr_temp[3] = {3,10,18};
    int i = 0;

    MtxSum(cols,rows,array,arr_result);

    for(i = 0; i < 3; i++)
    {
        if (arr_result[i] != arr_temp[i])
        {
            printf("arr_temp[%d]\n",arr_temp[i]);
            printf("Fail row %d\n",i);
        }
        else
        {
            printf("Succes\n");
        }
    }
    printf("case 2:\n");
    rows = 2, cols = 6;
    const int array2[][6] = {{8,10,4,2,-5,-79},{1,1,1,1,-4,9}};
    int arr_result2[2] = { 0 };
    int arr_temp2[2] = {-60, 9};

    MtxSum(cols,rows,array2,arr_result2);

    for(i=0; i < 2; i++)
    {
        if (arr_result2[i] != arr_temp2[i])
        {
            printf("Fail row %d\n",i);
        }
        else
        {
            printf("Succes\n");
        }
    }
}