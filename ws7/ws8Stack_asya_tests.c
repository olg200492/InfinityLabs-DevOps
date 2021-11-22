#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"

int main() {
  stack_t *s;
  size_t capacity = 10;
  int test_size = 6, i = 0;
  int a = 6, b = 10, f = 5;
  double c = 2.5, d = 9.9;
  char e = 'a';
 
  printf("Running tests for stack....\n\n");

  /* Make a stack */
  printf("Creating stack........\n");
  s = StackCreate(capacity);
  assert(s);

  /* Initially stack should be empty */
  if(IsStackEmpty(s)) 
  {
    printf("Stack is empty.\n");
  }
  else 
  {
    printf("Stack is not empty.\n Test failed! \n");
  }
  
  /* Now insert 6 values */
  
  printf("Pushing to stack 6 values...... \n");
  StackPush(s, (void *)&a);
  StackPush(s, (void *)&b);
  StackPush(s, (void *)&c);
  StackPush(s, (void *)&d);
  StackPush(s, (void *)&e);
  StackPush(s, (void *)&f);
  
  if(IsStackEmpty(s)) 
  {
    printf("Stack is empty after push \n Test failed!\n");
  }
  else 
  {
    printf("Stack is not empty.\n Test passed! \n");
  }

  if(StackSize(s) == test_size) 
  {
    printf("Size of stack is %d \n Test passed! \n", test_size);
  }
  else 
  {
    printf("Size of stack is %ld \n ", StackSize(s));
    printf("Size of stack is not %d \n Test faild! \n", test_size);
  }

  /* top element should be 5*/
  printf("Top element should be 5 \n");
  printf("Top element : %d \n", *(int *)StackPeek(s));

  /* pop all elements */
  printf("Pop 6 values...... \n");
  for(i = 0; i < test_size; i++) 
  {
    printf("Size of stack is %ld \n", StackSize(s));  
    void *tmp = StackPop(s);
    assert(tmp);
    
  }

  /* Stack should be empty now */
  if(IsStackEmpty(s)) 
  {
    printf("Stack is empty after pop all elements\n");
  }
  else 
  {
    printf("Stack is not empty.\n Test failed! \n");
  }
  
  StackDestroy(s);

  printf("End of tests\n");
  return 0;
}
