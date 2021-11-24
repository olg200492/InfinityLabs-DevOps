#include <stdio.h>
#include "vector.h"
void TestCreateVector()
{
    printf("---test1: VectorCreate---\n\n");
    vector_t *vector;
    size_t elem_size = 4, capacity = 5;
    vector = VectorCreate(elem_size,capacity);
    VectorDestroy(vector);
}
void TestVectorSize()
{
    printf("---test2: VectorSize---\n\n");
    vector_t *vector;
    int x = 2;
    size_t elem_size = 4, capacity = 5;
    vector = VectorCreate(elem_size,capacity);
    printf("---test2.1: Empty vecor 0 ---\n");
    if(VectorSize(vector) == 0)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    printf("---test2.2: After two append 2---\n");
    if(VectorSize(vector) == 2)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    VectorDestroy(vector);
}
void TestVectorGet()
{
    printf("---test3: VectorSet---\n\n");
    vector_t *vector;
    int x = 2;
    int y = 5;
    int z = 6;
    size_t elem_size = 4, capacity = 5;
    vector = VectorCreate(elem_size,capacity);
    printf("---test3.1: append 2 ---\n");
    VectorAppend(vector, &x);
    if ( *((int *)(VectorGet(vector, 0))) == x)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }

    printf("---test3.2: also append 5 ---\n");
    VectorAppend(vector, &y);
    printf("y = %d\n",*( (int *) (VectorGet(vector, 1) ) ));
    if( *((int *)(VectorGet(vector, 1))) == 5)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }

    printf("---test3.3: also append 6---\n");
    VectorAppend(vector, &z);
    int *te = VectorGet(vector, 2);
    if( *te == 6)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    VectorDestroy(vector);
}
void TestVectorPop()
{
    printf("---test4: VectorPop---\n\n");
    vector_t *vector;
    int x = 2;
    int y = 5;
    int z = 6;
    size_t elem_size = 4, capacity = 5;
    vector = VectorCreate(elem_size,capacity);
    printf("---test4.1: pop after append 1 ---\n");
    VectorAppend(vector, &x);
    VectorPop(vector);
    if (VectorSize(vector) == 0)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    printf("---test4.2: pop after append 2 ---\n");
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    VectorPop(vector);
    if (VectorSize(vector) == 1)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    VectorDestroy(vector);
}
void TestVecorIsEmpty()
{
    printf("---test5: VecorIsEmpty---\n\n");
    vector_t *vector;
    int x = 2;
    int y = 5;
    int z = 6;
    size_t elem_size = 4, capacity = 5;
    vector = VectorCreate(elem_size,capacity);
    printf("---test5.1: VecorIsEmpty ---\n");
    VectorAppend(vector, &x);
    VectorPop(vector);
    if (VectorIsEmpty(vector) == 0)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    printf("---test5.2: VecorIsEmpty ---\n");
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    VectorPop(vector);
    VectorPop(vector);
    if (VectorIsEmpty(vector) == 0)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    VectorDestroy(vector);
}
void TestVectorCapacity()
{
    printf("---test6: TestVectorCapacity---\n\n");
    vector_t *vector;
    int x = 2;
    int y = 5;
    int z = 6;
    size_t elem_size = 4, capacity = 4;
    vector = VectorCreate(elem_size,capacity);
    printf("---test6.1: VectorCapacity with no append ---\n");
    if (VectorCapacity(vector) == 4)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    printf("---test6.2: VectorCapacity with 6 append ---\n");
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    if (VectorCapacity(vector) == 8)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    printf("---test6.3: VectorCapacity with 11 append ---\n");
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    VectorAppend(vector, &x);
    if (VectorCapacity(vector) == 16)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    printf("---test6.4: VectorCapacity with 8 pop (3 left)---\n");
    VectorPop(vector);
    VectorPop(vector);
    VectorPop(vector);
    VectorPop(vector);
    VectorPop(vector);
    VectorPop(vector);
    VectorPop(vector);
    VectorPop(vector);
    if (VectorCapacity(vector) == 8)
    {
        printf("      V Good Job V\n");
    }
    else
    {
        printf("      X Nope X\n");
    }
    
    VectorDestroy(vector);    
}
int main()
{
    TestCreateVector();
    TestVectorSize();
    TestVectorGet();
    TestVectorPop();
    TestVecorIsEmpty();
    TestVectorCapacity();
    return 0;
}