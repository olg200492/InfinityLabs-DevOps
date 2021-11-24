#include <stdio.h>  /*printf */
#include <stdlib.h> /*relloc,malloc */
#include <string.h> /*memcpy*/
#include "vector.h"

struct vector
{
    size_t capacity;
    size_t size;
    size_t elem_size;
    void *array;
}vector;

/*  INPUT size_t elem_size, size_t capacity 
        CALL malloc sizeof(size_t), + (elem_size * capacity) SET in vector_t *temp
            IF temp EQUEL NULL
            PRINT error msg
        SET temp->capacity EQUEL capacity
        SET temp->elem_size EQUEL elem_size
        SET temp->size EQUEL 0
        SET temp->array EQUEL (void*)malloc(sizeof(elem_size) * capacity)
    RETURN temp
*/
vector_t *VectorCreate(size_t elem_size, size_t capacity)
{
    vector_t *temp = (vector_t*)malloc(sizeof(vector));

    if (NULL == temp)
    {
        printf("Error in allocation vector_t\n");
        return NULL;
    }

    temp->array = (void*)malloc(elem_size * capacity);
    if (NULL == temp->array)
    {
        free(temp);
        printf("Error in allocation vector->array\n");
        return NULL;
    }

    temp->capacity = capacity;
    temp->elem_size = elem_size;
    temp->size = 0;   

    return temp;
}
/*  INPUT vector_t *vector, int capacity
        CALL realloc vector->array ,sizeof(void *) * capacity) SET in void *temp
        IF temp EQUEL NULL
            PRINT error msg
        SET vector->array EQUEL temp
        SET vector->capacity EQUEL capacity
*/
static void VectorResize(vector_t *vector, int capacity)
{ 
    void *temp = (void *)realloc(vector->array, vector->elem_size * capacity);
    assert(temp != NULL);
    vector->array = temp;
    vector->capacity = capacity;
}
/*INPUT:const vector_t *vector
    RETURN vector->size
*/
size_t VectorSize(const vector_t *vector)
{
    return vector->size;
}
/*INPUT:const vector_t *vector, int index
    RETURN vector->array[index]
*/
void *VectorGet(const vector_t *vector, int index)
{
    return (vector->array + index * vector->elem_size);
}
/*INPUT:vector_t *vector, const void *item
    IF vector->size == vector->capacity
        CALL VectorResize WITH vector, capacity*2
    INCREMENT vector->size++
    SET vector->array[vector->size] EQUEL item
*/
void VectorAppend(vector_t *vector, const void *item)
{
    if (vector->size  == vector->capacity)
    {
        VectorResize(vector, vector->capacity * 2);
        vector->capacity = (vector->capacity) * 2;
    } 
    
    memcpy((vector->array + vector->elem_size * vector->size), item ,vector->elem_size);
    vector->size++;
}
/*INPUT:vector_t *vector
DECREMENT vector->size--
    SET vector->array[vector->size] EQUEL NULL
IF (vector->size)*4 == vector->capacity
        CALL VectorResize WITH vector, capacity\2
*/
void VectorPop(vector_t *vector)
{
    if (vector->size > 0)
    {
        vector->size--;
    }
    if ((vector->size * 4) == vector->capacity)
    {
        VectorResize(vector, vector->capacity / 2);
        vector->capacity = vector->capacity / 2;
    }

}
/*INPUT:vector_t *vector
    CALL free ON vector->array
    CALL free ON vector
*/
void VectorDestroy(vector_t *vector)
{
    free(vector->array);
    free(vector);
}
/*INPUT:const vector_t *vector
    IF vector->size EQUEL 0
        RETURN 0
    RETURN 1
*/
int VectorIsEmpty(const vector_t *vector)
{
    return !(0 == vector->size);
}
/*INPUT:const vector_t *vector
    RETURN vector->capacity
*/
size_t VectorCapacity(const vector_t *vector)
{
    return vector->capacity;
}