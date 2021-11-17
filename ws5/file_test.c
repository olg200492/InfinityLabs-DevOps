#include <stdio.h>	/* printf */
#include "helper.h"
#include "file.h"	




void TestStructPrintMe(void);
void TestPrint(void);
void TestLogger(void);

typedef struct print_me{
    int num;
    void (*Print)(int item);
} print_me;




int main()
{
    //TestStructPrintMe();
    exitstatus_t k;
    TestLogger();
    
    return (0);
}

/*
    SET array size 10 type print_me
    FOR i to 10
        SET arr[i].num TO i + 1 
        SET arr[i].print TO Print
    FOR i TO 10
        SHOW arr[i].Print(arr[i].num)
*/
void TestStructPrintMe(void)
{
    int i = 0;   
    print_me arr[10];

    for (i = 0;i < 10; i++)
    {
        arr[i].num = i + 1;
        arr[i].Print = Print;
    }

    for (i = 0; i < 10; i++)
    {
        arr[i].Print(arr[i].num);
    }
}

/*
    INIT num1 = 0, num2 = 5, num3 = 10
    PRINT comments to the terminal
    CALL Print whith num1
    CALL Print whith num2
    CALL Print whith num3
*/
void TestPrint(void)
{   int num1 = 0;
    int num2 = 5;
    int num3 = 10;

    printf("Test case 1 TestPrint:\n");
    printf("Print function should print:'%d'\n",num1);
    printf("Print function output is:\n");
    Print(num1);
    printf("\n");

    printf("Test case 2 TestPrint:\n");
    printf("Print function should print:'%d'\n",num2);
    printf("Print function output is:\n");
    Print(num2);
    printf("\n");


    printf("Test case 3 TestPrint:\n");
    printf("Print function should print:'%d'\n",num3);
    printf("Print function output is:\n");
    Print(num3);
    printf("\n");

}


void TestLogger(void)
{
    char file[21];
    printf("Enter file name:(20 character max\n");
    scanf("%s", file);
    Logger(file);
}
