#include <stdio.h>	/* printf */
#include <stdlib.h>
#include <stddef.h>

int * IsSumFound(int arr[],int sum, int size);
int main() {
  int arr[] = {2, 4, 7, 12, 14};


  int * a = IsSumFound(arr, 21, 5);
  if(a[0] == 1)
  {
    printf("a[0] == %d\n",a[0]);
    printf("index1 == %d\n",a[1]);
    printf("index1 == %d\n",a[2]);
  }
  else
  {
    printf("a[0] == %d\n",a[0]);
  }
  free(a);
  a = NULL;
  return 0;
}

int * IsSumFound(int arr[],int sum, int size)
{
  int i = 0;
  int j = 0;
  int flag = 0;
  int index1 = -1;
  int index2 = -1;
  int num;
  int *arr1 = NULL;
  for(i = 0; i < size && arr[i]< sum;i++)
  {
    if (flag == 1)
    {
      break;
    }
    num = sum - arr[i];
    j = i + 1;
    while (j < size && arr[j] < sum)
    {
      if (arr[j] == num)
      {
        index1 = i;
        index2 = j;
        flag = 1;
        break;
      }
      j++;
    }
    
  }
  if (flag == 1)
  {
    arr1 = (int*)malloc(sizeof(int)*3);
    if (arr1 != NULL)
    {
      arr1[0] = 1;
      arr1[1] = index1;
      arr1[2] = index2;
    }
    else
    {
      printf("Error allocation\n");
      exit(0);
    }
  }
  else
  {
    arr1 = (int*)malloc(sizeof(int));
    if (arr1 != NULL)
    {
      arr1[0] = 0;     
    }
    else
    {
      printf("Error allocation\n");
      exit(0);
    }
  }
  return arr1;
}