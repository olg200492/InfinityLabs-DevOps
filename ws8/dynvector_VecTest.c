#include <stdio.h>
#include <stddef.h>
#include "vector.h"



void VecCheck(vector_t *vec);
void CharPrint(vector_t *vec);
void IntPrint(vector_t *vec);


int main()
{
    int i = 0;
    char x = 0;
    vector_t *vec1 = VectorCreate(sizeof(char), 50);

    printf("\nTesting vector, data type char, starting size 50\n Vector created, should be empty.\n");

    VecCheck(vec1);

    for(i = 0; i < 50; i++)
    {
        VectorAppend(vec1, &x);
        x++;
    }
    
    printf("\n50 members were added. The size should be 50, the capacity should be more than 50.\n");
    VecCheck(vec1);
    CharPrint(vec1);

    printf("\nPopping 40, size should be 10, capacity should have decreased.\n");

    for (i = 0; i < 40; i++)
    {
        VectorPop(vec1);
    }
    VecCheck(vec1);
    
    printf("\nAppended G\n");
    x = 'G';

    VectorAppend(vec1, &x);
    CharPrint(vec1);
    VectorDestroy(vec1);

}




void VecCheck(vector_t *vec)

{
    size_t size = VectorSize(vec);
    size_t cap = VectorCapacity(vec);
    int empty = VectorIsEmpty(vec);

    printf("Current size is %lu, capacity %lu, empty - %d", size, cap, empty);
}

void CharPrint(vector_t *vec)
{
    printf("\nTop value is '%c' \n", *(char*)VectorGet(vec,(VectorSize(vec)-1)));
}

void IntPrint(vector_t *vec)
{
    printf("\nTop value is '%d' \n", *(int*)VectorGet(vec,VectorSize(vec)));
}
