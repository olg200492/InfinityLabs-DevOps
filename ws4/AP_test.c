#include <stdio.h>	/* printf */
#include <string.h>
#include "arraypointers.h"	

void TestMtxSum(void);
void TestLucky(void);
//void TestDTypeNames(void);
//void TestPrintEnv(void);
void PrintArray(int arr[], int size);


//extern char **environ;
//char **buffer;

int main(int argc, char *argv[], char * envp[])
{
     
    TestLucky();
    //TestMtxSum();
    return (0);
}

void TestMtxSum()
{
    int matrix1[2][2] = {{1,2}, {3,4}};
    int sum_matrix_1[2] = {0, 0};
    int output_sum_matrix_1[2] = {3, 7};
    int matrix1_row = 2;
    int matrix1_col = 2;

    int matrix2[2][3] = {{1,2,3}, {5, 6, 7}};
    int sum_matrix_2[2] = {0, 0};
    int output_sum_matrix_2[2] = {6, 18};
    int matrix2_row = 2;
    int matrix2_col = 3;

    int matrix3[3][3] = {{1,1,1}, {1, 1, 1}, {1, 1, 1}};
    int sum_matrix_3[3] = {0, 0, 0};
    int output_sum_matrix_3[3] = {3, 3, 3};
    int matrix3_row = 3;
    int matrix3_col = 3;

    int i = 0;
    int flag = 0;
    int status;
    status = MtxSum(matrix1_col, matrix1_row, matrix1, sum_matrix_1);
    if(status == 0)
    {
        //Test case 1 ********************************************************************
        for( i = 0; i < matrix1_row; i++)
        {
            if (sum_matrix_1[i] != output_sum_matrix_1[i])
            {   
                flag = 1;
                printf("Test case 1 MtxSum FAILED!!!: outcome should be");
                PrintArray(output_sum_matrix_1, matrix1_row);
                printf("but function returned");
                PrintArray(sum_matrix_1, matrix1_row);
            }
        }
        if(flag == 0)
        {
            printf("Test case 1 MtxSum PASSED: outcome should be");
            PrintArray(output_sum_matrix_1, matrix1_row);
            printf("function returned");
            PrintArray(sum_matrix_1, matrix1_row);
        }
        flag = 0;

    }
    else
    {
        printf("Test case 1 MtxSum FAILED!!!:function did not returned 0 as successful");
    }

     //Test case 2 ********************************************************************
    status = MtxSum(matrix2_col, matrix2_row, matrix2, sum_matrix_2);
    if(status == 0)
    {
       
        for( i = 0; i < matrix2_row; i++)
        {
            if (sum_matrix_2[i] != output_sum_matrix_2[i])
            {   
                flag = 1;
                printf("Test case 2 MtxSum FAILED!!!: outcome should be");
                PrintArray(output_sum_matrix_2, matrix2_row);
                printf("but function returned");
                PrintArray(sum_matrix_2, matrix2_row);
            }
        }
        if(flag == 0)
        {
            printf("Test case 2 MtxSum PASSED: outcome should be");
            PrintArray(output_sum_matrix_2, matrix2_row);
            printf("function returned");
            PrintArray(sum_matrix_2, matrix2_row);
        }
        flag = 0;

    }
    else
    {
        printf("Test case 2 MtxSum FAILED!!!:function did not returned 0 as successful");
    }

     //Test case 3 ********************************************************************
    status = MtxSum(matrix3_col, matrix3_row, matrix3, sum_matrix_3);
    if(status == 0)
    {
       
        for( i = 0; i < matrix3_row; i++)
        {
            if (sum_matrix_3[i] != output_sum_matrix_3[i])
            {   
                flag = 1;
                printf("Test case 3 MtxSum FAILED!!!: outcome should be");
                PrintArray(output_sum_matrix_3, matrix3_row);
                printf("but function returned");
                PrintArray(sum_matrix_3, matrix3_row);
            }
        }
        if(flag == 0)
        {
            printf("Test case 3 MtxSum PASSED: outcome should be");
            PrintArray(output_sum_matrix_3, matrix3_row);
            printf("function returned");
            PrintArray(sum_matrix_3, matrix3_row);
        }
        flag = 0;

    }
    else
    {
        printf("Test case 3 MtxSum FAILED!!!:function did not returned 0 as successful");
    }



    

}


void TestLucky(void)
{
    int size1 = 16;
    int index1 = 0;

    int size2 = 5;
    int index2 = 2;

    int size3 = 20;
    int index3 = 8;

    int index_outcome = Lucky(size1);

    if (index_outcome == index1)
    {
        printf("Test case 1 Lucky PASSED:group size %d, soldier in index %d last one standing.\n", size1, index_outcome);
    }
    else
    {
        printf("Test case 1 LUCKY FAILED!!!:group size %d, should return index: %d,but returened: %d.\n", size1, index1, index_outcome );
    }

    index_outcome = Lucky(size2);

    if (index_outcome == index2)
    {
        printf("Test case 1 Lucky PASSED:group size %d, soldier in index %d last one standing.\n", size2, index_outcome);
    }
    else
    {
        printf("Test case 1 LUCKY FAILED!!!:group size %d, should return index: %d,but returened: %d.\n", size2, index2, index_outcome );
    }

    index_outcome = Lucky(size3);

    if (index_outcome == index3)
    {
        printf("Test case 1 Lucky PASSED:group size %d, soldier in index %d last one standing.\n", size3, index_outcome);
    }
    else
    {
        printf("Test case 1 LUCKY FAILED!!!:group size %d, should return index: %d,but returened: %d.\n", size3, index3, index_outcome );
    }



}
/*
void TestDTypeNames(void)
{
    printf("Outputof PrintEnv should be:\n");
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

    DTypeNames();

}

void TestPrintEnv(void)
{
    int col1 = sizeof(environ) / sizeof(char);
    char **arr;
    PrintEnv();
    
    int flag = 0;
    for(; *arr; arr++)
    {
        char *PATH = *arr;
        PATH = toupper(PATH);
        if(getenv(PATH) == NULL)
        {   
            flag =1;
            printf("Test case  PrintEnv FAILED!!!:%s path does not exist in buffer\n",PATH);

        }
    }
    if (flag == 0)
    {
        printf("Test case  PrintEnv PASSED!!!:%s path does not exist in buffer\n");
    }
    

}
*/
void PrintArray(int arr[], int size)
{   int i = 0;

    printf("[");
    for ( i = 0; i < size; i++)
    {
        printf("[%d]", arr[i]);

    }
    printf("]\n");
}