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
int main() {

   //TestStackCreate();
   //TestStackDestroy();
   TestStackPop();

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
    char str[] = "Bob";
    StackPush(stack1, &num_one);
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%d\n", StackCapacity(stack1), StackSize(stack1), *(int*) StackPeek(stack1) );    
    StackPush(stack1, &num_two);
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%d\n", StackCapacity(stack1), StackSize(stack1), (*(int*)StackPeek(stack1)));
    StackPush(stack1, &c);    
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%c\n", StackCapacity(stack1), StackSize(stack1), (*(char*)StackPeek(stack1)));
    StackPush(stack1, str);    
    printf("stack1 capacidy is: %lu, size is: %lu, top value is:%s\n", StackCapacity(stack1), StackSize(stack1), (char*)StackPeek(stack1));

    char *c_pointer = (char*)StackPop(stack1);
    if(strcmp(*c_pointer, "Bob"))
    {
        printf("Test case 1 StackPop PASSED:returned value  for StackPop is %s\n",c_pointer);
    }
    else
    {
        printf("Test case 1 StackPop FAILED:returned value  for StackPop is %s\n",c_pointer);
    } 

    c_pointer = StackPop(stack1);
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

    num_p = StackPop(stack1);
    if(num_p == NULL)
    {
        printf("Test case 3 StackPop PASSED:returned value for StackPop is %p\n",num_p);
    }
    else
    {
        printf("Test case 3 StackPop FAILED:returned value for StackPop is %p\n",num_p);
    } 

    StackDestroy(stack1);
}

void TestStackPush(void)
{

}