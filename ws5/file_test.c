#include <stdio.h>	/* printf */
#include "file.h"	




void TestStructPrintMe(void);
void TestPrint(void);

typedef struct print_me{
    int num;
    void (*Print)(int item);
} print_me;

int main()
{
     
  
    //TestStructPrintMe();

    return (0);
}


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
