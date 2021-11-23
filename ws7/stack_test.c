/*****************************************************
 * STACK_TEST.C                                       *

 * tests for stack.c funtions                         *

 *****************************************************/ 
#include <stdio.h>
#include <assert.h> /* assert */
#include <string.h>
#include "./stack.h"

void TestStackCreate(void);
void TestStackDestroy(void);
void TestStackPop(void);
void TestStackPush(void);
void TestStackPeek(void);
void TestStackSize(void);
void TestIsStackEmpty(void);
void TestStackCapacity(void);
int main()
{

   //TestStackCreate();
   //TestStackDestroy();
   TestStackPop();
   //TestStackPush();
   //TestStackPeek();
   //TestStackSize();
   //TestIsStackEmpty();
   //TestStackCapacity();

   return (0);
}

void TestStackCreate(void)
{
    stack_t *stack1 = StackCreate(5);
    assert(stack1 != NULL);
    printf("Test 1 StackCreate PASSED:stack1 capacidy is: %lu, size is: %lu\n", StackCapacity(stack1), StackSize(stack1));
    StackDestroy(stack1);

    stack_t *stack2 = StackCreate(1);
    assert(stack2 != NULL);
    printf("Test 2 StackCreate PASSED:stack2 capacidy is: %lu, size is: %lu\n", StackCapacity(stack2), StackSize(stack2));
    StackDestroy(stack2);

}

void TestStackDestroy(void)
{
    stack_t *stack1 = StackCreate(5);
    assert(stack1 != NULL);
    StackDestroy(stack1);
    assert(stack1 != NULL);
    stack1 = NULL;

    stack_t *stack2 = StackCreate(5);
    assert(stack2 != NULL);
    StackDestroy(stack2);
    stack2 = NULL;
    printf("Run VLG for memory leak \n");
}

void TestStackPop(void)
{
    stack_t *stack1 = StackCreate(5);
    int num_one = 1;
    int num_two = 2;
    char c = 'A';
    StackPush(stack1, &num_one);
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%d\n", StackCapacity(stack1), StackSize(stack1), *(int*) StackPeek(stack1) );    
    StackPush(stack1, &num_two);
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%d\n", StackCapacity(stack1), StackSize(stack1), (*(int*)StackPeek(stack1)));
    StackPush(stack1, &c);    
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%c\n", StackCapacity(stack1), StackSize(stack1), (*(char*)StackPeek(stack1)));
   

  
    char *c_pointer = StackPop(stack1);
    if(*(c_pointer) == 'A')
    {
        printf("Test case 1 StackPop PASSED:returned value  for StackPop is %c\n",*(c_pointer));
    }
    else
    {
        printf("Test case 1 StackPop FAILED:returned value  for StackPop is %c\n",*(c_pointer));
    } 

    int *num_p = StackPop(stack1);
    if(*(num_p) == 2)
    {
        printf("Test case 2 StackPop PASSED:returned value for StackPop is %d\n",*(num_p));
    }
    else
    {
        printf("Test case 2 StackPop FAILED:returned value for StackPop is %d\n",*(num_p));
    }  

    num_p = StackPop(stack1);
    if(*(num_p) == 1)
    {
        printf("Test case 3 StackPop PASSED:returned value for StackPop is %d\n",*(num_p));
    }
    else
    {
        printf("Test case 3 StackPop FAILED:returned value for StackPop is %d\n",*(num_p));
    }  


    StackDestroy(stack1);
}

void TestStackPush(void)
{
    stack_t *stack1 = StackCreate(5);
    int num_one = 1;
    int num_two = 2;
    char c = 'A';
    char str[] = "Bob";
    StackPush(stack1, &num_one);
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%d\n", StackCapacity(stack1), StackSize(stack1), *(int*) StackPeek(stack1) );    
    StackPush(stack1, &num_two);
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%d\n", StackCapacity(stack1), StackSize(stack1), (*(int*)StackPeek(stack1)));
    StackPush(stack1, &c);    
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%c\n", StackCapacity(stack1), StackSize(stack1), (*(char*)StackPeek(stack1)));
    StackPush(stack1, str);    
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%s\n", StackCapacity(stack1), StackSize(stack1), (char*)StackPeek(stack1));

    StackDestroy(stack1);
}

