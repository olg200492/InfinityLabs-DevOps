#include <stdio.h>	/* printf */
#include "file.h"	




void TestStructPrintMe(void);
void TestPrint(void);

typedef struct print_me{
    int num;
    void (* Print)(int);
} print_me;

int main()
{
     
   //TestPrint();
   print_me pm = {3};
   pm->Print(pm.num);
    return (0);
}


void TestStructPrintMe(void)
{

}

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
