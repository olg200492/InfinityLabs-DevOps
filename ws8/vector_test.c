/*****************************************************
 * VECTOR_TEST.C                                      *

 * tests for vector_test.c funtions                   *

 *****************************************************/ 
#include <stdio.h> /* printf */
#include "vector.h"

void TestVectorCreate(void);
void TestVectorAppend(void);
void TestVectorGet(void);
void TestVectorPop(void);
void TestVectorDestroy(void);
void TestVectorEmpty(void);
void TestVectorCapacity(void);
void TestVectorResize(void);
void TestVectorSize(void);
int main()
{
    
  TestVectorCreate();
  TestVectorCapacity();
  TestVectorSize();
  TestVectorAppend();
  TestVectorGet();
  TestVectorPop();

  TestVectorResize();
  TestVectorCapacity();
  TestVectorEmpty();
    TestVectorDestroy();
   return (0);
}
void TestVectorCreate(void)
{
    vector_t *vector = VectorCreate(sizeof(int), 5);

    if (VectorCapacity(vector) == 5)
    {
        printf("TEST 1 VectorCreate PASSED:vector capacity: %lu,size: %lu\n", VectorCapacity(vector), VectorSize(vector));
    }
    else
    {
        printf("TEST 1 VectorCreate FAILED:vector capacity: %lu,size: %lu\n", VectorCapacity(vector), VectorSize(vector));
    }


    VectorDestroy(vector);
}

void TestVectorAppend(void)
{
    vector_t *vector = VectorCreate(sizeof(int), 5);
    int num1 = 8;
    int num2 = 7;
    int num3 = 6;

    VectorAppend(vector, &num1);
    VectorAppend(vector, &num2);
    VectorAppend(vector, &num3);

    int *temp = VectorGet(vector, 2);

    if(*temp == 6)
    {
        printf("TEST 1 VectorAppend PASSED:vector capacity: returned %d\n", *temp);
    }
    else
    {
        printf("TEST 1 VectorAppend FAILED:vector capacity: returned %d\n", *temp);
    }

    temp = VectorGet(vector, 1);
    
    if(*temp == 7)
    {
        printf("TEST 2 VectorAppend PASSED:vector capacity: returned %d\n", *temp);
    }
    else
    {
        printf("TEST 2 VectorAppend FAILED:vector capacity: returned %d\n", *temp);
    }

    temp = VectorGet(vector, 0);
    
    if(*temp == 8)
    {
        printf("TEST 3 VectorAppend PASSED:vector capacity: returned %d\n", *temp);
    }
    else
    {
        printf("TEST 3 VectorAppend FAILED:vector capacity: returned %d\n", *temp);
    }

    VectorDestroy(vector);
}

void TestVectorGet(void)
{
    vector_t *vector = VectorCreate(sizeof(char), 5);

    char ch1 = 'a';
    char ch2 = 'b';
    char ch3 = 'c';

    VectorAppend(vector, &ch1);
    VectorAppend(vector, &ch2);
    VectorAppend(vector, &ch3);

    char *temp = VectorGet(vector, 2);

    if (*temp == 'c')
    {
        printf("TEST 1 VectorGet PASSED:vector capacity: returned %c\n", *temp);
    }
    else
    {
        printf("TEST 1 VectorGet FAILED:vector capacity: returned %c\n", *temp);
    }

    temp = VectorGet(vector, 1);
    
    if(*temp == 'b')
    {
        printf("TEST 2 VectorGet PASSED:vector capacity: returned %c\n", *temp);
    }
    else
    {
        printf("TEST 2 VectorGet FAILED:vector capacity: returned %c\n", *temp);
    }

    temp = VectorGet(vector, 0);
    
    if(*temp == 'a')
    {
        printf("TEST 3 VectorGet PASSED:vector capacity: returned %c\n", *temp);
    }
    else
    {
        printf("TEST 3 VectorGet FAILED:vector capacity: returned %c\n", *temp);
    }

    VectorDestroy(vector);
}

void TestVectorPop(void)
{

    vector_t *vector = VectorCreate(sizeof(int), 5);

    int num1 = 8;
    int num2 = 7;
    int num3 = 6;

    VectorAppend(vector, &num1);
    VectorAppend(vector, &num2);
    VectorAppend(vector, &num3);

    VectorPop(vector);

    char *temp = VectorGet(vector, 1);
    
    if (*temp == 7)
    {
        printf("TEST 1 VectorPop PASSED\n");
    }
    else
    {
        printf("TEST 1 VectorPop FAILED\n");
    }

    temp = VectorGet(vector, 0);
    
    if (*temp == 8)
    {
        printf("TEST 2 VectorPop PASSED\n");
    }
    else
    {
        printf("TEST 2 VectorPop FAILED\n");
    }

    VectorDestroy(vector);
}

void TestVectorDestroy(void)
{
    vector_t *vector = VectorCreate(sizeof(int), 5);
    VectorDestroy(vector);
    printf("Run VALGRIND to see if VectorDestroy worked\n");
}

void TestVectorEmpty(void)
{
    vector_t *vector = VectorCreate(sizeof(int), 5);

    if (VectorIsEmpty(vector) == 0)
    {
        printf("TEST 1 VectorIsEmpty PASSED: vector is empty\n");
    }
    else
    {
        printf("TEST 1 VectorIsEmpty FAILED: vector is not empty\n");
    }
    int num = 8;
    VectorAppend(vector, &num);

     if (VectorIsEmpty(vector) == 1)
    {
        printf("TEST 2 VectorIsEmpty PASSED: vector is not empty\n");
    }
    else
    {
        printf("TEST 2 VectorIsEmpty FAILED: vector is  empty\n");
    }

    VectorDestroy(vector);
}

void TestVectorCapacity(void)
{
    vector_t *vector = VectorCreate(sizeof(int), 5);

    if(VectorCapacity(vector) == 5)
    {
        printf("TEST 1 VectorCapacity PASSED:vector capacity: %lu\n", VectorCapacity(vector));
    }
    else
    {
        printf("TEST 1 VectorCapacity FAILED:vector capacity: %lu\n", VectorCapacity(vector));
    }
    VectorDestroy(vector);
}

void TestVectorResize(void)
{
    vector_t *vector = VectorCreate(sizeof(int), 5);
    printf("vector capacity is: %lu\n", VectorCapacity(vector));
    int num = 1;
    VectorAppend(vector, &num);
    VectorAppend(vector, &num);
    VectorAppend(vector, &num);
    VectorAppend(vector, &num);
    VectorAppend(vector, &num);
    VectorAppend(vector, &num);

    if (VectorCapacity(vector) == 20)
    {
        printf("TEST 1 VectorResize PASSED:vector capacity: %lu\n", VectorCapacity(vector));
    }
    else
    {
        printf("TEST 1 VectorResize FAILED:vector capacity: %lu\n", VectorCapacity(vector));
    }
    VectorDestroy(vector);
}

void TestVectorSize(void)
{
    vector_t *vector = VectorCreate(sizeof(int), 5);
    size_t temp = VectorSize(vector);

    if (temp == 0)
    {
        printf("TEST 1 VectorSize PASSED:vector size: %lu\n", temp);
    }
    else
    {
        printf("TEST 1 VectorSize FAILED:vector size: %lu\n", temp);
    }
    int num = 1;
    VectorAppend(vector, &num);

    temp = VectorSize(vector);

    if (temp == 1)
    {
        printf("TEST 2 VectorSize PASSED:vector size: %lu\n", temp);
    }
    else
    {
        printf("TEST 2 VectorSize FAILED:vector size: %lu\n", temp);
    }

    VectorDestroy(vector);
}