void TestStackPeek(void)
{
    stack_t *stack1 = StackCreate(5);
    int num_one = 1;
    int num_two = 2;
    char c = 'A';
    char str[] = "Bob";
    StackPush(stack1, &num_one);
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%d\n", StackCapacity(stack1), StackSize(stack1), *(int*) StackPeek(stack1) );    
    StackPush(stack1, &num_two);
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%d\n", StackCapacity(stack1), StackSize(stack1), (*(int*)StackPeek(stack1)));
    StackPush(stack1, &c);    
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%c\n", StackCapacity(stack1), StackSize(stack1), (*(char*)StackPeek(stack1)));
    StackPush(stack1, str);    
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%s\n", StackCapacity(stack1), StackSize(stack1), (char*)StackPeek(stack1));
    
    StackDestroy(stack1);
}

void TestStackSize(void)
{
    stack_t *stack1 = StackCreate(5);
    int num_one = 1;
    int num_two = 2;
    char c = 'A';
    
    if(StackSize(stack1) == 0)
    {
        printf("Test case 1 StackSize PASSED:returned size of  for Stack is %lu\n", StackSize(stack1));
    }
    else
    {
        printf("Test case 1 StackSize FAILED:returned size of  for Stack is %lu\n", StackSize(stack1));
    }

    StackPush(stack1, &num_one);
    
    if(StackSize(stack1) == 1)
    {
        printf("Test case 2 StackSize PASSED:returned size of  for Stack is %lu\n", StackSize(stack1));
    }
    else
    {
        printf("Test case 2 StackSize FAILED:returned size of  for Stack is %lu\n", StackSize(stack1));
    }


    StackDestroy(stack1);
}

void TestIsStackEmpty(void)
{
    stack_t *stack1 = StackCreate(5);
    int num_one = 1;
    int num_two = 2;
    char c = 'A';
    
    if(IsStackEmpty(stack1) == 1)
    {
        printf("Test case 1 StackCapacity PASSED:returned value of for IsStackEmpty(stack1) is %d\n", IsStackEmpty(stack1));
    }
    else
    {
        printf("Test case 1 StackCapacity FAILED:returned value of for IsStackEmpty(stack1) is %d\n", IsStackEmpty(stack1));
    }

    StackPush(stack1, &num_one);

    if(IsStackEmpty(stack1) == 1)
    {
        printf("Test case 1 StackCapacity FAILED:returned value of for IsStackEmpty(stack1) is %d\n", IsStackEmpty(stack1));
    }
    else
    {
        printf("Test case 1 StackCapacity PASSED:returned value of for IsStackEmpty(stack1) is %d\n", IsStackEmpty(stack1));
    }

    StackDestroy(stack1);
    
}

void TestStackCapacity(void)
{
    stack_t *stack1 = StackCreate(5);
    
    
    if(StackCapacity(stack1) == 5)
    {
        printf("Test case 1 StackCapacity PASSED:returned value of for StackCapacity(stack1) is %lu\n", StackCapacity(stack1));
    }
    else
    {
        printf("Test case 1 StackCapacity FAILED:returned value of for IsStackEmpty(stack1) is %lu\n", StackCapacity(stack1));
    }

    StackDestroy(stack1);

    stack1 = StackCreate(1);
    if(StackCapacity(stack1) == 1)
    {
        printf("Test case 2 StackCapacity PASSED:returned value of for StackCapacity(stack1) is %lu\n", StackCapacity(stack1));
    }
    else
    {
        printf("Test case 2 StackCapacity FAILED:returned value of for IsStackEmpty(stack1) is %lu\n", StackCapacity(stack1));
    }
}