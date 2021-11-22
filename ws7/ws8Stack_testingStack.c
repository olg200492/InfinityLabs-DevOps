/*****************************************************
 * testingStack.c                                    *

 * automated testing for stack.c                     *

 *****************************************************/
#include <stdio.h>
#include "stack.h"
void TestSize(stack_t *stack);
void TestPop(stack_t *stack);
void TestIsEmpty(stack_t *stack);
void TestPeek(stack_t *stack);
void TestCapacity(stack_t *stack);
void TestPushOverCapacity(stack_t *stack);

int main()
{
    int capacity = 10;
    printf("----------------test1: CreateStack----------------\n\n");
    stack_t *stack;
    stack = StackCreate(capacity);
    printf("----------------test2: StackSize----------------\n\n");
    TestSize(stack);
    printf("----------------test3: IsEmpty ----------------\n\n");
    TestIsEmpty(stack);
    StackDestroy(stack);
    stack = StackCreate(10);
    if(IsStackEmpty(stack))
        printf("V\n");
    else
        printf("X\n");
    printf("----------------test4: Peek ----------------\n\n");
    TestPeek(stack);
    printf("----------------test5: TestCapacity ----------------\n\n");
    TestCapacity(stack);
    printf("----------------test6: TestPushOverCapacity ----------------\n\n");
    StackDestroy(stack);
    stack = StackCreate(2);
    TestPushOverCapacity(stack);
    StackDestroy(stack);
    printf("----------------test7: POP ----------------\n\n");
    stack = StackCreate(2);
    TestPop(stack);
    StackDestroy(stack);
    return 0;
}
void TestPop(stack_t *stack)
{
    int x = 4;
    int y = 7;
    printf("----------------test7.1: pop after push 4----------------\n");
    StackPush(stack, &x);
    if((*(int*)(StackPop(stack))) == x)
        printf("V\n");
    else
        printf("X\n");
    printf("----------------test7.2: pop after push 8 ----------------\n");
    StackPush(stack, &y);
    if((*(int*)(StackPop(stack)))  == y)
        printf("V\n");
    else
        printf("X\n");
}
void TestPushOverCapacity(stack_t *stack)
{
    int x = 3;
    StackPush(stack, &x);
    StackPush(stack, &x);
    StackPush(stack, &x);
    printf("no seg fault :)\n");
}
void TestCapacity(stack_t *stack)
{
    if(StackCapacity(stack) == 10)
        printf("V\n");
    else
        printf("X\n");
}
void TestPeek(stack_t *stack)
{
    int x = 4;
    int y = 7;
    printf("----------------test4.1: Peek after push 4----------------\n\n");
    StackPush(stack, &x);
    StackPeek(stack);
    if((*(int*)(StackPeek(stack))) == x)
        printf("V\n");
    else
        printf("X\n");
    printf("----------------test4.2: Peek after push 8 ----------------\n\n");
    StackPush(stack, &y);
    StackPeek(stack);
    if((*(int*)(StackPeek(stack)))  == y)
        printf("V\n");
    else
        printf("X\n");
    StackPop(stack);
    printf("----------------test4.3: Peek after pop 4 ----------------\n\n");
    if((*(int*)(StackPeek(stack)))  == x)
        printf("V\n");
    else
        printf("X\n");
}
void TestIsEmpty(stack_t *stack)
{
    printf("----------------test3.1: stack is not empty ----------------\n");
    if(IsStackEmpty(stack))
        printf("X\n");
    else
        printf("V\n");
    StackPop(stack);
    StackPop(stack);
    printf("----------------test3.2: stack is empty ----------------\n");
    if(IsStackEmpty(stack))
        printf("V\n");
    else
        printf("X\n");
    printf("----------------test3.3: stack removed and created ----------------\n");
}
void TestSize(stack_t *stack)
{
    int x = 7;
    printf("----------------test2.1: StackSize Empty ----------------\n");
    if(StackSize(stack) == 0)
        printf("V\n");
    else
        printf("X\n");
    StackPush(stack, &x);
    printf("----------------test2.2: StackSize with value 1 (1 push)----------------\n");
    if(StackSize(stack) == 1)
        printf("V\n");
    else
        printf("X\n");
    printf("----------------test2.3: StackSize with value 2 (3 push 1 pop)----------------\n");
    StackPush(stack, &x);
    StackPush(stack, &x);
    StackPop(stack);
    if(StackSize(stack) == 2)
        printf("V\n");
    else
        printf("X\n");
}