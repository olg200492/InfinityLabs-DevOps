#include <stdio.h> 
#include <stdlib.h>
#include "stack.h"
/* A structure to represent a stack */
struct stack {
    size_t capacity;
    size_t size;
    void **array;
}stack;
 
 
/* INPUT size_t capacity
    CALL malloc with sizeof(stack_t) SET RETURN VALUE in stack_t* stack
    IF stack EQUEL NULL
        PRINT error msg
        exit(0)
    SET stack->capacity EQUEL capacity
    SET stack->size EQUEL 0
    CALL malloc WITH stack-> capacity * sizeof(void *) SET RETURN VALUE in stack->array
    IF stack->array EQUEL NULL
        PRINT error msg
        exit(0)
    RETURN stack
*/
stack_t *StackCreate(size_t capacity)
{
    stack_t* stack = (stack_t*)malloc(sizeof(stack_t));
    if (stack == NULL)
    {
        printf("Error in allocation stack\n");
        exit(0);
    }
    stack->capacity = capacity;
    stack->size = 0;
    stack->array = (void **)malloc(capacity * sizeof(void *));
    if (stack->array == NULL)
    {
        printf("Error in allocation stack->array\n");
        exit(0);
    }
    
    return (stack);
}
/* INPUT stack_t *stack
        CALL free On VARIBLE stack->array
        SET stack->array EQUEL NULL
        CALL free ON VARIBLE stack
        SET stack EQUEL NULL
*/
void StackDestroy(stack_t *stack)
{
    free(stack->array);
    stack->array = NULL;

    free(stack);
    stack = NULL;
}
/* INPUT stack_t *stack
        IF  IsStackEmpty(stack) EQUEL 0
            RETURN NULL
        SET void *temp varible EQUEL TO stack->array[stack->size - 1]
        DECREMENT stack->size
        RETURN temp
*/
void *StackPop(stack_t *stack)
{
    if (IsStackEmpty(stack))
    {
        return NULL;
    }

    stack->size--;
    return stack->array[stack->size];
}
/*
    INPUT stack_t *stack, void *value
        IF stack->size + 1 <= stack->capacity
            INCREMENT  stack->size
            SET stack->array[stack->size - 1] EQUEL value
*/
void StackPush(stack_t *stack, void *value)
{
    if ((stack->size + 1) <= stack->capacity)
    {
        stack->size++;
        stack->array[stack->size - 1] = value;
    }
}
/*
    INPUT stack_t *stack
        IF  IsStackEmpty(stack) EQUEL 0
            RETURN NULL
        RETURN stack->array[stack->size - 1]
*/
void *StackPeek(const stack_t *stack)
{
    if (IsStackEmpty(stack))
    {
        return NULL;
    }
    return stack->array[stack->size - 1];
}
/*
    INPUT const stack_t *stack
        RETURN  stack->size
*/
size_t StackSize(const stack_t *stack)
{
    return stack->size;
}
/*
    INPUT const stack_t *stack
        RETURN (stack->size  == 0)
*/
int IsStackEmpty(const stack_t *stack)
{
    if (stack->size  == 0)
    {
        return 1;
    }
    return 0;
}

size_t StackCapacity(const stack_t *stack)
{
    return stack->capacity;
}