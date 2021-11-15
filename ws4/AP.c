#include "arraypointers.h"

/*recieves a matrix and calculates the sum of each row, sums of rows should be saved in result array, passed by user, return 0 if successful.
    1. set i = 0, j = 0, sum =0
    2.for i to row
        2.1 for j to col
            2.1.1 sum+= matrix[i][j]
        2.2 row[i] = sum
        2.3 sum = 0
    3. return 0
*/

int MtxSum(int col, int row, const int matrix [row][col], int arr[row])
{
    int i = 0;
    int j = 0;
    int sum = 0;

    for (i = 0;i < row;i++)
    {
        for (j = 0;j < col; j++)
        {
            sum+= matrix[i][j];
        }

        arr[i] = sum;
        sum = 0;
    }
    return (0);
}
/* calculate last man standing position in josephus game.
    1. set array size of num initilize to 1
    2. set counter = num
    3. set 
    3.
*/
int Lucky(int num)
{
    int arr[num];
    int i = 0;
    int counter = num;
    int sword = 1;
    for(i = 0; i < num; i++)
    {
        arr[i] = 1;
    }

    while (counter > 1)
    {
        for ( i = 0; i < num; i++)
        {
            if (arr[i] == 1 && sword == 0)
            {
                sword = 1;
            }
            else if (arr[i] == 1 && sword == 1)
            {
                arr[i] = 0;
                sword = 0;
                counter--;
            }            
        }
    }

    for (i = 0; i < num ; i++)
    {
        if(arr[i] == 1)
        {
            i = i % (num-1);
            return ++i;
        }
    }


    
}
//prints to stdout sizes of all data types
int DTypeNames();
//copies all the envirnoment variables into char** buffer in lower case, and prints them
int PrintEnv(char **arr, int col);

