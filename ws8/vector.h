#ifndef __VECTOR_H__
#define __VECTOR_H__
#include <stddef.h> /* size_t data type */


typedef struct vector vector_t;

/* Creates vector varible ,recives size of element
    Input:
    elem_size - Element size
    capacity - Initial vector size
    
    Output:    
    Address of new vector varible

    Time complexity
    O(1)
    */
vector_t *VectorCreate(size_t elem_size, size_t capacity);
/* Returns total number of items in vector

 */
size_t VectorSize(const vector_t *vector);
/* Resizes vector size (in .c file)
static void VectorResize(vector_t *vector, int capacity);*/
/* Adds item at end of array*/
void VectorAppend(vector_t *vector, const void *item);
/* Returns reference in index */
void *VectorGet(const vector_t *vector, int index);
/* Deletes item at the end of array */
void VectorPop(vector_t *vector);
/*Deletes vector data structore */
void VectorDestroy(vector_t *vector);
/*Checks if vector is empty,True returns 0, False returns 1 */
int VectorIsEmpty(const vector_t *vector);
/*Returns capacity size*/
size_t VectorCapacity(const vector_t *vector);

#endif