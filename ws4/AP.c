#include <stdio.h>
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
    3. set sword = 1
    4. while counter > 1
        4.1 for i to num
            4.1.2 if arr[i] == 1 AND sword == 0
                4.1.2.1 sword = 1
            4.1.3 else if arr[i] == 1 AND sword == 1
                4.1.3.1 arr[i] = 0
                4.1.3.2 counter--
                4.1.3.3 sword--
    5. for i to num
        5.1 if arr[i] = 1
            5.1.1 i = i % (num-1);
            5.1.1 return ++i
            
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
/*prints to stdout sizes of all data types
    print each data type his sizeof
*/
int DTypeNames()
{
  
    char list_data_type[][20] = {{"char"}, {"signed char"}, {"unsigned char"}, {"short"},
                                   {"signed short"} ,{"unsigned short"}, {"int"},
                                   {"signed int"}, {"unsigned int"}, {"short int"},
                                   {"signed short int"},{"unsigned short int"},{"long int"},
                                   {"signed long int"}, {"unsigned long int"}, {"float"},
                                   {"double"},{"long double"} };

    printf("Otuput in DTypeNames()\n");
    printf("1. Data Type 'char' size is:%lu Bytes\n", sizeof(char));
    printf("2. Data Type 'signed' char size is:%lu Bytes\n", sizeof(signed char));
    printf("3. Data Type 'unsigned char 'size is:%lu Bytes\n", sizeof(unsigned char));
    printf("4. Data Type 'short' size is:%lu Bytes\n", sizeof(short));
    printf("5. Data Type 'signed short' size is:%lu Bytes\n", sizeof(signed short));
    printf("6. Data Type 'unsigned short' size is:%lu Bytes\n", sizeof(unsigned short));
    printf("7. Data Type 'int' size is:%lu Bytes\n", sizeof(int));
    printf("8. Data Type 'signed int' size is:%lu Bytes\n", sizeof(signed int));
    printf("9. Data Type 'short int' size is:%lu Bytes\n", sizeof(short int));
    printf("10. Data Type 'signed short int' size is:%lu Bytes\n", sizeof(signed short int));

    printf("11. Data Type 'unsigned short int' size is:%lu Bytes\n", sizeof(unsigned short int));
    printf("12. Data Type 'long int' size is:%lu Bytes\n", sizeof(long int));
    printf("13. Data Type 'signed long int' size is:%lu Bytes\n", sizeof(signed long int));
    printf("14. Data Type 'unsigned long int' size is:%lu Bytes\n", sizeof(unsigned long int));
    printf("15. Data Type 'float' size is:%lu Bytes\n", sizeof(float));

    printf("16. Data Type 'double' size is:%lu Bytes\n", sizeof(double));
    printf("17. Data Type 'long double' size is:%lu Bytes\n", sizeof(long double));

}
//copies all the envirnoment variables into char** buffer in lower case, and prints them
int PrintEnv(char **arr, int col);

